#!/usr/bin/env python3
"""
Golden model: M2XFP4 fused engine, paper-style sliding-accumulator datapath.

M2XFP4 = MXFP4 elements + 8 bits of per-instruction metadata (M2XFP, ASPLOS'26,
arXiv:2601.19213). The 16-element dual-read operand pair is split into 2
subgroups of 8. Per subgroup:

  rs1 (ACTIVATIONS, Elem-EM): 2 metadata bits extend the mantissa of the SINGLE
      largest-magnitude element ("top-1") to E2M3, via the paper's bias-clamp
      encoding (Alg. 1 steps 6-8). Every other element stays plain E2M1.
  rs2 (WEIGHTS, Sg-EM): 2 metadata bits refine the subgroup's effective scale to
      (1 + k/4) * 2^E for k in {0,1,2,3} - a shift-and-add on the subgroup's
      partial sum, NOT a multiply (paper Sec 5.4).

rs1/rs2 roles are ASYMMETRIC and fixed by the ISA (unlike MXFP4/MXFP8 MXFUSED,
where the operands are interchangeable). Swapping them changes the result.

Frame: 43-bit scale-free SoP frame (code units, bit b = value weight 2^(b-6)),
extended by 25 'remaining' bits for the LZC -> 68-bit word. Same structure as
fp4_golden.py's 38-bit frame, only the constants differ:

    | sign : 1 | acc @ max left shift : 24 | R guard : 1 | unsigned SoP : 17 |

  - anchor 6 (vs FP4's 2): W in (1/2)Z and X' in (1/8)Z -> products in (1/16)Z;
    the Sg-EM (1 + k/4) then lands them in (1/64)Z.  2^-6 = the frame LSB.
  - SoP field 17b: |SoP| <= 2 * 8 * (12 * 56) * 7 = 75264 frame units < 2^17
    (a deliberately loose sizing bound - see run_verification()'s tighter
    4704-per-subgroup assertion, which gives 65856 and the same field width).
  - REMAIN = 25, unchanged from FP4 and for the same reason: the bound
    2^REMAIN - 2^23 >= 2^24 depends only on the accumulator's 24-bit mantissa,
    not on the anchor or the SoP width. So v8's corner fix transfers for free
    and this model expects corner_allowed == 0, not FP4's "allowed" class.

Checked against exact Fraction arithmetic, with the project's output
conventions (flush subnormal *results* to +0, clamp overflow to max finite, no
Inf/NaN handling, bypass returns old_acc verbatim) - identical to
fp4_golden.py / fp8_golden.py.

Usage:
  python3 m2_golden.py                  Verify the golden model only. Writes
                                        nothing. Exit code 0 iff fail == 0.

  python3 m2_golden.py --emit-vectors   Run the SAME full verification first.
                                        If any check fails, abort with a
                                        nonzero exit code and write nothing.
                                        If verification passes, deterministically
                                        (re)generate tb/m2_unit_vectors.hex from
                                        a fixed RNG seed (see EMIT_SEED below).
"""
from fractions import Fraction
import random, sys, argparse
from pathlib import Path

# ---- constants (must match RTL) ----
FRAME_W    = 43
MAX_SHIFT  = 18          # FRAME_W - 24 - 1
REMAIN     = 25
LZC_W      = FRAME_W + REMAIN          # 68
ANCHOR     = 6           # frame bit b has value weight 2^(b-ANCHOR)
EXP_CONST  = 144         # 127 (FP32 bias) + 23 (mant frac) - 6 (code anchor)
SOP_BOUND  = 75264       # loose sizing-proof bound, |SoP| <= this, < 2^17

# ---- E2M1 decode: code = 2*value (shared convention with fp4_golden.py) ----
def fp4_to_code(nib):
    s, e, m = (nib >> 3) & 1, (nib >> 1) & 3, nib & 1
    mag = m if e == 0 else (2 + m) << (e - 1)
    return -mag if s else mag

def fp4_value(nib):
    return Fraction(fp4_to_code(nib), 2)

# ---- M2XFP4 Elem-EM decode --------------------------------------------------
# The stored 6-bit datum for the top-1 element is {fp4_bits[3:0], meta[1:0]},
# where fp4_bits is FloatToBits(|x_fp4|) - i.e. the encoding operates on
# MAGNITUDES only (Alg. 1 lines 13-14); the sign rides along in the FP4 nibble
# and is never disturbed. Decode is that 6-bit pattern MINUS ONE, read as E2M3.
#
# Consequence worth being explicit about: with meta == 00 the decrement borrows
# out of the mantissa into the exponent field, so the top-1 element's BASELINE
# value is not the stored FP4 code - it is code-1 with mantissa 11. The plain
# "FP4 value + delta" reading of the paper's Sec 5.4 is the post-decrement
# split, not the stored encoding.

E2M1_MAG = [Fraction(0), Fraction(1,2), Fraction(1), Fraction(3,2),
            Fraction(2), Fraction(3), Fraction(4), Fraction(6)]

def _e2m3_mag(v):
    """5-bit E2M3 magnitude code -> exact value. bias 1, subnormal = m/8."""
    e, m = v >> 3, v & 7
    return Fraction(m, 8) if e == 0 else (1 + Fraction(m, 8)) * Fraction(2) ** (e - 1)

E2M3_MAG = [_e2m3_mag(v) for v in range(32)]

def m2_x_mag_bits(nib, meta):
    """{fp4_mag[2:0], meta[1:0]} - 1, as a 5-bit E2M3 magnitude code.

    The all-zero input is clamped to 0 rather than borrowing below zero. The
    encoder provably never emits it (see m2_encode_subgroup: fp6_bits+1 >= 1,
    and clamping into [0,3] when fp4_bits==0 can only yield >= 1), so this is
    a totality guard for arbitrary/garbage metadata, not a reachable path."""
    v = ((nib & 7) << 2) | (meta & 3)
    return 0 if v == 0 else v - 1

def m2_x_value(nib, meta):
    """Exact value of an Elem-EM-extended activation element."""
    mag = E2M3_MAG[m2_x_mag_bits(nib, meta)]
    return -mag if (nib >> 3) & 1 else mag

def m2_x_code(nib, meta):
    """code = 8 * value, so X' in (1/8)Z is an integer. |code| <= 56 (7b)."""
    c = m2_x_value(nib, meta) * 8
    assert c.denominator == 1
    return int(c)

def top1_idx(nibs8):
    """Paper Alg. 1 lines 7-10: select on |quantized FP4 value|, ties broken by
    LOWEST index. Note the paper's own Fig. 10 disagrees with its Alg. 1 here -
    the figure's FP4->UINT LUT ranks +6 above -6, so they never tie and the sign
    decides. We follow Alg. 1 (abs + lowest index), because that is the rule the
    offline quantizer implements, and the RTL must match the quantizer.

    E2M1 magnitude codes are monotonic in value, so the RTL compare is a plain
    3-bit unsigned compare - the paper's 16-entry LUT is unnecessary here."""
    mags = [abs(fp4_to_code(n)) for n in nibs8]
    return mags.index(max(mags))          # .index() == first == lowest index

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
def m2_fused_model(a_nibs, b_nibs, elem_em, sg_em, a_raw, b_raw, acc_bits,
                   trace=False, diag=None):
    """a_nibs = rs1 = activations (16 nibbles), b_nibs = rs2 = weights.
    elem_em[j] = 2-bit Elem-EM for activation subgroup j (applies to its top-1).
    sg_em[j]   = 2-bit Sg-EM   for weight subgroup j (scales its partial sum)."""
    if diag is None: diag = {}

    # FRONT: two 8-term subtrees, each scaled by its own (1 + k/4), then summed.
    # Integer form: P_j is in units of 1/16, and (1+k/4)*P_j = P_j*(4+k) in
    # units of 1/64 -- exact, no truncation, which is the whole reason the frame
    # anchor moves from 2 to 6.
    sop = 0
    subgroup_P = []
    for j in range(2):
        lo = 8 * j
        t = top1_idx(a_nibs[lo:lo+8])
        P = 0
        for i in range(8):
            cw = fp4_to_code(b_nibs[lo + i])                    # 2*W, |.| <= 12
            if i == t:
                cx = m2_x_code(a_nibs[lo + i], elem_em[j])      # 8*X', |.| <= 56
            else:
                cx = 4 * fp4_to_code(a_nibs[lo + i])            # 8*X  == 4*(2*X)
            P += cw * cx
        subgroup_P.append(P)
        sop += P * (4 + sg_em[j])                               # units of 1/64
    assert -SOP_BOUND <= sop <= SOP_BOUND, sop
    diag['subgroup_P'] = subgroup_P
    diag['sop'] = sop

    scale_exp = (a_raw - 127) + (b_raw - 127)

    # BACK1: acc decode + slide (structurally identical to fp4_golden.py)
    sd  = (acc_bits >> 31) & 1
    E   = (acc_bits >> 23) & 0xFF
    M   = acc_bits & 0x7FFFFF
    is_normal = 1 if E != 0 else 0
    mant = (is_normal << 23) | M
    smant = -mant if sd else mant                      # 25-bit signed in RTL
    e_eff = E + (0 if is_normal else 1)                # E + is_subnormal
    acc_shift = e_eff - EXP_CONST - scale_exp
    assert -397 <= acc_shift <= 364

    result_is_acc = False
    acc_sticky = 0
    rshift = 0
    if acc_shift > MAX_SHIFT:
        result_is_acc = True
        word = None
    elif acc_shift >= 0:
        s43 = sop + (smant << acc_shift)
        assert -(1 << (FRAME_W - 1)) < s43 < (1 << (FRAME_W - 1))  # knife-edge
        word = s43 << REMAIN                            # remaining = 0
    else:
        rshift = -acc_shift
        acc_top = smant >> rshift                       # arithmetic (floor)
        if rshift > REMAIN:
            remaining = smant >> (rshift - REMAIN)
            acc_sticky = 1 if (smant & ((1 << (rshift - REMAIN)) - 1)) else 0
            if sop == 0:
                result_is_acc = True                    # paper line-689 bypass
        else:
            remaining = (smant << (REMAIN - rshift))
        word_rtl = (((sop + acc_top) << REMAIN) | (remaining & ((1 << REMAIN) - 1))) \
                   & ((1 << LZC_W) - 1)
        if word_rtl & (1 << (LZC_W - 1)): word_rtl -= (1 << LZC_W)
        exact_ext = Fraction(sop) * (1 << REMAIN) + Fraction(smant * (1 << REMAIN), 1 << rshift)
        flo = exact_ext.numerator // exact_ext.denominator
        assert word_rtl == flo, (word_rtl, flo)
        assert acc_sticky == (0 if exact_ext == flo else 1)
        word = word_rtl

    diag.update(bypass=result_is_acc, acc_sticky=acc_sticky, rshift=rshift, lead=None)
    if result_is_acc:
        if trace: print("  bypass -> old_acc")
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

    # BACK3: mantissa / round / sticky / exponent, mirroring mx_finalize
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
        # carry out of the fraction: pre-round fraction was all-ones, the
        # renormalized fraction is exactly zero (same fix as mx_finalize's).
        unb += 1
        assert m_ext == (1 << 23)
        mant_out = 0
    else:
        mant_out = m_ext & 0x7FFFFF
    if unb + 127 <= 0:
        return (sign << 31)          # signed-zero flush, matching mx_finalize
    if unb + 127 >= 255:
        return (sign << 31) | 0x7F7FFFFF
    return (sign << 31) | ((unb + 127) << 23) | mant_out

# ---- exact reference ----
def reference(a_nibs, b_nibs, elem_em, sg_em, a_raw, b_raw, acc_bits):
    scale_exp = (a_raw - 127) + (b_raw - 127)
    dot = Fraction(0)
    for j in range(2):
        lo = 8 * j
        t = top1_idx(a_nibs[lo:lo+8])
        P = Fraction(0)
        for i in range(8):
            w = fp4_value(b_nibs[lo + i])
            x = m2_x_value(a_nibs[lo + i], elem_em[j]) if i == t else fp4_value(a_nibs[lo + i])
            P += w * x
        dot += (1 + Fraction(sg_em[j], 4)) * P
    return Fraction(2) ** scale_exp * dot + fp32_decode_exact(acc_bits)

def project_rne(v):
    """Project output convention: RNE at 24-bit *normalized* granularity,
    flush biased<=0 results to +0, clamp overflow to sign|max finite."""
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

def bits_to_val(b):
    return fp32_decode_exact(b)

def zeros_equal(x, y):
    return (x & 0x7FFFFFFF) == 0 and (y & 0x7FFFFFFF) == 0

def nibs_for_codes(codes):
    """Inverse of fp4_to_code, for building directed vectors from signed codes."""
    inv = {}
    for n in range(16):
        inv.setdefault(fp4_to_code(n), n)
    return [inv[c] for c in codes]

# ---- the offline quantizer's encoding contract -------------------------------
# Not part of the engine, but the engine is only correct if the encoder obeys
# this exactly. Modelled here so the contract is executable and asserted rather
# than described in prose. Mirrors paper Alg. 1 steps 1-8.

def _quant_mag(a, table):
    """RNE onto a magnitude table (sorted ascending, index == bit pattern);
    values above the table max clamp to the max."""
    best_bits, best_d = 0, None
    for bits, val in enumerate(table):
        d = abs(a - val)
        if best_d is None or d < best_d or (d == best_d and (bits & 1) == 0):
            best_bits, best_d = bits, d
    return best_bits

def m2_encode_subgroup(xs, scale_exp_a):
    """xs = 8 exact Fractions (one activation subgroup), scale_exp_a = the E8M0
    exponent applied to rs1. Returns (nibs8, meta) per Alg. 1 steps 2-8."""
    S = Fraction(2) ** scale_exp_a
    nibs = []
    for x in xs:
        s = 1 if x < 0 else 0
        nibs.append((s << 3) | _quant_mag(abs(x) / S, E2M1_MAG))
    t = top1_idx(nibs)
    fp6_bits  = _quant_mag(abs(xs[t]) / S, E2M3_MAG)     # step 5
    encoded   = fp6_bits + 1                             # step 6: bias
    fp4_bits  = nibs[t] & 7
    lo, hi    = fp4_bits << 2, (fp4_bits << 2) | 3       # step 7: clamp range
    clamped   = min(max(encoded, lo), hi)
    return nibs, clamped & 3                             # step 8: low 2 bits

# ---- harness ----
def run_verification(verbose_fails=20):
    fail = 0
    corner_allowed = 0
    corner_examples = []
    corner_tags = {}
    checked = 0

    def check(a_nibs, b_nibs, elem_em, sg_em, a_raw, b_raw, acc_bits, tag=""):
        nonlocal fail, corner_allowed, checked
        checked += 1
        diag = {}
        got = m2_fused_model(a_nibs, b_nibs, elem_em, sg_em, a_raw, b_raw, acc_bits, diag=diag)
        exact = reference(a_nibs, b_nibs, elem_em, sg_em, a_raw, b_raw, acc_bits)

        # frame-unit identity: the integer SoP is exactly 64x the rational dot
        dot = sum((1 + Fraction(sg_em[j], 4)) *
                  sum(fp4_value(b_nibs[8*j+i]) *
                      (m2_x_value(a_nibs[8*j+i], elem_em[j])
                       if i == top1_idx(a_nibs[8*j:8*j+8]) else fp4_value(a_nibs[8*j+i]))
                      for i in range(8))
                  for j in range(2))
        if Fraction(diag['sop'], 64) != dot:
            fail += 1; print(f"SOP-UNIT FAIL {tag}: sop/64={Fraction(diag['sop'],64)} dot={dot}"); return
        # tight per-subgroup bound (see module docstring): top-1 caps the others
        for P in diag['subgroup_P']:
            if not (-4704 <= P <= 4704):
                fail += 1; print(f"P-BOUND FAIL {tag}: P={P}"); return

        if diag['bypass']:
            if got != acc_bits:
                fail += 1; print(f"BYPASS FAIL {tag}: got {got:08x} != acc {acc_bits:08x}"); return
            accv = fp32_decode_exact(acc_bits)
            E = (acc_bits >> 23) & 0xFF
            ulp = Fraction(2) ** (max(E, 1) - 127 - 23)
            if not (abs(exact - accv) < ulp / 2):
                fail += 1
                print(f"BYPASS INEXACT {tag}: acc {acc_bits:08x} "
                      f"|exact-acc|={float(abs(exact-accv))} ulp/2={float(ulp/2)}")
            return

        exp = project_rne(exact)
        if got == exp or zeros_equal(got, exp):
            return
        # FP4's REMAIN=24 corner class must NOT exist here (REMAIN=25 closes it,
        # same closed form). Anything landing here is a real failure - but
        # classify it so a regression is diagnosable rather than just "FAIL".
        if diag['acc_sticky'] and diag['rshift'] > REMAIN and diag['lead'] is not None \
           and diag['lead'] <= 23:
            corner_allowed += 1
            corner_tags[tag] = corner_tags.get(tag, 0) + 1
            if len(corner_examples) < 5:
                corner_examples.append((tag, got, exp, float(exact)))
            return
        fail += 1
        if fail <= verbose_fails:
            print(f"FAIL {tag}: got {got:08x} exp {exp:08x} exact={float(exact)} "
                  f"sop={diag['sop']} elem_em={elem_em} sg_em={sg_em} "
                  f"scales=({a_raw},{b_raw}) acc={acc_bits:08x} diag={diag}")

    rng = random.Random(20260716)

    def rand_nibs():  return [rng.randrange(16) for _ in range(16)]
    def rand_em():    return [rng.randrange(4), rng.randrange(4)]
    def rand_acc():
        E = rng.choice([0, 0, 1, 2, 127, 126, 128, 200, 253, 254] + [rng.randrange(255)]*3)
        return (rng.randrange(2) << 31) | (E << 23) | rng.randrange(1 << 23)

    # ---- encoder-contract conformance (Alg. 1) ----
    # Proves, rather than assumes: (a) |X'| <= 7.0 always, (b) X' in (1/8)Z,
    # (c) the encoder never emits {fp4_mag,meta} == 00000 (the decode underflow),
    # (d) decode(encode(x)) reproduces the clamped E2M3 value bit-exactly.
    xprime_seen = set()
    for _ in range(20000):
        scale_exp_a = rng.randrange(-8, 9)
        xs = [Fraction(rng.randrange(-1 << 20, 1 << 20), 1 << 14) for _ in range(8)]
        nibs, meta = m2_encode_subgroup(xs, scale_exp_a)
        t = top1_idx(nibs)
        checked += 1
        v = ((nibs[t] & 7) << 2) | meta
        if v == 0:
            fail += 1; print(f"ENCODER emitted the decode-underflow pattern: {nibs[t]:04b}/{meta:02b}")
        xv = m2_x_value(nibs[t], meta)
        xprime_seen.add(xv)
        if abs(xv) > 7:
            fail += 1; print(f"ENCODER |X'| > 7: {xv}")
        if (xv * 8).denominator != 1:
            fail += 1; print(f"ENCODER X' not in (1/8)Z: {xv}")
        # the top-1 must still be decodable back to what the encoder clamped to
        if E2M3_MAG[m2_x_mag_bits(nibs[t], meta)] != abs(xv):
            fail += 1; print(f"ENCODER round-trip mismatch at {nibs[t]:04b}/{meta:02b}")

    # exhaustive X' set: all 8 FP4 magnitudes x 4 metas, minus the zero pattern
    all_xp = {m2_x_value(c, m) for c in range(8) for m in range(4)
              if ((c & 7) << 2 | m) != 0}
    if max(all_xp) != 7 or max(x.denominator for x in all_xp) != 8 or len(all_xp) != 31:
        fail += 1
        print(f"X' SET FAIL: max={max(all_xp)} gran=1/{max(x.denominator for x in all_xp)} "
              f"n={len(all_xp)} (expected 7, 1/8, 31)")

    # ---- directed vectors ----
    z = [0]*16
    check(z, z, [0,0], [0,0], 127, 127, 0x00000000, "all-zero")

    # M-test: plain elements only (top-1 meta chosen so X' == the FP4 value).
    # FP4 2.0 = code 4 = nib 0100 -> mag 100; {100,meta}-1 == 10000 needs meta=01.
    a = nibs_for_codes([4]*4 + [0]*12); b = nibs_for_codes([4]*4 + [0]*12)
    check(a, b, [1, 1], [0, 0], 127, 127, 0x00000000, "M-test-16.0")

    # max |SoP|: all activations 6.0 w/ top-1 promoted to 7.0 (meta=11),
    # all weights 6.0, both subgroups Sg-EM k=3.
    amax = nibs_for_codes([12]*16); bmax = nibs_for_codes([12]*16)
    check(amax, bmax, [3, 3], [3, 3], 127, 127, 0x00000000, "sop-max")
    check(nibs_for_codes([-12]*16), bmax, [3, 3], [3, 3], 127, 127, 0x00000000, "sop-min")

    # min nonzero |SoP| == 1 frame unit: P0*(4+k0) + P1*(4+k1) = 2*4 + (-1)*7 = 1
    # P0 = +2 (1/16 units): W=1.0 (code 2) x X'=1/8 (code 1) in subgroup 0.
    #   X' = 1/8 -> {fp4_mag=000, meta=10} -> v=2, -1=1 -> e=0,m=1 -> 1/8. top-1
    #   of an all-zero-code subgroup is index 0, so meta lands on element 0.
    # P1 = -1: W=-0.5 (code -1) x X'=1/8 -> -1 ... wait: code_w=-1, cx=1 -> -1.
    a_min = [0]*16
    b_min = nibs_for_codes([2] + [0]*7 + [-1] + [0]*7)
    check(a_min, b_min, [2, 2], [0, 3], 127, 127, 0x00000000, "sop-unit-1")

    special_accs = [0x00000000, 0x80000000, 0x00000001, 0x007FFFFF,
                    0x00800000, 0x3F800000, 0x41800000, 0x7F000000, 0x7F7FFFFF,
                    0x80800001, 0xC0000000, 0x00800001, 0x34000000]
    special_scales = [0, 1, 63, 126, 127, 128, 191, 253, 254]
    special_sops = [(z, z), (a, b), (amax, bmax), (a_min, b_min)]
    special_em   = [([0,0],[0,0]), ([3,3],[3,3]), ([1,2],[2,1]), ([0,3],[3,0])]

    for (an, bn) in special_sops:
        for (ee, se) in special_em:
            for acc in special_accs:
                for sa in special_scales:
                    for sb in special_scales:
                        check(an, bn, ee, se, sa, sb, acc, "directed")

    # boundary acc_shift targeting
    for target in [364, 19, 18, 17, 1, 0, -1, -23, -24, -25, -26, -47, -48, -147, -300, -397]:
        for acc in special_accs:
            E = (acc >> 23) & 0xFF
            e_eff = E + (0 if E else 1)
            need = e_eff - EXP_CONST - target
            if -254 <= need <= 254:
                sa = max(0, min(254, need + 127)); sb = need + 254 - sa
                if 0 <= sb <= 254 and (sa - 127) + (sb - 127) == need:
                    for (an, bn) in special_sops:
                        for (ee, se) in special_em:
                            check(an, bn, ee, se, sa, sb, acc, f"shift{target}")

    # cancellation targeting: |SoP| = 1 frame unit against a deep-right-shifted acc
    for _ in range(20000):
        E = rng.randrange(1, 255)
        mant = rng.randrange(1 << 23) | rng.choice([0, 1 << 22])
        for sgn in (0, 1):
            acc = (sgn << 31) | (E << 23) | mant
            rsh = rng.randrange(REMAIN, 48)
            need = E - EXP_CONST + rsh
            if -254 <= need <= 254:
                sa = max(0, min(254, need + 127)); sb = need + 254 - sa
                if 0 <= sb <= 254:
                    check(a_min, b_min, [2, 2], [0, 3], sa, sb, acc, "cancel")

    # tie-rounding targeted: random with small scale windows around 0
    for _ in range(60000):
        check(rand_nibs(), rand_nibs(), rand_em(), rand_em(),
              rng.choice([125, 126, 127, 128, 129, rng.randrange(255)]),
              rng.choice([125, 126, 127, 128, 129, rng.randrange(255)]),
              rand_acc(), "rand-near")

    # broad random
    for _ in range(120000):
        check(rand_nibs(), rand_nibs(), rand_em(), rand_em(),
              rng.randrange(255), rng.randrange(255), rand_acc(), "rand")

    return {
        "checked": checked,
        "fail": fail,
        "corner_allowed": corner_allowed,
        "corner_tags": corner_tags,
        "corner_examples": corner_examples,
        "xprime_distinct": len(xprime_seen),
    }


# ---- vector emission (deterministic, gated on run_verification() passing) ----
EMIT_SEED       = 0x4D325850   # arbitrary fixed constant ("M2XP" in ASCII hex)
EMIT_N_RANDOM   = 20000
SCRIPT_DIR      = Path(__file__).resolve().parent
DEFAULT_VECTORS_OUT = SCRIPT_DIR / ".." / "tb" / "hex_vectors" / "m2_unit_vectors.hex"

def _pack_nibs(nibs):
    v = 0
    for i, n in enumerate(nibs):
        v |= (n & 0xF) << (4 * i)
    return v

def _pack_meta(elem_em, sg_em):
    """rs3[56:49] = {sg_em[3:0], elem_em[3:0]}; subgroup 1 in the upper 2 bits
    of each nibble-field. rs3[48] stays reserved (uniform sub-format select,
    symmetric with the FP8 engine's E4M3/E5M2 use of the same bit)."""
    e = (elem_em[1] & 3) << 2 | (elem_em[0] & 3)
    s = (sg_em[1]   & 3) << 2 | (sg_em[0]   & 3)
    return ((s & 0xF) << 4) | (e & 0xF)

def _pack_vector_line(a_nibs, b_nibs, elem_em, sg_em, a_raw, b_raw, acc_bits):
    rs1 = _pack_nibs(a_nibs)
    rs2 = _pack_nibs(b_nibs)
    rs3 = (_pack_meta(elem_em, sg_em) << 49) | ((b_raw & 0xFF) << 40) \
          | ((a_raw & 0xFF) << 32) | (acc_bits & 0xFFFFFFFF)
    exp = m2_fused_model(a_nibs, b_nibs, elem_em, sg_em, a_raw, b_raw, acc_bits)
    return f"{rs1:016x}{rs2:016x}{rs3:016x}{exp:08x}"

def _directed_emit_vectors():
    """A handful of fixed, human-checkable cases, always included first."""
    codes = nibs_for_codes
    v = []
    v.append((codes([4]*4+[0]*12), codes([4]*4+[0]*12), [1,1], [0,0], 127, 127, 0x00000000))
    v.append((codes([12]*16), codes([12]*16), [3,3], [3,3], 127, 127, 0x00000000))   # sop-max
    v.append((codes([-12]*16), codes([12]*16), [3,3], [3,3], 127, 127, 0x00000000))  # sop-min
    v.append(([0]*16, codes([2]+[0]*7+[-1]+[0]*7), [2,2], [0,3], 127, 127, 0x00000000))  # sop = 1
    v.append((codes([12]*16), codes([12]*16), [3,3], [3,3], 0, 0, 0x3F800000))       # bypass
    v.append((codes([12]*16), codes([12]*16), [0,0], [0,0], 254, 254, 0xC0000000))   # deep rshift
    v.append((codes([-12]*16), codes([12]*16), [3,0], [0,3], 127, 127, 0x00000001))  # subnormal acc
    v.append(([0]*16, [0]*16, [1,1], [0,0], 200, 200, 0x00400000))                   # sop=0 bypass
    return v

def emit_vectors(out_path=None, n_random=EMIT_N_RANDOM, seed=EMIT_SEED):
    out_path = Path(out_path) if out_path is not None else DEFAULT_VECTORS_OUT
    rng = random.Random(seed)
    lines = []
    for a_nibs, b_nibs, ee, se, sa, sb, acc in _directed_emit_vectors():
        lines.append(_pack_vector_line(a_nibs, b_nibs, ee, se, sa, sb, acc))
    for _ in range(n_random):
        a = [rng.randrange(16) for _ in range(16)]
        b = [rng.randrange(16) for _ in range(16)]
        ee = [rng.randrange(4), rng.randrange(4)]
        se = [rng.randrange(4), rng.randrange(4)]
        sa, sb = rng.randrange(255), rng.randrange(255)
        acc = (rng.randrange(2) << 31) | (rng.randrange(255) << 23) | rng.randrange(1 << 23)
        lines.append(_pack_vector_line(a, b, ee, se, sa, sb, acc))
    out_path.parent.mkdir(parents=True, exist_ok=True)
    with open(out_path, "w") as f:
        f.write("\n".join(lines) + "\n")
    return len(lines), out_path


def main():
    ap = argparse.ArgumentParser(
        description="M2XFP4 fused-engine golden model: verify, and optionally "
                    "(re)generate tb/m2_unit_vectors.hex from a fixed seed.")
    ap.add_argument("--emit-vectors", action="store_true",
                    help="After a full passing verification, deterministically "
                         "regenerate the M2 unit-test vector file.")
    ap.add_argument("--vectors-out", default=None,
                    help=f"Override the output path (default: {DEFAULT_VECTORS_OUT}).")
    ap.add_argument("--n-random", type=int, default=EMIT_N_RANDOM)
    ap.add_argument("--seed", type=lambda x: int(x, 0), default=EMIT_SEED)
    args = ap.parse_args()

    result = run_verification()
    print(f"\nchecked={result['checked']} fail={result['fail']} "
          f"corner_allowed={result['corner_allowed']} by tag: {result['corner_tags']}")
    print(f"distinct X' values produced by the encoder sweep: {result['xprime_distinct']}")
    for ex in result["corner_examples"]:
        print("  corner example:", ex[0], f"got {ex[1]:08x} exp {ex[2]:08x} exact={ex[3]}")

    if result["fail"]:
        print(f"\nVERIFICATION FAILED ({result['fail']} mismatches) - "
              f"aborting without writing any vector file.", file=sys.stderr)
        sys.exit(1)
    if result["corner_allowed"]:
        print(f"\nVERIFICATION FAILED: {result['corner_allowed']} vectors hit the "
              f"REMAIN corner class, which REMAIN=25 is supposed to close "
              f"(see module docstring).", file=sys.stderr)
        sys.exit(1)

    print("\nVerification PASSED.")
    if not args.emit_vectors:
        sys.exit(0)
    n, out_path = emit_vectors(args.vectors_out, n_random=args.n_random, seed=args.seed)
    print(f"Wrote {n} vectors to {out_path} (seed=0x{args.seed:x}).")
    sys.exit(0)


if __name__ == "__main__":
    main()