#!/usr/bin/env python3
"""
Golden model: MXFINAL residue-accumulate engine, sliding-accumulator datapath
(the fourth sibling of fp4_golden.py / fp8_golden.py / m2_golden.py's frames).

  result = (Sa*Sw)*p1 + (Sar*Sw)*p2 + acc
    p1 = sum(code_a *code_b ) -> 13b signed, |p1| <= 2304  (fp4_to_code SoP)
    p2 = sum(code_ar*code_b ) -> 13b signed, |p2| <= 2304
    Sa,Sar,Sw = E8M0 raw bytes; Sar <= Sa is PROVEN (residue_scale_check
      against the microxcaling reference - see project handoff)
    acc = FP32 old accumulator

Single sliding-accumulator frame (anchor selected by p1==0 - one mux, NOT a
runtime leading-bit comparator): F (p1, or p2 when p1==0) sits frame-resident;
the other product term and the accumulator each slide in via a per-term
clamped right shift (clamped at THAT TERM'S OWN bit width - 13 for the
product, 25 for the accumulator's signed mantissa - not at REMAIN). REMAIN=36
and the three bypasses are derived and finalized (see the constants section
below for the exact derivation); this replaces the old absolute-window
accumulate the same way the plain-MXFP4 sliding frame replaced its
predecessor.

Checked against exact Fraction arithmetic + the project's output conventions
(flush subnormal *results* to +0, clamp overflow to max finite, no Inf/NaN
handling, bypass returns old_acc verbatim) - same conventions as
fp4_golden.py.

Usage:
  python3 mxfinal_golden.py                 Verify the golden model only
                                             (745k+ directed/random/worst-
                                             corner/acc_shift-boundary vectors
                                             vs the exact-rational reference).
                                             Writes nothing. Exit code 0 iff
                                             fail == 0.

  python3 mxfinal_golden.py --emit-vectors   Run the SAME full verification
                                             first. If any check fails, abort
                                             with a nonzero exit code and
                                             write nothing. If verification
                                             passes, deterministically
                                             (re)generate
                                             tb/mxfinal_unit_vectors.hex from a
                                             fixed RNG seed (see EMIT_SEED
                                             below) - same file every run, on
                                             any machine, until the seed/
                                             vector count is deliberately
                                             changed.
"""

from fractions import Fraction
import random, sys, argparse
from pathlib import Path

E8M0_BIAS      = 127
PSUM_MAX       = 16 * 144           # |p1|,|p2| <= 2304 < 2^12
_CODE_MAG      = [0, 1, 2, 3, 4, 6, 8, 12]   # fp4_to_code magnitude table

# ---- constants (must match RTL - mxdotp_pkg.sv's MXFINAL SLIDING-
#      ACCUMULATOR FRAME section) ----
#
# MAX_ACC_SHIFT = 13. Same bound as plain MXFP4: the worst-case combined
#   frame-resident-scale coefficient is |p1|+|p2| <= 4608 (both terms at
#   delta=0) < 2^13 = 8192, so the acc-dominates bypass proof carries over
#   unchanged - no separate "combine" threshold is needed once F and SECOND
#   are each properly bounded by their own width.
#
# REMAIN = 36 (FINALIZED - confirmed on-hardware via the compiled RTL against
#   this same golden model, 106k+ vectors, 0 mismatches). Derivation: the
#   worst catastrophic-cancellation corner has F and SECOND (both exact,
#   delta<=11) combine to a minimum nonzero magnitude of 2^(REMAIN-11); the
#   accumulator's clamped contribution reaches at most ~2^23 in the tightest
#   single-bit-shift corner. For the guaranteed nonzero |word| to stay >= 2^24
#   (keeping the round bit inside exactly-tracked data, never inside the
#   collapsed sticky region):
#       2^(REMAIN-11) - 2^23 >= 2^24  =>  2^(REMAIN-11) >= 3*2^23  =>  REMAIN >= 36
#   The RTL's MXF_FRAME_WIDTH=38 / MXF_LZC_WIDTH=74 were derived from the same
#   knife-edge no-overflow proof plain MXFP4 uses, re-proven for the F+SECOND
#   resident pair - see mxdotp_pkg.sv for that derivation (the golden model
#   itself needs no fixed word width, since Python integers are unbounded).
#
# ACC_SHIFT_CONST = 148 = 127 + 23 - 2, unchanged from plain MXFP4.
MAX_ACC_SHIFT   = 13
REMAIN          = 36
ACC_SHIFT_CONST = 148


# ---------------------------------------------------------------------------
# FP32 helpers
# ---------------------------------------------------------------------------
def fp32_bits_to_fraction(bits):
    """Exact value of an FP32 bit pattern, honoring subnormals."""
    sign = -1 if (bits >> 31) & 1 else 1
    E = (bits >> 23) & 0xFF
    mant = bits & 0x7FFFFF
    if E == 0:
        return sign * Fraction(mant, 1 << 23) * Fraction(2) ** (-126)
    return sign * Fraction((1 << 23) | mant, 1 << 23) * Fraction(2) ** (E - 127)


def _floor_log2(m):
    e = m.numerator.bit_length() - m.denominator.bit_length()
    while Fraction(2) ** e > m:
        e -= 1
    while Fraction(2) ** (e + 1) <= m:
        e += 1
    return e


def _round_half_even(x):
    fl = x.numerator // x.denominator
    rem = x - fl
    if rem < Fraction(1, 2):
        return fl
    if rem > Fraction(1, 2):
        return fl + 1
    return fl if (fl % 2 == 0) else fl + 1


def fraction_to_fp32_rtl(v):
    """
    Round an exact Fraction to FP32 bits via plain RNE + the RTL's known,
    documented clamps: overflow -> 0x7f7fffff (Known Limitation #3, the RTL
    cannot emit true Inf); underflow/subnormal-would-be-needed -> flush to
    signed zero. This is a PURE mathematical oracle - it does NOT know about
    the bypass-preserves-subnormal-accumulator rule (see NOTE in run_batch).
    """
    if v == 0:
        return 0x00000000
    sign = 1 if v < 0 else 0
    m = abs(v)
    e = _floor_log2(m)
    scaled = m * Fraction(2) ** (23 - e)
    n = _round_half_even(scaled)
    if n == (1 << 24):
        n = 1 << 23
        e += 1
    biased = e + 127
    if biased >= 255:
        return (sign << 31) | (0xFE << 23) | 0x7FFFFF
    if biased <= 0:
        return sign << 31
    return (sign << 31) | (biased << 23) | (n - (1 << 23))


# ---------------------------------------------------------------------------
# Per-term clamped placement - the corrected mechanism
# ---------------------------------------------------------------------------
def place_clamped(v, sh, own_width):
    """
    Place signed integer v with its LSB at word-bit `sh`.
      sh >= 0: exact left shift, never truncated.
      sh <  0: right shift by rs=-sh, clamped at MIN(rs, own_width) - v's own
               bit width, beyond which further shifting is a proven no-op
               (arithmetic shift of an own_width-bit value by >=own_width
               positions always yields exactly 0 or -1). Sticky is set
               whenever ANY bits are genuinely dropped, i.e. whenever
               v != (contrib << clamped_rs), regardless of whether the
               required shift was <= own_width or had to be clamped.
    """
    if sh >= 0:
        return v << sh, False
    rs = -sh
    clamped_rs = min(rs, own_width)
    contrib = v >> clamped_rs
    dropped = v - (contrib << clamped_rs)
    return contrib, (dropped != 0)


def _finalize_word(word, tail_sticky, R, scale_exp):
    """mx_find_lead + mx_finalize, transcribed faithfully (neg_adjust,
    carry-out-of-all-ones renormalization, exponent clamps - all unchanged
    from the plain-MXFP4 reference these were originally named after,
    fp4_find_lead/fp4_finalize, before Phase A.1 folded all four formats'
    copies into the shared mx_find_lead/mx_finalize modules)."""
    sign = 1 if word < 0 else 0
    if sign and tail_sticky:
        mag = ~word                          # |word|-1, implied (1-eps) tail
    else:
        mag = -word if sign else word
    if mag <= 0:
        return sign << 31
    lead_pos = mag.bit_length() - 1

    unbiased = lead_pos - (R + 2) + scale_exp
    mant_out = (mag >> (lead_pos - 23)) & 0x7FFFFF if lead_pos >= 23 \
        else (mag << (23 - lead_pos)) & 0x7FFFFF
    round_bit = (mag >> (lead_pos - 24)) & 1 if lead_pos >= 24 else 0
    sticky = tail_sticky
    if lead_pos >= 24:
        if mag & ((1 << (lead_pos - 24)) - 1):
            sticky = True

    mant_ext = mant_out
    if round_bit and (sticky or (mant_out & 1)):
        mant_ext += 1
    if mant_ext & (1 << 23):
        unbiased += 1
        mant_out = 0
    else:
        mant_out = mant_ext & 0x7FFFFF

    biased = unbiased + 127
    if biased <= 0:
        return sign << 31
    if biased >= 255:
        return (sign << 31) | (0xFE << 23) | 0x7FFFFF
    return (sign << 31) | (biased << 23) | mant_out


# ---------------------------------------------------------------------------
# The frame (the actual proposed design)
# ---------------------------------------------------------------------------
def mxfinal_frame(p1, p2, sa, sar, sw, acc_bits, R=REMAIN, use_bypass=True):
    delta = sa - sar                         # >= 0, PROVEN (Sar <= Sa)

    if p1 != 0:
        anchor = sa + sw - 2 * E8M0_BIAS
        F, F_sh = p1, R
        SECOND, SECOND_sh, SECOND_w = p2, R - delta, 13
    else:
        anchor = sar + sw - 2 * E8M0_BIAS
        F, F_sh = p2, R
        SECOND, SECOND_sh, SECOND_w = 0, R, 13   # contributes nothing

    sign = (acc_bits >> 31) & 1
    E = (acc_bits >> 23) & 0xFF
    mant = acc_bits & 0x7FFFFF
    is_normal = 1 if E != 0 else 0
    smant = (is_normal << 23) | mant
    smant = -smant if sign else smant
    acc_shift = E + (1 - is_normal) - ACC_SHIFT_CONST - anchor

    if use_bypass and acc_shift > MAX_ACC_SHIFT:
        return acc_bits
    if p1 == 0 and p2 == 0:
        return acc_bits
    if p1 != 0 and delta < 12 and p2 == -(p1 << delta):
        return acc_bits

    c1, s1 = place_clamped(F, F_sh, 13)
    c2, s2 = place_clamped(SECOND, SECOND_sh, SECOND_w)
    c3, s3 = place_clamped(smant, acc_shift + R, 25)

    word = c1 + c2 + c3
    sticky = s1 or s2 or s3
    return _finalize_word(word, sticky, R, anchor)


# ---------------------------------------------------------------------------
# Exact reference
# ---------------------------------------------------------------------------
def exact_value(p1, p2, sa, sar, sw, acc_bits):
    """The raw exact Fraction (pre-rounding) - used both by mxfinal_ref and
    by the per-vector bypass-exactness proof (which needs the exact value,
    not the already-rounded FP32 result, to check |exact-acc| < ulp/2)."""
    sexp1 = sa + sw - 2 * E8M0_BIAS
    sexp2 = sar + sw - 2 * E8M0_BIAS
    return (Fraction(p1) * Fraction(2) ** (sexp1 - 2)
            + Fraction(p2) * Fraction(2) ** (sexp2 - 2)
            + fp32_bits_to_fraction(acc_bits))


def mxfinal_ref(p1, p2, sa, sar, sw, acc_bits):
    return fraction_to_fp32_rtl(exact_value(p1, p2, sa, sar, sw, acc_bits))


def classify_bypass(p1, p2, sa, sar, sw, acc_bits):
    """Which bypass (if any) mxfinal_frame takes - NOT just used to excuse a
    mismatch, but to drive a per-vector EXACTNESS PROOF (see check(), which
    asserts |exact-acc| < ulp(acc)/2 for 'acc_dominates', and exact equality
    for the other two, on every single vector where the bypass fires).
    Mirrors fp4_golden.py's diag['bypass'] + exactness-proof pattern."""
    delta = sa - sar
    anchor = (sa + sw - 2 * E8M0_BIAS) if p1 != 0 else (sar + sw - 2 * E8M0_BIAS)
    sign = (acc_bits >> 31) & 1
    E = (acc_bits >> 23) & 0xFF
    is_normal = 1 if E != 0 else 0
    acc_shift = E + (1 - is_normal) - ACC_SHIFT_CONST - anchor
    if acc_shift > MAX_ACC_SHIFT:
        return "acc_dominates"
    if p1 == 0 and p2 == 0:
        return "products_zero"
    if p1 != 0 and delta < 12 and p2 == -(p1 << delta):
        return "products_cancel_exact"
    return None


# ---------------------------------------------------------------------------
# Vector generation
# ---------------------------------------------------------------------------
def _rand_psum(rng):
    s = 0
    for _ in range(16):
        a = rng.choice(_CODE_MAG) * (1 if rng.random() < 0.5 else -1)
        b = rng.choice(_CODE_MAG) * (1 if rng.random() < 0.5 else -1)
        s += a * b
    return max(-PSUM_MAX, min(PSUM_MAX, s))


def _rand_fp32(rng, allow_subnormal=True):
    sign = rng.randint(0, 1)
    if allow_subnormal and rng.random() < 0.2:
        return (sign << 31) | (0 << 23) | rng.randint(0, 0x7FFFFF)
    return (sign << 31) | (rng.randint(1, 254) << 23) | rng.randint(0, 0x7FFFFF)


def gen_directed():
    """(tag, vector) pairs - a handful of fixed, human-checkable cases."""
    z, one, big, tiny = 0x00000000, 0x3F800000, 0x7F000000, 0x00000001
    cases = [
        (0, 0, 127, 127, 127, z),
        (2304, 0, 127, 127, 127, z),
        (2304, 2304, 127, 125, 127, z),
        (-2304, 2304, 200, 100, 130, one),
        (2304, 2304, 127, 127, 127, one),
        (1, 1, 254, 0, 254, z),
        (2304, 2304, 127, 60, 127, tiny),
        (100, -100, 150, 150, 100, big),
        (2304, 2304, 250, 250, 250, z),
        (1, 1, 1, 1, 1, tiny),
        (2304, -1, 127, 90, 127, one),
        (0, 2304, 127, 100, 127, z),
        (0, 0, 1, 1, 1, tiny),
    ]
    return [("directed", v) for v in cases]


def gen_random_valid(rng, n):
    """Random vectors respecting the proven Sar<=Sa property, weighted
    toward cancellation (delta<=11) and p1==0 cases - the corners that
    actually stress the design."""
    out = []
    for _ in range(n):
        sa = rng.randint(0, 255)
        sw = rng.randint(0, 255)
        sar = rng.randint(0, sa)
        r = rng.random()
        if r < 0.35:
            delta = sa - sar
            p2 = rng.choice([4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048])
            p2 *= 1 if rng.random() < 0.5 else -1
            p1 = -(p2 >> delta) if (delta <= 11 and p2 % (1 << delta) == 0) \
                else _rand_psum(rng)
            p1 = max(-PSUM_MAX, min(PSUM_MAX, p1))
            p2 = max(-PSUM_MAX, min(PSUM_MAX, p2))
            tag = "rand-cancel"
        elif r < 0.55:
            p1 = rng.choice([0, 0, 1, -1, 2, -2])
            p2 = _rand_psum(rng)
            tag = "rand-p1-small"
        else:
            p1 = _rand_psum(rng)
            p2 = _rand_psum(rng)
            tag = "rand"
        out.append((tag, (p1, p2, sa, sar, sw, _rand_fp32(rng))))
    return out


def gen_worst_corner(rng, n):
    """Exhaustive-style sweep of the ANALYTICALLY-DERIVED worst-case corner:
    delta in [0,11] (where exact cancellation to coefficient 1 is possible),
    both signs of the dominant term, every accumulator clamp depth 1..25,
    dense mantissa sampling. This is the corner that pinned REMAIN=36."""
    out = []
    for _ in range(n):
        delta = rng.randint(0, 11)
        p1 = rng.choice([1, -1])
        p2 = 1 - p1 * (1 << delta)
        if not (-PSUM_MAX <= p2 <= PSUM_MAX):
            continue
        sa = rng.randint(delta, 255)
        sar = sa - delta
        sw = rng.randint(0, 255)
        anchor = sa + sw - 2 * E8M0_BIAS
        rs = rng.randint(1, 25)
        acc_shift = -rs - REMAIN
        E = acc_shift + ACC_SHIFT_CONST + anchor
        if not (1 <= E <= 254):
            continue
        mant = rng.randint(0, 0x7FFFFF)
        sign = rng.randint(0, 1)
        acc_bits = (sign << 31) | (E << 23) | mant
        out.append(("worst-corner", (p1, p2, sa, sar, sw, acc_bits)))
    return out


def gen_acc_shift_boundary(rng, per_target=40):
    """Targeted acc_shift sweep, mirroring fp4_golden.py's boundary-targeting:
    solve for (sa,sw) [or (sar,sw) when p1==0] that hit SPECIFIC target
    acc_shift values, spanning bypass/left-shift/right-shift/deep-clamp
    regimes. Not a random hope of hitting these - deliberately constructed."""
    out = []
    targets = [MAX_ACC_SHIFT + 1, MAX_ACC_SHIFT, MAX_ACC_SHIFT - 1,
               1, 0, -1, -12, -13, -24, -25, -26, -35, -36, -37, -100, -300]
    special_accs = [0x00000000, 0x80000000, 0x00000001, 0x007FFFFF,
                    0x00800000, 0x3F800000, 0x41800000, 0x7F000000,
                    0x80800001, 0xC0000000, 0x00800001, 0x34000000]
    special_p1p2 = [(0, 0), (1, 0), (-1, 0), (0, 1), (2304, 2304),
                    (-2304, 2304), (1, -1), (2304, -2304)]
    for target in targets:
        for acc_bits in special_accs:
            E = (acc_bits >> 23) & 0xFF
            e_eff = E + (0 if E else 1)
            for p1, p2 in special_p1p2:
                for _ in range(per_target):
                    delta = rng.randint(0, 20)
                    need = e_eff - ACC_SHIFT_CONST - target   # required anchor
                    if p1 != 0:
                        # anchor = sa+sw-254 = need  ->  sw = need-sa+254
                        sa = rng.randint(delta, 254)
                        sw = need - sa + 2 * E8M0_BIAS
                        if not (0 <= sw <= 255):
                            continue
                        sar = sa - delta
                        if not (0 <= sar <= sa):
                            continue
                    else:
                        sar = rng.randint(0, 254)
                        sw = need - sar + 2 * E8M0_BIAS
                        if not (0 <= sw <= 255):
                            continue
                        sa = sar   # delta irrelevant when p1==0
                    out.append((f"accshift{target}", (p1, p2, sa, sar, sw, acc_bits)))
    return out


# ---------------------------------------------------------------------------
# Harness - proves bypass exactness per-vector, classifies corner deviations
# against an explicit bound (mirrors fp4_golden.py's check()/diag pattern),
# tags every vector's provenance, and tracks results for --emit-vectors gating.
# ---------------------------------------------------------------------------
def run_verification(R=REMAIN, verbose_fails=8, seed=0xF1A1):
    fail = 0
    corner_allowed = 0
    corner_tags = {}
    corner_examples = []
    tag_counts = {}
    checked = 0

    def check(tag, v):
        nonlocal fail, corner_allowed, checked
        checked += 1
        tag_counts[tag] = tag_counts.get(tag, 0) + 1
        p1, p2, sa, sar, sw, acc_bits = v
        got = mxfinal_frame(*v, R=R)
        exact = exact_value(*v)
        bypass = classify_bypass(*v)

        if bypass is not None:
            if bypass == "acc_dominates":
                # PROOF, not assumption: the combined-coefficient bound
                # (|p1|+|p2| <= 4608 < 2^13) must make the accumulator's
                # own ulp strictly dominate at this shift, for THIS vector.
                if got != acc_bits:
                    fail += 1
                    if fail <= verbose_fails:
                        print(f"BYPASS FAIL [{tag}]: got=0x{got:08x} != acc=0x{acc_bits:08x}")
                    return
                accv = fp32_bits_to_fraction(acc_bits)
                E = (acc_bits >> 23) & 0xFF
                ulp = Fraction(2) ** (max(E, 1) - 127 - 23)
                if not (abs(exact - accv) < ulp / 2):
                    fail += 1
                    if fail <= verbose_fails:
                        print(f"BYPASS INEXACT [{tag}]: acc=0x{acc_bits:08x} "
                              f"|exact-acc|={float(abs(exact-accv))} ulp/2={float(ulp/2)}")
                return
            else:
                # products_zero / products_cancel_exact: the product terms
                # contribute EXACTLY zero, so the correct result is acc
                # verbatim - a strict equality proof, not a ulp bound.
                if got != acc_bits:
                    fail += 1
                    if fail <= verbose_fails:
                        print(f"BYPASS FAIL [{tag}/{bypass}]: got=0x{got:08x} "
                              f"!= acc=0x{acc_bits:08x}")
                return

        exp = fraction_to_fp32_rtl(exact)
        if got == exp:
            return

        # Named, BOUNDED corner-deviation class (structurally always empty at
        # REMAIN=36 - kept as a defensive net, exactly mirroring fp4_golden.py,
        # rather than silently trusting the derivation forever): if a genuine
        # catastrophic-cancellation corner ever slips through, it must still
        # be small (<=2 ulp) to be logged here rather than counted as a bug.
        gv = fp32_bits_to_fraction(got)
        ev = fp32_bits_to_fraction(exp)
        Ee = (exp >> 23) & 0xFF
        ulp = Fraction(2) ** (max(Ee, 1) - 127 - 23)
        if abs(gv - ev) <= 2 * ulp:
            corner_allowed += 1
            corner_tags[tag] = corner_tags.get(tag, 0) + 1
            if len(corner_examples) < 5:
                corner_examples.append((tag, got, exp, float(exact)))
            return

        fail += 1
        if fail <= verbose_fails:
            print(f"FAIL [{tag}]: in={v}")
            print(f"    got=0x{got:08x} exp=0x{exp:08x} exact={float(exact)}")

    rng = random.Random(seed)
    for tag, v in gen_directed():
        check(tag, v)
    for tag, v in gen_random_valid(rng, 500_000):
        check(tag, v)
    for tag, v in gen_worst_corner(rng, 300_000):
        check(tag, v)
    for tag, v in gen_acc_shift_boundary(rng, per_target=25):
        check(tag, v)

    return dict(checked=checked, fail=fail, corner_allowed=corner_allowed,
                corner_tags=corner_tags, corner_examples=corner_examples,
                tag_counts=tag_counts)


# ---------------------------------------------------------------------------
# Vector emission (deterministic, gated on run_verification() passing) -
# matches fp4_golden.py's --emit-vectors contract, with the CONFIRMED port
# layout for mxdotp_final_engine.sv:
#   p1_i, p2_i : PSUM_WIDTH(13)-bit signed, forwarded from the dotp engine's
#                mailbox (mailbox_p1_q/mailbox_p2_q) - NOT from rs1/rs2/rs3.
#   rs1_i      : {a_scale[7:0], ar_scale[7:0], b_scale[7:0], 8'b0 reserved}
#   rs2_i      : old_acc, the raw FP32 bits, verbatim
# A unit-test vector line therefore packs (p1, p2, rs1, rs2, expected) - it
# does NOT need to model the upstream mxdotp instruction or the mailbox,
# since mxdotp_final_engine.sv's own ports take p1/p2 directly.
# =============================================================================
EMIT_SEED = 0x4D584651          # "MXFQ" in ASCII hex - arbitrary, fixed
EMIT_N_RANDOM = 20000
SCRIPT_DIR = Path(__file__).resolve().parent
DEFAULT_VECTORS_OUT = SCRIPT_DIR / ".." / "tb" / "hex_vectors" / "mxfinal_unit_vectors.hex"


def _pack_rs1(sa, sar, sw):
    return ((sa & 0xFF) << 24) | ((sar & 0xFF) << 16) | ((sw & 0xFF) << 8)


def _pack_vector_line(p1, p2, sa, sar, sw, acc_bits):
    rs1 = _pack_rs1(sa, sar, sw)
    rs2 = acc_bits & 0xFFFFFFFF
    # p1/p2 are 13-bit signed (RTL's PSUM_WIDTH), masked to their raw bit
    # pattern and printed as 4 hex digits (16 bits) - the top 3 bits of each
    # 16-bit field are always zero (NOT sign-extended); the testbench must
    # extract only the low 13 bits of each field and interpret THAT as signed.
    p1u = p1 & 0x1FFF
    p2u = p2 & 0x1FFF
    exp = mxfinal_frame(p1, p2, sa, sar, sw, acc_bits)
    return f"{p1u:04x}{p2u:04x}{rs1:08x}{rs2:08x}{exp:08x}"


def _directed_emit_vectors():
    """A handful of fixed, human-checkable cases for the top of the .hex
    file - separate from (and much smaller than) run_verification()'s
    directed set, same intent as fp4_golden.py's _directed_emit_vectors()."""
    z, one = 0x00000000, 0x3F800000
    return [
        (0, 0, 127, 127, 127, z),          # bypass: products zero
        (1, 0, 127, 127, 127, z),          # minimal nonzero p1, unit scale
        (2304, 2304, 127, 127, 127, one),  # max magnitude both terms
        (1, -2047, 200, 189, 100, z),      # the derived REMAIN=36 worst corner
        (-2304, 2304, 250, 250, 250, z),   # near-overflow scale territory
        (0, 100, 150, 140, 90, 0x00000001),# p1==0 branch, subnormal acc
    ]


def emit_vectors(out_path=None, n_random=EMIT_N_RANDOM, seed=EMIT_SEED):
    out_path = Path(out_path) if out_path is not None else DEFAULT_VECTORS_OUT
    rng = random.Random(seed)

    lines = [_pack_vector_line(*v) for v in _directed_emit_vectors()]
    for tag, v in gen_random_valid(rng, n_random):
        lines.append(_pack_vector_line(*v))

    out_path.parent.mkdir(parents=True, exist_ok=True)
    with open(out_path, "w") as f:
        f.write("\n".join(lines) + "\n")
    return len(lines), out_path


def main():
    ap = argparse.ArgumentParser(
        description="MXFINAL golden model: verify, and optionally (re)generate "
                    "a deterministic testbench vector file."
    )
    ap.add_argument("--emit-vectors", action="store_true",
                     help="After a full passing verification, deterministically "
                          "write the unit-test vector file. Writes nothing if "
                          "verification fails.")
    ap.add_argument("--vectors-out", default=None,
                     help=f"Override the output path (default: {DEFAULT_VECTORS_OUT}).")
    ap.add_argument("--n-random", type=int, default=EMIT_N_RANDOM)
    ap.add_argument("--seed", type=lambda s: int(s, 0), default=EMIT_SEED,
                     help="RNG seed for emitted vectors. Only override "
                          "deliberately - it changes the committed .hex file.")
    args = ap.parse_args()

    print("=" * 76)
    print(f"MXFINAL golden model - REMAIN={REMAIN} (finalized), "
          f"MAX_ACC_SHIFT={MAX_ACC_SHIFT}")
    print("=" * 76)

    result = run_verification()
    print(f"checked={result['checked']}  fail={result['fail']}  "
          f"corner_allowed={result['corner_allowed']}")
    if result['corner_tags']:
        print(f"  corner_allowed by tag: {result['corner_tags']}")
        for ex in result['corner_examples']:
            print(f"    example: tag={ex[0]} got=0x{ex[1]:08x} exp=0x{ex[2]:08x} "
                  f"exact={ex[3]}")
    print(f"vectors checked by tag: {result['tag_counts']}")

    print("\n" + "=" * 76)
    if result["fail"]:
        print(f"VERIFICATION FAILED ({result['fail']} mismatches) - "
              f"aborting without writing any vector file.", file=sys.stderr)
        sys.exit(1)
    # Same hard contract m2_golden.py/fp8_golden.py enforce. REMAIN=36 was
    # derived specifically to close this class (see the constants-section
    # derivation above; 35 fails on the same corner, 36 does not), so a
    # nonzero count here means the closure no longer holds - a regression,
    # not a tolerable corner. Previously tracked but never enforced here.
    if result["corner_allowed"]:
        print(f"VERIFICATION FAILED: {result['corner_allowed']} vectors hit the "
              f"REMAIN corner class, which REMAIN=36 is supposed to close "
              f"(see the derivation above / mxdotp_pkg.sv's MXF_REMAIN_BITS "
              f"comment).", file=sys.stderr)
        sys.exit(1)
    print("VERDICT: bit-exact RNE vs exact-rational reference, 0 real mismatches.")
    print("=" * 76)

    if not args.emit_vectors:
        sys.exit(0)
    n, out_path = emit_vectors(args.vectors_out, n_random=args.n_random, seed=args.seed)
    print(f"\nWrote {n} vectors to {out_path} (seed=0x{args.seed:x}).")
    sys.exit(0)


if __name__ == "__main__":
    main()