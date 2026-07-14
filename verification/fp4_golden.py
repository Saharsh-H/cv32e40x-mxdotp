#!/usr/bin/env python3
"""
Golden model: MXFP4 fused engine, paper-style sliding-accumulator datapath.
Frame: 38-bit scale-free SoP frame (code units, bit b = value weight 2^(b-2)),
extended by 24 'remaining' bits for the LZC -> 62-bit word.
Mirrors fpnew_mxdotp_accumulator_shift / add_accumulator_sop / twos_compl
(incl. the negative-word sticky-negation trick) restricted to one format.

Checked against exact Fraction arithmetic + reference IEEE-754 RNE, with the
project's output conventions (flush subnormal *results* to +0, clamp overflow
to max finite, no Inf/NaN handling, bypass returns old_acc verbatim).

Usage:
  python3 fp4_golden.py                 Verify the golden model only (227k+
                                         directed/random vectors vs the exact-
                                         rational reference). Writes nothing.
                                         Exit code 0 iff fail == 0.

  python3 fp4_golden.py --emit-vectors  Run the SAME full verification first.
                                         If any check fails, abort with a
                                         nonzero exit code and write nothing.
                                         If verification passes, deterministically
                                         (re)generate tb/fp4_unit_vectors.hex
                                         from a fixed RNG seed (see EMIT_SEED
                                         below) - same file every run, on any
                                         machine, until the seed/vector count
                                         is deliberately changed.
"""
from fractions import Fraction
import random, sys, argparse
from pathlib import Path

# ---- constants (must match RTL) ----
FRAME_W    = 38
MAX_SHIFT  = 13          # FRAME_W - 24 - 1
REMAIN     = 24
LZC_W      = 62          # FRAME_W + REMAIN
EXP_CONST  = 148         # 127 (FP32 bias) + 23 (mant frac) - 2 (code anchor)

# ---- E2M1 decode: code = 2*value ----
def fp4_to_code(nib):
    s, e, m = (nib >> 3) & 1, (nib >> 1) & 3, nib & 1
    mag = m if e == 0 else (2 + m) << (e - 1)
    return -mag if s else mag

def fp4_value(nib):
    return Fraction(fp4_to_code(nib), 2)

# ---- FP32 helpers ----
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

def ieee_rne(v):
    """Reference full-IEEE RNE of exact Fraction to FP32 (subnormals supported,
    overflow -> None meaning +-Inf)."""
    if v == 0:
        return 0x00000000
    s = 1 if v < 0 else 0
    a = -v if v < 0 else v
    # scaled integer rounding at subnormal granularity first
    # find e with 2^e <= a < 2^(e+1)
    e = a.numerator.bit_length() - a.denominator.bit_length()
    if Fraction(2) ** e > a: e -= 1
    assert Fraction(2)**e <= a < Fraction(2)**(e+1)
    if e < -126:
        # subnormal candidate: round a / 2^-149 to integer
        q = a / (Fraction(2) ** -149)
    else:
        q = a / (Fraction(2) ** (e - 23))
    n, r = divmod(q.numerator, q.denominator)
    half2 = 2 * r
    if half2 > q.denominator or (half2 == q.denominator and (n & 1)):
        n += 1
    if e < -126:
        if n == 0: return 0x00000000
        if n < (1 << 23):
            return (s << 31) | n            # subnormal
        # rounded up into normal range
        e2, m = -126, n - (1 << 23)
        return (s << 31) | ((e2 + 127) << 23) | m
    else:
        if n == (1 << 24):
            n >>= 1; e += 1
        if e > 127:
            return None if s == 0 else -1   # +Inf / -Inf sentinel
        if e < -126:  # can't happen here
            raise AssertionError
        return (s << 31) | ((e + 127) << 23) | (n - (1 << 23))

def project_flush(bits_or_inf, sign_hint):
    """Project output conventions on top of IEEE RNE: subnormal result -> +0,
    overflow -> sign|0xFE|7FFFFF, -0 -> +0."""
    if bits_or_inf is None:  return 0x7F7FFFFF
    if bits_or_inf == -1:    return 0xFF7FFFFF
    b = bits_or_inf
    E = (b >> 23) & 0xFF
    if E == 0:               return 0x00000000   # flush subnormal/zero result
    return b

# ---- the model of the proposed RTL ----
def fp4_fused_model(a_nibs, b_nibs, a_raw, b_raw, acc_bits, trace=False, diag=None):
    if diag is None: diag = {}
    # FRONT
    sop = sum(fp4_to_code(a) * fp4_to_code(b) for a, b in zip(a_nibs, b_nibs))
    assert -2304 <= sop <= 2304
    scale_exp = (a_raw - 127) + (b_raw - 127)

    # BACK1: acc decode
    sd  = (acc_bits >> 31) & 1
    E   = (acc_bits >> 23) & 0xFF
    M   = acc_bits & 0x7FFFFF
    is_normal = 1 if E != 0 else 0
    mant = (is_normal << 23) | M
    smant = -mant if sd else mant                      # 25-bit signed in RTL
    e_eff = E + (0 if is_normal else 1)                # E + is_subnormal
    acc_shift = e_eff - EXP_CONST - scale_exp
    assert -401 <= acc_shift <= 360

    result_is_acc = False
    acc_sticky = 0
    rshift = 0
    if acc_shift > MAX_SHIFT:
        result_is_acc = True
        word = None
    elif acc_shift >= 0:
        s38 = sop + (smant << acc_shift)
        assert -(1 << 37) < s38 < (1 << 37)            # knife-edge frame proof
        word = s38 << REMAIN                            # remaining = 0
    else:
        rshift = -acc_shift
        # RTL assembly: {sop + (smant>>>rshift), remaining_pattern}
        acc_top = smant >> rshift                       # arithmetic (floor)
        if rshift > REMAIN:
            remaining = smant >> (rshift - REMAIN)
            acc_sticky = 1 if (smant & ((1 << (rshift - REMAIN)) - 1)) else 0
            if sop == 0:
                result_is_acc = True                    # paper line-689 bypass
        else:
            remaining = (smant << (REMAIN - rshift))    # low 24 bits taken below
        word_rtl = (((sop + acc_top) << REMAIN) | (remaining & ((1 << REMAIN) - 1))) & ((1 << LZC_W) - 1)
        # interpret as signed 62-bit
        if word_rtl & (1 << (LZC_W - 1)): word_rtl -= (1 << LZC_W)
        # value identity check: word == floor(sop*2^24 + smant*2^(24-rshift))
        exact_ext = Fraction(sop * (1 << REMAIN)) + Fraction(smant, 1 << rshift) * (1 << REMAIN) / 1
        exact_ext = Fraction(sop) * (1 << REMAIN) + Fraction(smant * (1 << REMAIN), 1 << rshift)
        flo = exact_ext.numerator // exact_ext.denominator
        assert word_rtl == flo, (word_rtl, flo)
        assert acc_sticky == (0 if exact_ext == flo else 1)
        word = word_rtl

    diag.update(bypass=result_is_acc, acc_sticky=acc_sticky, rshift=rshift, lead=None)
    if result_is_acc:
        if trace: print("  bypass -> old_acc")
        return acc_bits

    # BACK2: sign/magnitude with the paper's sticky-negation trick, then lead
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

    # BACK3: mantissa / round / sticky / exponent, mirroring acc_finalize
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
    unb = lead - 26 + scale_exp
    m_ext = mant_out
    if round_bit and (sticky or (mant_out & 1)):
        m_ext += 1
    if m_ext >> 23:
        # carry out of the fraction: pre-round fraction was all-ones, the
        # renormalized fraction is exactly zero. (The shipping acc_finalize's
        # mant_ext[23:1] here is a latent bug - keeps the carry as fraction MSB.)
        unb += 1
        assert m_ext == (1 << 23)
        mant_out = 0
    else:
        mant_out = m_ext & 0x7FFFFF
    if unb + 127 <= 0:
        return (sign << 31)          # signed-zero flush, matching acc_finalize's
                                     # {sign, 0, 0} convention (and fp4_finalize's)
    if unb + 127 >= 255:
        return (sign << 31) | 0x7F7FFFFF
    return (sign << 31) | ((unb + 127) << 23) | mant_out

# ---- exact reference ----
def reference(a_nibs, b_nibs, a_raw, b_raw, acc_bits):
    scale_exp = (a_raw - 127) + (b_raw - 127)
    dot = sum(fp4_value(a) * fp4_value(b) for a, b in zip(a_nibs, b_nibs))
    exact = Fraction(2) ** scale_exp * dot + fp32_decode_exact(acc_bits)
    return exact

def project_rne(v):
    """Project output convention: RNE at 24-bit *normalized* granularity,
    flush biased<=0 results to +0, clamp overflow to sign|max finite.
    (Matches acc_finalize's semantics; NOT full-IEEE gradual underflow.)"""
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
    """Inverse of fp4_to_code, for building directed vectors from a list of
    signed code values (each in fp4_to_code's range) rather than raw nibbles."""
    inv = {}
    for n in range(16):
        inv.setdefault(fp4_to_code(n), n)
    return [inv[c] for c in codes]

# ---- harness ----
# Wrapped in a function (rather than run at import time) so this module can
# be imported by other scripts (e.g. a future vector-emission unit test for
# another engine) without re-running the sweep, and so --emit-vectors can
# gate vector writing on this function's result.
def run_verification(verbose_fails=20):
    fail = 0
    corner_allowed = 0
    corner_examples = []
    corner_tags = {}
    checked = 0

    def check(a_nibs, b_nibs, a_raw, b_raw, acc_bits, tag=""):
        nonlocal fail, corner_allowed, checked
        checked += 1
        diag = {}
        got = fp4_fused_model(a_nibs, b_nibs, a_raw, b_raw, acc_bits, diag=diag)
        exact = reference(a_nibs, b_nibs, a_raw, b_raw, acc_bits)

        if diag['bypass']:
            if got != acc_bits:
                fail += 1; print(f"BYPASS FAIL {tag}: got {got:08x} != acc {acc_bits:08x}"); return
            # exactness proof: |exact - acc| < ulp(acc)/2 strictly
            accv = fp32_decode_exact(acc_bits)
            E = (acc_bits >> 23) & 0xFF
            ulp = Fraction(2) ** (max(E,1) - 127 - 23)
            if not (abs(exact - accv) < ulp / 2):
                fail += 1
                print(f"BYPASS INEXACT {tag}: acc {acc_bits:08x} |exact-acc|={float(abs(exact-accv))} ulp/2={float(ulp/2)}")
            return

        exp = project_rne(exact)
        if got == exp or zeros_equal(got, exp):
            return
        # allowed deviation (paper-inherited): acc dropped sticky bits below the
        # 24-bit remaining field AND near-total cancellation put the leading one
        # at/below bit 23 of the 62-bit word, so the round bit is unrecoverable.
        if diag['acc_sticky'] and diag['rshift'] > REMAIN and diag['lead'] is not None and diag['lead'] <= 23:
            gv, ev = bits_to_val(got), bits_to_val(exp)
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
            sop = sum(fp4_to_code(a) * fp4_to_code(b) for a, b in zip(a_nibs, b_nibs))
            print(f"FAIL {tag}: got {got:08x} exp {exp:08x} exact={float(exact)} "
                  f"sop={sop} scales=({a_raw},{b_raw}) acc={acc_bits:08x} diag={diag}")

    # ---- directed vectors ----
    # M-test: A.B = 16.0, unit scales, acc=0 -> 0x41800000
    a = nibs_for_codes([4]*4 + [0]*12); b = nibs_for_codes([4]*4 + [0]*12)
    check(a, b, 127, 127, 0x00000000, "M-test")

    # worked example: dot = 10.5, acc = 16.0 -> 26.5 = 0x41D40000
    # A = [3, 1.5, 0.5, 1, 0...], B = [2, 2, 1, 1, 0...]: 6+3+0.5+1 = 10.5
    a = nibs_for_codes([6, 3, 1, 2] + [0]*12)
    b = nibs_for_codes([4, 4, 2, 2] + [0]*12)
    check(a, b, 127, 127, 0x41800000, "worked-26.5")

    # ---- directed sweeps ----
    rng = random.Random(20260712)

    def rand_nibs():
        return [rng.randrange(16) for _ in range(16)]

    def rand_acc():
        E = rng.choice([0, 0, 1, 2, 127, 126, 128, 200, 253, 254] + [rng.randrange(255)]*3)
        return (rng.randrange(2) << 31) | (E << 23) | rng.randrange(1 << 23)

    special_sops = [
        ([0]*16, [0]*16),                                   # sop = 0
        (nibs_for_codes([1]+[0]*15),  nibs_for_codes([1]+[0]*15)),   # sop = 1
        (nibs_for_codes([-1]+[0]*15), nibs_for_codes([1]+[0]*15)),   # sop = -1
        (nibs_for_codes([12]*16),     nibs_for_codes([12]*16)),      # sop = +2304
        (nibs_for_codes([-12]*16),    nibs_for_codes([12]*16)),      # sop = -2304
        (nibs_for_codes([12]*4+[1]+[0]*11), nibs_for_codes([12]*4+[1]+[0]*11)),  # 577
    ]
    special_accs = [0x00000000, 0x80000000, 0x00000001, 0x007FFFFF,   # zero, -0, subnormals
                    0x00800000, 0x3F800000, 0x41800000, 0x7F000000, 0x7F7FFFFF,
                    0x80800001, 0xC0000000, 0x00800001, 0x34000000]
    special_scales = [0, 1, 63, 126, 127, 128, 191, 253, 254]

    for (an, bn) in special_sops:
        for acc in special_accs:
            for sa in special_scales:
                for sb in special_scales:
                    check(an, bn, sa, sb, acc, "directed")

    # boundary acc_shift targeting: choose scale pair to hit exact shifts
    for target in [360, 14, 13, 12, 1, 0, -1, -23, -24, -25, -26, -47, -48, -147, -300, -401]:
        for acc in special_accs:
            E = (acc >> 23) & 0xFF
            e_eff = E + (0 if E else 1)
            need = e_eff - EXP_CONST - target      # scale_exp needed
            if -254 <= need <= 254:
                sa = max(0, min(254, need + 127)); sb = need + 254 - sa
                if 0 <= sb <= 254 and (sa - 127) + (sb - 127) == need:
                    for (an, bn) in special_sops:
                        check(an, bn, sa, sb, acc, f"shift{target}")

    # cancellation targeting: sop=+-1 against acc_ext ~ -+2^23-ish (rshift>24)
    one_p = (nibs_for_codes([1]+[0]*15), nibs_for_codes([1]+[0]*15))
    one_n = (nibs_for_codes([-1]+[0]*15), nibs_for_codes([1]+[0]*15))
    for _ in range(20000):
        E = rng.randrange(1, 255)
        mant = rng.randrange(1 << 23) | (rng.choice([0, 1 << 22]))
        for sgn, (an, bn) in ((1, one_p), (0, one_n)):
            acc = (sgn << 31) | (E << 23) | mant
            # want rshift in 25..47
            rsh = rng.randrange(25, 48)
            need = E - EXP_CONST + rsh
            if -254 <= need <= 254:
                sa = max(0, min(254, need + 127)); sb = need + 254 - sa
                if 0 <= sb <= 254:
                    check(an, bn, sa, sb, acc, "cancel")

    # tie-rounding targeted: random with small scale windows around 0
    for _ in range(60000):
        check(rand_nibs(), rand_nibs(),
              rng.choice([125, 126, 127, 128, 129, rng.randrange(255)]),
              rng.choice([125, 126, 127, 128, 129, rng.randrange(255)]),
              rand_acc(), "rand-near")

    # broad random
    for _ in range(120000):
        check(rand_nibs(), rand_nibs(), rng.randrange(255), rng.randrange(255),
              rand_acc(), "rand")

    return {
        "checked": checked,
        "fail": fail,
        "corner_allowed": corner_allowed,
        "corner_tags": corner_tags,
        "corner_examples": corner_examples,
    }


# ---- vector emission (deterministic, gated on run_verification() passing) ----

# Fixed seed for --emit-vectors: chosen once and committed here, NOT re-rolled
# run to run - the whole point is that tb/fp4_unit_vectors.hex is
# reproducible byte-for-byte from this script alone. Change only deliberately
# (and note it in a commit message), since it invalidates the shipped .hex.
EMIT_SEED       = 0x46503452   # arbitrary fixed constant ("FP4R" in ASCII hex)
EMIT_N_RANDOM   = 20000
SCRIPT_DIR      = Path(__file__).resolve().parent
DEFAULT_VECTORS_OUT = SCRIPT_DIR / ".." / "tb" / "fp4_unit_vectors.hex"

def _pack_nibs(nibs):
    v = 0
    for i, n in enumerate(nibs):
        v |= (n & 0xF) << (4 * i)
    return v

def _pack_vector_line(a_nibs, b_nibs, a_raw, b_raw, acc_bits):
    rs1 = _pack_nibs(a_nibs)
    rs2 = _pack_nibs(b_nibs)
    rs3 = ((b_raw & 0xFF) << 40) | ((a_raw & 0xFF) << 32) | (acc_bits & 0xFFFFFFFF)
    exp = fp4_fused_model(a_nibs, b_nibs, a_raw, b_raw, acc_bits)
    return f"{rs1:016x}{rs2:016x}{rs3:016x}{exp:08x}"

def _directed_emit_vectors():
    """A handful of fixed, human-checkable cases, always included first -
    same intent as run_verification()'s directed vectors, kept separate
    (and much smaller) so the .hex file's first few lines stay meaningful
    to skim by eye."""
    codes = nibs_for_codes
    vecs = []
    vecs.append((codes([4]*4+[0]*12), codes([4]*4+[0]*12), 127, 127, 0x00000000))   # M-test: 16.0
    vecs.append((codes([6,3,1,2]+[0]*12), codes([4,4,2,2]+[0]*12), 127, 127, 0x41800000))  # 26.5
    vecs.append((codes([1]+[0]*15), codes([1]+[0]*15), 0, 0, 0x3F800000))           # bypass (huge neg scale)
    vecs.append((codes([1]+[0]*15), codes([1]+[0]*15), 254, 254, 0xC0000000))       # deep right shift
    vecs.append((codes([-12]*16), codes([12]*16), 127, 127, 0x00000001))            # subnormal acc
    vecs.append((codes([0]*16), codes([0]*16), 200, 200, 0x00400000))               # sop=0 dropped-bits bypass
    return vecs

def emit_vectors(out_path=None, n_random=EMIT_N_RANDOM, seed=EMIT_SEED):
    """Deterministically (re)generate the FP4 unit-test vector file. Caller
    is responsible for having already confirmed run_verification() passed -
    this function itself does not re-verify, to keep the two responsibilities
    (checking the model, emitting vectors from it) separate."""
    out_path = Path(out_path) if out_path is not None else DEFAULT_VECTORS_OUT
    rng = random.Random(seed)

    lines = []
    for a_nibs, b_nibs, sa, sb, acc in _directed_emit_vectors():
        lines.append(_pack_vector_line(a_nibs, b_nibs, sa, sb, acc))
    for _ in range(n_random):
        a = [rng.randrange(16) for _ in range(16)]
        b = [rng.randrange(16) for _ in range(16)]
        sa, sb = rng.randrange(255), rng.randrange(255)
        acc = (rng.randrange(2) << 31) | (rng.randrange(255) << 23) | rng.randrange(1 << 23)
        lines.append(_pack_vector_line(a, b, sa, sb, acc))

    out_path.parent.mkdir(parents=True, exist_ok=True)
    with open(out_path, "w") as f:
        f.write("\n".join(lines) + "\n")
    return len(lines), out_path


def main():
    ap = argparse.ArgumentParser(
        description="MXFP4 fused-engine golden model: verify, and optionally "
                    "(re)generate tb/fp4_unit_vectors.hex from a fixed seed."
    )
    ap.add_argument("--emit-vectors", action="store_true",
                     help="After a full passing verification, deterministically "
                          "regenerate the FP4 unit-test vector file. Writes "
                          "nothing if verification fails.")
    ap.add_argument("--vectors-out", default=None,
                     help=f"Override the output path (default: {DEFAULT_VECTORS_OUT}).")
    ap.add_argument("--n-random", type=int, default=EMIT_N_RANDOM,
                     help=f"Number of random vectors to emit (default: {EMIT_N_RANDOM}).")
    ap.add_argument("--seed", type=int, default=EMIT_SEED,
                     help=f"RNG seed for emitted vectors (default: 0x{EMIT_SEED:x}). "
                          "Only override deliberately - changing it changes the "
                          "committed .hex file's contents.")
    args = ap.parse_args()

    result = run_verification()
    print(f"\nchecked={result['checked']} fail={result['fail']} "
          f"corner_allowed={result['corner_allowed']} by tag: {result['corner_tags']}")
    for ex in result["corner_examples"]:
        print("  corner example:", ex[0], f"got {ex[1]:08x} exp {ex[2]:08x} exact={ex[3]}")

    if result["fail"]:
        print(f"\nVERIFICATION FAILED ({result['fail']} mismatches) - "
              f"aborting without writing any vector file.", file=sys.stderr)
        sys.exit(1)

    print("\nVerification PASSED.")

    if not args.emit_vectors:
        sys.exit(0)

    n, out_path = emit_vectors(args.vectors_out, n_random=args.n_random, seed=args.seed)
    print(f"Wrote {n} vectors to {out_path} (seed=0x{args.seed:x}).")
    sys.exit(0)


if __name__ == "__main__":
    main()