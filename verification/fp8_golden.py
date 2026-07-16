#!/usr/bin/env python3
"""
Golden model: MXFP8 fused engine, paper-style sliding-accumulator datapath.

Frame: 95-bit scale-free SoP frame (bit b = value weight 2^(b-32); anchor 32
covers the smallest product, E5M2-subnormal^2 = 2^-32, exactly), extended by
25 'remaining' bits for the LZC -> 120-bit word. Layout:
    | sign : 1 | acc @ max left shift : 24 | R guard : 1 | unsigned SoP : 69 |
Mirrors fpnew_mxdotp_accumulator_shift / add_accumulator_sop / twos_compl
(incl. the negative-word sticky-negation trick), re-derived for THIS
engine's native E4M3/E5M2 decode (E5M2 keeps its 2-bit mantissa; the
reference pads to a 3-bit super-mantissa, hence its ANCHOR=34 vs our 32 -
same values, different unit convention; both frames come out 95 bits wide).

REMAIN = 25 (not the reference's 24): same 1-ULP catastrophic-cancellation
corner closure as the FP4 engine - sticky set requires |acc extension| <
2^23 while SoP != 0 gives |word| >= 2^25 - 2^23 > 2^24, so the leading one
is always >= bit 24 and the round bit is always inside the kept word.

Checked against exact Fraction arithmetic + reference RNE, with the
project's output conventions (flush subnormal *results* to +0, clamp
overflow to max finite, no Inf/NaN handling - max-exponent E4M3/E5M2
encodings decode as their plain finite interpretation, bypass returns
old_acc verbatim).

Usage:
  python3 fp8_golden.py                 Verify the golden model only.
                                         Writes nothing. Exit 0 iff fail==0.
  python3 fp8_golden.py --emit-vectors  Verify first; on pass, deterministically
                                         (re)generate tb/fp8_unit_vectors.hex
                                         from EMIT_SEED. Abort on any failure.
"""
from fractions import Fraction
import random, sys, argparse
from pathlib import Path

# ---- constants (must match RTL) ----
ANCHOR     = 32          # frame bit b = value weight 2^(b-32)
SOP_W      = 70          # signed SoP width: |SoP| < 2^69 frame units
FRAME_W    = 95          # 1 sign + 24 acc + 1 guard + 69 SoP
MAX_SHIFT  = FRAME_W - 24 - 1   # = 70
REMAIN     = 25
LZC_W      = FRAME_W + REMAIN   # = 120
EXP_CONST  = 127 + 23 - ANCHOR  # = 118

# ---- E4M3 / E5M2 decode (mirrors the RTL's fp8_decode; NO Inf/NaN
#      special-casing - max-exponent encodings decode as finite) ----
def fp8_decode(byte, e5m2):
    s = (byte >> 7) & 1
    if e5m2:
        e, m = (byte >> 2) & 0x1F, byte & 0x3
        if e == 0: ex, mg = 1 - 15 - 2, m            # subnormal
        else:      ex, mg = e - 15 - 2, 4 | m        # {1,mm}
    else:
        e, m = (byte >> 3) & 0xF, byte & 0x7
        if e == 0: ex, mg = 1 - 7 - 3, m             # subnormal
        else:      ex, mg = e - 7 - 3, 8 | m         # {1,mmm}
    return s, ex, mg

def fp8_value(byte, e5m2):
    s, ex, mg = fp8_decode(byte, e5m2)
    v = Fraction(mg) * Fraction(2) ** ex
    return -v if s else v

# ---- FP32 helpers (identical to fp4_golden.py) ----
def fp32_decode_exact(bits):
    """Exact Fraction value of an FP32 bit pattern. E=255 excluded by sweeps."""
    s = (bits >> 31) & 1
    E = (bits >> 23) & 0xFF
    M = bits & 0x7FFFFF
    if E == 0:
        v = Fraction(M, 1 << 23) * Fraction(1, 1 << 126)
    else:
        v = (1 + Fraction(M, 1 << 23)) * Fraction(2) ** (E - 127)
    return -v if s else v

# ---- the model of the proposed RTL ----
def fp8_fused_model(a_bytes, b_bytes, a_raw, b_raw, acc_bits, e5m2, diag=None):
    if diag is None: diag = {}
    # FRONT: decode + multiply; element exponents ONLY in the product
    # (the block scale is NOT folded in - it drives the acc slide and the
    # final exponent, exactly like the FP4 engine's sexp_q1 hoist).
    prods = []
    for a, b in zip(a_bytes, b_bytes):
        sa, ea, ma = fp8_decode(a, e5m2)
        sb, eb, mb = fp8_decode(b, e5m2)
        prods.append((sa ^ sb, ea + eb, ma * mb))
    scale_exp = (a_raw - 127) + (b_raw - 127)

    # BACK1a: shift each product into the scale-free frame and sum.
    sop = 0
    for (ps, pe, pm) in prods:
        sh = pe + ANCHOR
        assert 0 <= sh <= 60, sh                    # E5M2^2 min -32, max 28
        term = pm << sh
        sop += -term if ps else term
    assert -(1 << (SOP_W - 1)) < sop < (1 << (SOP_W - 1))   # |SoP| < 2^69

    # BACK1b: acc decode + slide (identical structure to the FP4 model,
    # only the constants differ).
    sd  = (acc_bits >> 31) & 1
    E   = (acc_bits >> 23) & 0xFF
    M   = acc_bits & 0x7FFFFF
    is_normal = 1 if E != 0 else 0
    mant = (is_normal << 23) | M
    smant = -mant if sd else mant                   # 25-bit signed in RTL
    e_eff = E + (0 if is_normal else 1)             # E + is_subnormal
    acc_shift = e_eff - EXP_CONST - scale_exp
    assert -400 <= acc_shift <= 400

    result_is_acc = False
    acc_sticky = 0
    rshift = 0
    if acc_shift > MAX_SHIFT:
        # |SoP| < 2^69 frame units < ulp(acc)/2 = 2^(71-1)=2^70 at shift 71;
        # across a binade boundary ulp halves -> bound 2^69, still strictly
        # above 2^68.62 = |SoP|max. RNE returns the accumulator exactly.
        result_is_acc = True
        word = None
    elif acc_shift >= 0:
        s95 = sop + (smant << acc_shift)
        assert -(1 << (FRAME_W - 1)) < s95 < (1 << (FRAME_W - 1))  # knife-edge
        word = s95 << REMAIN                         # remaining = 0
    else:
        rshift = -acc_shift
        acc_top = smant >> rshift                    # arithmetic (floor)
        if rshift > REMAIN:
            remaining = smant >> (rshift - REMAIN)
            acc_sticky = 1 if (smant & ((1 << (rshift - REMAIN)) - 1)) else 0
            if sop == 0:
                result_is_acc = True                 # reference's SoP==0 bypass
        else:
            remaining = (smant << (REMAIN - rshift))
        word_rtl = (((sop + acc_top) << REMAIN) | (remaining & ((1 << REMAIN) - 1))) & ((1 << LZC_W) - 1)
        if word_rtl & (1 << (LZC_W - 1)): word_rtl -= (1 << LZC_W)
        # floor/sticky value identity (same asserts as fp4_golden.py)
        exact_ext = Fraction(sop) * (1 << REMAIN) + Fraction(smant * (1 << REMAIN), 1 << rshift)
        flo = exact_ext.numerator // exact_ext.denominator
        assert word_rtl == flo, (word_rtl, flo)
        assert acc_sticky == (0 if exact_ext == flo else 1)
        word = word_rtl

    diag.update(bypass=result_is_acc, acc_sticky=acc_sticky, rshift=rshift,
                acc_shift=acc_shift, lead=None)
    if result_is_acc:
        return acc_bits

    # BACK2: sign/magnitude with the sticky-negation trick, then lead
    if word < 0:
        sign = 1
        if rshift > REMAIN and smant != 0 and acc_sticky:
            mag = ~word            # = -word - 1 : implied positive tail below
        else:
            mag = -word
    else:
        sign, mag = 0, word
    assert 0 <= mag < (1 << LZC_W)
    lead = mag.bit_length() - 1    # -1 sentinel when mag == 0
    diag['lead'] = lead

    # BACK3: mantissa / round / sticky / exponent (fp8_finalize)
    if lead == -1:
        return 0x00000000
    mant_out = 0
    for i in range(23):
        p = lead - 1 - i
        if p >= 0 and (mag >> p) & 1:
            mant_out |= 1 << (22 - i)
    round_bit = (mag >> (lead - 24)) & 1 if lead - 24 >= 0 else 0
    sticky = acc_sticky
    if lead - 24 > 0 and (mag & ((1 << (lead - 24)) - 1)):
        sticky = 1
    unb = lead - (REMAIN + ANCHOR) + scale_exp
    m_ext = mant_out
    if round_bit and (sticky or (mant_out & 1)):
        m_ext += 1
    if m_ext >> 23:
        unb += 1
        assert m_ext == (1 << 23)
        mant_out = 0
    else:
        mant_out = m_ext & 0x7FFFFF
    if unb + 127 <= 0:
        return (sign << 31)                          # signed-zero flush
    if unb + 127 >= 255:
        return (sign << 31) | 0x7F7FFFFF
    return (sign << 31) | ((unb + 127) << 23) | mant_out

# ---- exact reference ----
def reference(a_bytes, b_bytes, a_raw, b_raw, acc_bits, e5m2):
    scale_exp = (a_raw - 127) + (b_raw - 127)
    dot = sum(fp8_value(a, e5m2) * fp8_value(b, e5m2) for a, b in zip(a_bytes, b_bytes))
    return Fraction(2) ** scale_exp * dot + fp32_decode_exact(acc_bits)

def project_rne(v):
    """RNE at 24-bit normalized granularity, flush biased<=0 to +0, clamp
    overflow to sign|max finite. Identical to fp4_golden.py's."""
    if v == 0:
        return 0x00000000
    s = 1 if v < 0 else 0
    a = -v if v < 0 else v
    e = a.numerator.bit_length() - a.denominator.bit_length()
    if Fraction(2) ** e > a: e -= 1
    q = a / (Fraction(2) ** (e - 23))
    n, r = divmod(q.numerator, q.denominator)
    if 2*r > q.denominator or (2*r == q.denominator and (n & 1)):
        n += 1
    if n == (1 << 24):
        n >>= 1; e += 1
    if e + 127 <= 0:   return 0x00000000
    if e + 127 >= 255: return (s << 31) | 0x7F7FFFFF
    return (s << 31) | ((e + 127) << 23) | (n - (1 << 23))

def zeros_equal(x, y):
    return (x & 0x7FFFFFFF) == 0 and (y & 0x7FFFFFFF) == 0

# ---- harness ----
def run_verification(verbose_fails=20):
    fails = []
    checked = [0]
    tags = {}

    def check(a_bytes, b_bytes, a_raw, b_raw, acc_bits, e5m2, tag=""):
        checked[0] += 1
        diag = {}
        got = fp8_fused_model(a_bytes, b_bytes, a_raw, b_raw, acc_bits, e5m2, diag)
        exact = reference(a_bytes, b_bytes, a_raw, b_raw, acc_bits, e5m2)
        if diag['bypass']:
            # verbatim-acc bypass (same proof obligation as fp4_golden.py):
            # the returned bits must BE the accumulator, and the exact result
            # must be strictly within half an ulp of the accumulator's value -
            # i.e. RNE at the accumulator's own granularity returns it exactly.
            if got != acc_bits:
                fails.append((tag, "BYPASS-BITS", a_bytes, b_bytes, a_raw, b_raw,
                              acc_bits, e5m2, got))
                return
            accv = fp32_decode_exact(acc_bits)
            E = (acc_bits >> 23) & 0xFF
            ulp = Fraction(2) ** (max(E, 1) - 127 - 23)
            if not (abs(exact - accv) < ulp / 2):
                fails.append((tag, "BYPASS-INEXACT", a_bytes, b_bytes, a_raw, b_raw,
                              acc_bits, e5m2, float(abs(exact - accv)), float(ulp/2)))
            return
        exp = project_rne(exact)
        if got != exp and not zeros_equal(got, exp):
            fails.append((tag, a_bytes, b_bytes, a_raw, b_raw, acc_bits, e5m2, got, exp))
            tags[tag] = tags.get(tag, 0) + 1

    rng = random.Random(20260716)
    K = 8
    def rand_bytes(): return [rng.randrange(256) for _ in range(K)]
    def rand_acc():
        E = rng.choice([0, 0, 1, 1, 2, 126, 127, 128, 253, 254] + [rng.randrange(255)]*6)
        return (rng.randrange(2) << 31) | (E << 23) | rng.getrandbits(23)

    for e5m2 in (0, 1):
        # -- directed: zeros, max-magnitude (incl. NaN-decoded-finite), signs --
        zero = [0]*K
        maxb = [0x7F]*K                                # max encodable magnitude
        for acc in (0x00000000, 0x3F800000, 0xBF800000, 0x7F7FFFFF, 0x00000001, 0x807FFFFF):
            for (sa, sb) in ((127,127),(0,0),(254,254),(0,254),(200,60)):
                check(zero, zero, sa, sb, acc, e5m2, "directed")
                check(maxb, maxb, sa, sb, acc, e5m2, "directed")
                check(maxb, [x ^ 0x80 for x in maxb], sa, sb, acc, e5m2, "directed")
        # single-element sweeps over every code point
        for a in range(256):
            b = rng.randrange(256)
            av = [a] + [0]*(K-1); bv = [b] + [0]*(K-1)
            check(av, bv, rng.randrange(255), rng.randrange(255), rand_acc(), e5m2, "directed")

        # -- shift sweep: target every interesting acc_shift value --
        min_prod_frame_exp = 0 if e5m2 else 14   # smallest nonzero |SoP| = 2^this
        for target in list(range(-60, -20)) + list(range(-4, 5)) + \
                      list(range(66, 76)) + [-150, -147, -100, 100, 150, 300, -300]:
            for _ in range(30):
                E = rng.randrange(1, 255)
                need = E - EXP_CONST - target        # scale_exp needed
                if not (-254 <= need <= 254): continue
                sa = min(254, max(0, need + 127))
                sb = need + 254 - sa
                if not (0 <= sb <= 254): continue
                acc = (rng.randrange(2) << 31) | (E << 23) | rng.getrandbits(23)
                check(rand_bytes(), rand_bytes(), sa, sb, acc, e5m2, f"shift{target}")

        # -- cancellation: smallest-possible |SoP| vs nearly-opposite acc --
        small = [0x01] + [0]*(K-1)                   # subnormal m=1 element
        for _ in range(4000):
            E = rng.randrange(1, 255)
            rsh = rng.randrange(REMAIN + 1, 48)      # force dropped-sticky zone
            need = E - EXP_CONST + rsh
            if not (-254 <= need <= 254): continue
            sa = min(254, max(0, need + 127))
            sb = need + 254 - sa
            if not (0 <= sb <= 254): continue
            mant = rng.getrandbits(23) | (1 << 22)
            acc = (1 << 31) | (E << 23) | mant
            check(small, small, sa, sb, acc, e5m2, "cancel")
            # also with in-window right shifts (1..REMAIN) and left shifts
            rsh2 = rng.randrange(1, REMAIN + 1)
            need = E - EXP_CONST + rsh2
            if -254 <= need <= 254:
                sa = min(254, max(0, need + 127)); sb = need + 254 - sa
                if 0 <= sb <= 254:
                    check(small, small, sa, sb, acc, e5m2, "cancel-near")

        # -- subnormal accumulators (honored, not flushed) --
        for _ in range(2000):
            acc = (rng.randrange(2) << 31) | rng.getrandbits(23)   # E=0
            check(rand_bytes(), rand_bytes(), rng.randrange(255), rng.randrange(255), acc, e5m2, "subacc")

        # -- rand-near: scales biased to keep acc_shift in the frame --
        for _ in range(8000):
            E = rng.randrange(1, 255)
            target = rng.randrange(-40, MAX_SHIFT + 6)
            need = E - EXP_CONST - target
            if not (-254 <= need <= 254): continue
            sa = min(254, max(0, need + 127)); sb = need + 254 - sa
            if not (0 <= sb <= 254): continue
            acc = (rng.randrange(2) << 31) | (E << 23) | rng.getrandbits(23)
            check(rand_bytes(), rand_bytes(), sa, sb, acc, e5m2, "rand-near")

        # -- unconstrained random --
        for _ in range(30000):
            check(rand_bytes(), rand_bytes(), rng.randrange(255), rng.randrange(255),
                  rand_acc(), e5m2, "rand")

    print(f"\nchecked={checked[0]} fail={len(fails)} by tag: "
          f"{ {t: c for t, c in sorted(tags.items())} }")
    for f in fails[:verbose_fails]:
        print("  FAIL:", f)
    return len(fails) == 0

# ---- vector emission (deterministic; format mirrors tb_fp4_unit's) ----
# Fixed seed for --emit-vectors: committed here, NOT re-rolled per run, so the
# shipped .hex is reproducible byte-for-byte from this script alone. Change
# only deliberately (it invalidates the shipped .hex). Same convention as
# fp4_golden.py.
EMIT_SEED           = 0x46503845   # arbitrary fixed constant ("FP8E" in ASCII hex)
EMIT_N_RANDOM       = 8000
SCRIPT_DIR          = Path(__file__).resolve().parent
DEFAULT_VECTORS_OUT = SCRIPT_DIR / ".." / "tb" / "fp8_unit_vectors.hex"

def _pack_bytes(bs):
    v = 0
    for i, b in enumerate(bs): v |= (b & 0xFF) << (8 * i)
    return v

def _pack_vector_line(a_bytes, b_bytes, a_raw, b_raw, acc_bits, e5m2):
    """One 224-bit hex line, tb_fp8_unit.sv's (and tb_fp4_unit.sv's) format:
    {rs1[63:0], rs2[63:0], rs3[63:0], expected[31:0]}. rs3 packs
    {reserved 15'b0, e5m2, b_scale[7:0], a_scale[7:0], old_acc[31:0]} -
    matching the engine's rs3_q[48]/[47:40]/[39:32]/[31:0] consumption."""
    exp = fp8_fused_model(a_bytes, b_bytes, a_raw, b_raw, acc_bits, e5m2)
    rs3 = ((e5m2 & 1) << 48) | ((b_raw & 0xFF) << 40) | ((a_raw & 0xFF) << 32) \
        | (acc_bits & 0xFFFFFFFF)
    word = _pack_bytes(a_bytes)          # rs1
    word = (word << 64) | _pack_bytes(b_bytes)   # rs2
    word = (word << 64) | rs3
    word = (word << 32) | exp
    return f"{word:056x}"

def emit_vectors(out_path=None, n_random=EMIT_N_RANDOM, seed=EMIT_SEED):
    rng = random.Random(seed)
    lines = []
    K = 8
    def rb(): return [rng.randrange(256) for _ in range(K)]
    for e5m2 in (0, 1):
        for a in range(256):
            lines.append(_pack_vector_line([a]+[0]*7, [rng.randrange(256)]+[0]*7,
                         rng.randrange(255), rng.randrange(255), rng.getrandbits(31), e5m2))
        for _ in range(n_random):
            E = rng.randrange(255)
            acc = (rng.randrange(2) << 31) | (E << 23) | rng.getrandbits(23)
            lines.append(_pack_vector_line(rb(), rb(), rng.randrange(255),
                                           rng.randrange(255), acc, e5m2))
        # shift-targeted
        for target in list(range(-50, -20, 3)) + [-1, 0, 1, 69, 70, 71, 72]:
            for _ in range(40):
                E = rng.randrange(1, 255)
                need = E - EXP_CONST - target
                if not (-254 <= need <= 254): continue
                sa = min(254, max(0, need + 127)); sb = need + 254 - sa
                if not (0 <= sb <= 254): continue
                acc = (rng.randrange(2) << 31) | (E << 23) | rng.getrandbits(23)
                lines.append(_pack_vector_line(rb(), rb(), sa, sb, acc, e5m2))
        # cancellation
        small = [0x01]+[0]*7
        for _ in range(1500):
            E = rng.randrange(1, 255)
            rsh = rng.randrange(1, 48)
            need = E - EXP_CONST + rsh
            if not (-254 <= need <= 254): continue
            sa = min(254, max(0, need + 127)); sb = need + 254 - sa
            if not (0 <= sb <= 254): continue
            acc = (1 << 31) | (E << 23) | (rng.getrandbits(23) | (1 << 22))
            lines.append(_pack_vector_line(small, small, sa, sb, acc, e5m2))
    p = Path(out_path) if out_path is not None else DEFAULT_VECTORS_OUT
    p.parent.mkdir(parents=True, exist_ok=True)
    p.write_text("\n".join(lines) + "\n")
    print(f"wrote {len(lines)} vectors -> {p}")

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--emit-vectors", action="store_true",
                    help="verify, then deterministically write tb/fp8_unit_vectors.hex")
    ap.add_argument("--out", default=None)
    args = ap.parse_args()
    ok = run_verification()
    if not ok:
        print("\nVerification FAILED."); sys.exit(1)
    print("\nVerification PASSED.")
    if args.emit_vectors:
        emit_vectors(args.out)

if __name__ == "__main__":
    main()