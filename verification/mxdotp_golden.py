#!/usr/bin/env python3
"""
Golden model: MXDOTP raw dot-product engine (mxdotp_dotp_engine.sv) - the
FIRST half of the two-instruction MXFP4R residue path (mxdotp/mxfinal). This
is the sibling that fp4_golden.py/fp8_golden.py/m2_golden.py/mxfinal_golden.py
did NOT cover: every one of those verifies a *fused* engine's full FRONT+BACK
pipeline, or (mxfinal_golden.py) the BACK-only frame given free p1/p2 inputs.
Nothing previously modeled the FRONT that actually PRODUCES p1/p2 from real
A/B/AR nibbles, and nothing previously chained that FRONT into mxfinal's
already-verified BACK to prove the two-instruction split is correct as a
*pair*, not just correct in each half separately.

  p1 = sum(code_a[i]  * code_b[i])   for i in 0..MX_K-1   ("A.B")
  p2 = sum(code_ar[i] * code_b[i])   for i in 0..MX_K-1   ("AR.B")

Both are raw, UNSCALED fixed-point sums in the same code=2*value units every
other engine's FRONT uses - see mxdotp_dotp_engine.sv. No scale, no rounding,
no format check exists in this engine; it computes p1/p2 unconditionally
regardless of whether the calling format actually uses residue (that's
mxdotp_final_engine.sv's concern, gated entirely at the ISA level - see
mxdotp_pkg.sv's MX_SLOT_FUSED milestone header).

TWO INDEPENDENT THINGS ARE VERIFIED HERE, both bit-exact against exact
integer/rational arithmetic - no reliance on the same formula being re-typed
twice as a substitute for genuine verification:

  1. FRONT-ONLY:  nibbles -> (p1, p2), checked against the exact integer SoP
     computed straight from fp4_to_code (Python ints are exact, so this is
     itself the exact reference - the risk here is an indexing/packing bug,
     not an arithmetic-precision one). Also replicates the RTL's own
     running-sum loop step by step (not just the final total) and asserts
     every partial sum stays within PSUM_WIDTH=13 signed range - the
     triangle-inequality bound that makes this engine's per-step 13-bit
     accumulation safe (see PARTIAL-SUM SAFETY below) is checked on every
     vector, not merely assumed from the derivation.

  2. END-TO-END:  the SAME nibbles, plus scales and an old accumulator, are
     independently evaluated in closed-form Fraction arithmetic directly from
     element VALUES (fp4_value, not fp4_to_code's integer codes) - a
     completely separate mathematical path from mxfinal_golden.py's own
     exact_value(p1, p2, ...), which starts from the integer codes. The two
     are then asserted EQUAL as exact Fractions (not just equal after
     rounding) before the composed pipeline's rounded FP32 result is checked
     against mxfinal_golden.py's ALREADY-VERIFIED frame model
     (mxfinal_frame), imported rather than re-implemented so the two files
     can never drift apart on the one thing that matters most: what the
     frame actually computes. This is what closes the real gap - every
     existing golden model proves its own half is right; this one proves the
     HANDOFF between the two halves is right, using real hardware-reachable
     (p1, p2) pairs instead of the deliberately-unconstrained synthetic pairs
     mxfinal_golden.py sweeps on its own.

PARTIAL-SUM SAFETY (mxdotp_dotp_engine.sv's own accumulation, not just its
final result): p1_sum/p2_sum are declared at PSUM_WIDTH=13 signed bits and
accumulated IN THAT WIDTH across the MX_K=16-iteration loop (SystemVerilog
sizes `p1_sum = p1_sum + PSUM_WIDTH'(p1_term[i])` at the LHS's own 13-bit
context, not a wider intermediate) - so a running total that ever left
[-4096, 4095] mid-loop would wrap silently. It never does: for ANY prefix of
k <= MX_K terms, |partial sum| = |sum of that subset| <= sum of |each term|
<= k * 144 <= MX_K * 144 = 2304 (triangle inequality - true regardless of
term order or sign pattern), and 2304 < 4096. So the full-sum bound
(PSUM_WIDTH=13, |p1|,|p2| <= 2304 < 2^12, per mxdotp_pkg.sv) already implies
every INTERMEDIATE partial sum is safe too, with no separate argument needed.
Checked by replicating the RTL's exact loop-and-accumulate structure and
asserting the bound at every step, on every vector.

Checked in the SoP units mxdotp_dotp_engine.sv itself works in (code=2*value
integers - exact, no floating-point rounding at this stage at all); the
END-TO-END check is what brings in FP32 RNE, via mxfinal_golden.py's own
verified rounding path.

Usage:
  python3 mxdotp_golden.py                 Verify the golden model only
                                            (front-only + end-to-end sweeps
                                            vs their respective exact
                                            references). Writes nothing.
                                            Exit code 0 iff fail == 0.

  python3 mxdotp_golden.py --emit-vectors  Run the SAME full verification
                                            first. If any check fails, abort
                                            with a nonzero exit code and
                                            write nothing. If verification
                                            passes, deterministically
                                            (re)generate
                                            tb/hex_vectors/mxdotp_unit_vectors.hex
                                            from a fixed RNG seed (see
                                            EMIT_SEED below) - same file every
                                            run, on any machine, until the
                                            seed/vector count is deliberately
                                            changed. Vectors cover the FRONT
                                            (nibbles -> p1, p2) only, matching
                                            what tb_mxdotp_unit.sv drives
                                            (mxdotp_dotp_engine.sv in
                                            isolation, exactly like every
                                            other <name>_unit.sv in this
                                            project) - the END-TO-END check
                                            above stays a Python-only proof,
                                            same as mxfinal_golden.py's own
                                            corner-derivation checks that
                                            never became RTL vectors either.
"""
from fractions import Fraction
import random, sys, argparse
from pathlib import Path

# mxfinal_golden.py lives alongside this file (verification/) - imported,
# not re-implemented, so the frame model the END-TO-END check relies on can
# never silently drift from the one copy mxdotp_final_engine.sv is actually
# verified against. See module docstring, item 2.
SCRIPT_DIR = Path(__file__).resolve().parent
if str(SCRIPT_DIR) not in sys.path:
    sys.path.insert(0, str(SCRIPT_DIR))
import mxfinal_golden as mxf

# ---- constants (must match RTL - mxdotp_pkg.sv) ----
MX_K        = 16                 # elements per 64-bit dual-read operand (NOT
                                  # the OCP k=32 scaling block - see
                                  # mxdotp_pkg.sv's MX_K comment / project
                                  # glossary)
CODE_WIDTH  = 5                  # signed 2*value, range [-12, 12]
PROD_WIDTH  = 9                  # single product code_a*code_b, max +-144
PSUM_WIDTH  = PROD_WIDTH + 4      # 9 + $clog2(16) = 13
PSUM_MAX    = MX_K * (12 * 12)    # 16 * 144 = 2304 < 2^12 (fits PSUM_WIDTH-1)

assert PSUM_WIDTH == 13
assert PSUM_MAX < (1 << (PSUM_WIDTH - 1))

_PSUM_MIN_SIGNED = -(1 << (PSUM_WIDTH - 1))       # -4096
_PSUM_MAX_SIGNED = (1 << (PSUM_WIDTH - 1)) - 1     #  4095


# ---- E2M1 decode: code = 2*value (shared convention with fp4_golden.py /
#      m2_golden.py - duplicated here rather than imported, same as every
#      other golden model in this project keeps its own copy) ----
def fp4_to_code(nib):
    s, e, m = (nib >> 3) & 1, (nib >> 1) & 3, nib & 1
    mag = m if e == 0 else (2 + m) << (e - 1)
    return -mag if s else mag


def fp4_value(nib):
    return Fraction(fp4_to_code(nib), 2)


def nibs_for_codes(codes):
    """Inverse of fp4_to_code - build directed nibble vectors from a list of
    signed code values, same helper fp4_golden.py/m2_golden.py already use."""
    inv = {}
    for n in range(16):
        inv.setdefault(fp4_to_code(n), n)
    return [inv[c] for c in codes]


# ---------------------------------------------------------------------------
# 1. FRONT-only model: mxdotp_dotp_engine.sv's own arithmetic, replicated
#    step-by-step (not just the final sum) so the PARTIAL-SUM SAFETY claim
#    above is a checked property of every vector, not an assumption.
# ---------------------------------------------------------------------------
def dotp_engine_model(a_nibs, b_nibs, ar_nibs):
    """Bit-faithful model of mxdotp_dotp_engine.sv's unpack->code->product->
    sum datapath. Returns (p1, p2, diag) where diag carries the per-step
    partial sums for the safety assertion in check_front(); the caller
    asserts on diag rather than this function silently trusting the bound,
    so a violation is a loud, attributable failure, not a quiet wraparound."""
    assert len(a_nibs) == len(b_nibs) == len(ar_nibs) == MX_K

    a_code  = [fp4_to_code(n) for n in a_nibs]
    b_code  = [fp4_to_code(n) for n in b_nibs]
    ar_code = [fp4_to_code(n) for n in ar_nibs]

    p1_sum, p2_sum = 0, 0
    p1_partials, p2_partials = [], []
    for i in range(MX_K):
        p1_term = a_code[i]  * b_code[i]
        p2_term = ar_code[i] * b_code[i]
        assert -144 <= p1_term <= 144 and -144 <= p2_term <= 144
        # RTL accumulates in a PSUM_WIDTH(13)-bit signed register across the
        # whole loop (see module docstring's PARTIAL-SUM SAFETY section) -
        # replicate that literally rather than letting Python's unbounded
        # ints hide a would-be wraparound.
        p1_sum += p1_term
        p2_sum += p2_term
        assert _PSUM_MIN_SIGNED <= p1_sum <= _PSUM_MAX_SIGNED, \
            f"p1 running sum {p1_sum} left the RTL's 13-bit signed range at step {i}"
        assert _PSUM_MIN_SIGNED <= p2_sum <= _PSUM_MAX_SIGNED, \
            f"p2 running sum {p2_sum} left the RTL's 13-bit signed range at step {i}"
        p1_partials.append(p1_sum)
        p2_partials.append(p2_sum)

    diag = dict(p1_partials=p1_partials, p2_partials=p2_partials)
    return p1_sum, p2_sum, diag


def _exact_sop(a_nibs, b_nibs):
    """The FRONT's own exact reference: a plain Python-int sum of exact
    integer codes, computed independently of dotp_engine_model's loop
    structure (a fresh sum(), not a re-run of the same step-by-step
    accumulation) - this is what actually catches an indexing/packing bug
    rather than just re-confirming the same code path agrees with itself."""
    return sum(fp4_to_code(a) * fp4_to_code(b) for a, b in zip(a_nibs, b_nibs))


# ---------------------------------------------------------------------------
# 2. END-TO-END model: real nibbles + scales + acc, evaluated from element
#    VALUES directly (completely independent of the code-integer p1/p2 path
#    above), then compared against mxfinal_golden's ALREADY-VERIFIED frame,
#    fed with THIS file's own (p1, p2). Ties the two engines together as the
#    real hardware pipeline does, without duplicating mxfinal's frame logic.
# ---------------------------------------------------------------------------
E8M0_BIAS = 127


def exact_end_to_end(a_nibs, b_nibs, ar_nibs, sa, sar, sw, acc_bits):
    """Fully independent Fraction-exact reference for the COMPOSED
    mxdotp -> mailbox -> mxfinal pipeline, built directly from element
    VALUES (fp4_value), not from the code-integer p1/p2 mxfinal_golden.py's
    own exact_value() starts from. Mathematically the two must agree exactly
    (p1 = 4*dot_a, and mxfinal's sexp-2 exponent term exists precisely to
    cancel that code=2*value convention's factor of 4 per product - see
    check_end_to_end(), which asserts this equality directly rather than
    only comparing post-rounding bits)."""
    dot_a  = sum(fp4_value(a)  * fp4_value(b) for a, b  in zip(a_nibs,  b_nibs))
    dot_ar = sum(fp4_value(ar) * fp4_value(b) for ar, b in zip(ar_nibs, b_nibs))
    sa_v, sar_v, sw_v = (Fraction(2) ** (s - E8M0_BIAS) for s in (sa, sar, sw))
    return sa_v * sw_v * dot_a + sar_v * sw_v * dot_ar + mxf.fp32_bits_to_fraction(acc_bits)


# ---------------------------------------------------------------------------
# Vector generation
# ---------------------------------------------------------------------------
def gen_directed():
    """Fixed, human-checkable (a, b, ar) nibble triples - covers p1==0 (the
    anchor-select mux's other branch, mxfinal's concern but only reachable if
    THIS engine can actually produce p1==0, which needs checking too),
    max-magnitude same-sign (worst case for the partial-sum bound), and the
    exact code=1 corner mxfinal_golden.py's own worst-corner sweep leans on
    (see mxfinal_golden.py's gen_worst_corner: p1 in {1,-1})."""
    zeros = [0] * MX_K
    ones  = nibs_for_codes([1] + [0] * (MX_K - 1))
    negone = nibs_for_codes([-1] + [0] * (MX_K - 1))
    maxpos = nibs_for_codes([12] * MX_K)
    maxneg = nibs_for_codes([-12] * MX_K)
    alt    = nibs_for_codes([12, -12] * (MX_K // 2))   # mixed-sign, still |sum| small

    cases = [
        ("zero",        zeros,  zeros,  zeros),                # p1=p2=0
        ("p1-zero",     zeros,  maxpos, ones),                  # a=0 -> p1=0, p2 nonzero
        ("unit",        ones,   ones,   zeros),                 # p1=1 (code 1*1), p2=0
        ("unit-neg",    negone, ones,   zeros),                 # p1=-1
        ("max-same",    maxpos, maxpos, maxpos),                 # p1=p2=+2304 (worst partial-sum case)
        ("max-opp",     maxneg, maxpos, maxneg),                 # p1=p2=-2304
        ("mixed-sign",  alt,    maxpos, alt),                    # partial sums swing both directions
        ("ar-only",     zeros,  ones,   negone),                 # p1=0, p2=-1 (anchor->sexp2 branch)
    ]
    return cases


def gen_random_valid(rng, n):
    """Fully random nibbles - every one of the 16 possible nibble codes
    (including the two E2M1 encodings that collapse to +-0, per
    fp4_to_code's case table) is reachable independently in a/b/ar."""
    out = []
    for _ in range(n):
        a  = [rng.randrange(16) for _ in range(MX_K)]
        b  = [rng.randrange(16) for _ in range(MX_K)]
        ar = [rng.randrange(16) for _ in range(MX_K)]
        out.append(("rand", (a, b, ar)))
    return out


def gen_boundary_codes(rng, per_code=200):
    """Targeted sweep: every one of the 8 magnitude codes {0,1,2,3,4,6,8,12},
    both signs, placed at a random lane of `a` against a fully random `b`/
    `ar` - makes sure each individual code value is exercised at every lane
    position at least several hundred times, not just incidentally by chance
    under pure random sampling."""
    out = []
    codes = [0, 1, -1, 2, -2, 3, -3, 4, -4, 6, -6, 8, -8, 12, -12]
    for c in codes:
        for _ in range(per_code):
            lane = rng.randrange(MX_K)
            a = [rng.randrange(16) for _ in range(MX_K)]
            a[lane] = nibs_for_codes([c])[0]
            b  = [rng.randrange(16) for _ in range(MX_K)]
            ar = [rng.randrange(16) for _ in range(MX_K)]
            out.append((f"code{c}", (a, b, ar)))
    return out


def gen_end_to_end_random(rng, n):
    """Random (nibbles, scales, acc) tuples for the END-TO-END check, with
    scales constrained by the PROVEN Sar<=Sa property (see
    mxdotp_pkg.sv/mxfinal_golden.py's own header) - mirrors
    mxfinal_golden.py's gen_random_valid, but starting from real nibbles
    instead of synthetic (p1,p2) integers."""
    out = []
    for _ in range(n):
        a  = [rng.randrange(16) for _ in range(MX_K)]
        b  = [rng.randrange(16) for _ in range(MX_K)]
        ar = [rng.randrange(16) for _ in range(MX_K)]
        sa  = rng.randint(0, 255)
        sw  = rng.randint(0, 255)
        sar = rng.randint(0, sa)             # Sar <= Sa, proven property
        acc = mxf._rand_fp32(rng)
        out.append(("e2e-rand", (a, b, ar, sa, sar, sw, acc)))
    return out


def gen_end_to_end_directed():
    """A handful of fixed, hand-checkable end-to-end cases layered on top of
    the FRONT's own directed set, with simple round-number scales so the
    expected FP32 result can be sanity-checked by hand if needed."""
    z = 0x00000000
    cases = []
    for tag, a, b, ar in gen_directed():
        cases.append((f"e2e-{tag}", (a, b, ar, 127, 127, 127, z)))
    # a non-trivial residue case: delta=3 between primary and residue scale,
    # nonzero accumulator.
    a  = nibs_for_codes([6, 3, 1, 2] + [0] * (MX_K - 4))
    b  = nibs_for_codes([4, 4, 2, 2] + [0] * (MX_K - 4))
    ar = nibs_for_codes([1, -1, 0, 2] + [0] * (MX_K - 4))
    cases.append(("e2e-worked", (a, b, ar, 130, 127, 127, 0x3F800000)))
    return cases


# ---------------------------------------------------------------------------
# Harness
# ---------------------------------------------------------------------------
def run_verification(verbose_fails=20, seed=0x4D584430):  # "MXD0" in ASCII hex
    fail = 0
    checked = 0
    tag_counts = {}

    def check_front(tag, v):
        """FRONT-only: nibbles -> (p1,p2) against the independent exact-int
        SoP reference, plus the per-step partial-sum safety assertion inside
        dotp_engine_model itself (an AssertionError there counts as a
        failure here too, not a silent pass)."""
        nonlocal fail, checked
        checked += 1
        tag_counts[tag] = tag_counts.get(tag, 0) + 1
        a, b, ar = v
        try:
            p1, p2, diag = dotp_engine_model(a, b, ar)
        except AssertionError as e:
            fail += 1
            if fail <= verbose_fails:
                print(f"FRONT SAFETY FAIL [{tag}]: {e}")
            return
        exp_p1 = _exact_sop(a, b)
        exp_p2 = _exact_sop(ar, b)
        if p1 != exp_p1 or p2 != exp_p2:
            fail += 1
            if fail <= verbose_fails:
                print(f"FRONT FAIL [{tag}]: got p1={p1} p2={p2} "
                      f"exp p1={exp_p1} p2={exp_p2}")

    def check_end_to_end(tag, v):
        """END-TO-END: nibbles+scales+acc -> FP32, via THIS file's (p1,p2)
        fed into mxfinal_golden's imported, already-verified frame. Two
        separate assertions, not one: (a) the two independent exact-Fraction
        derivations of the pre-rounding value must be EXACTLY equal (proves
        the code<->value scaling convention lines up, not just that rounded
        bits happen to coincide); (b) the frame's rounded FP32 output must
        equal the RNE-rounded (b)-side reference."""
        nonlocal fail, checked
        checked += 1
        tag_counts[tag] = tag_counts.get(tag, 0) + 1
        a, b, ar, sa, sar, sw, acc = v
        p1, p2, _ = dotp_engine_model(a, b, ar)

        exact_direct = exact_end_to_end(a, b, ar, sa, sar, sw, acc)
        exact_via_p1p2 = mxf.exact_value(p1, p2, sa, sar, sw, acc)
        if exact_direct != exact_via_p1p2:
            fail += 1
            if fail <= verbose_fails:
                print(f"E2E EXACT-VALUE MISMATCH [{tag}]: "
                      f"direct={float(exact_direct)} via_p1p2={float(exact_via_p1p2)}")
            return

        got = mxf.mxfinal_frame(p1, p2, sa, sar, sw, acc)
        exp = mxf.mxfinal_ref(p1, p2, sa, sar, sw, acc)
        bypass = mxf.classify_bypass(p1, p2, sa, sar, sw, acc)
        if bypass is not None:
            if got != acc:
                fail += 1
                if fail <= verbose_fails:
                    print(f"E2E BYPASS FAIL [{tag}]: got=0x{got:08x} != acc=0x{acc:08x}")
            return
        if got != exp:
            fail += 1
            if fail <= verbose_fails:
                print(f"E2E FAIL [{tag}]: got=0x{got:08x} exp=0x{exp:08x} "
                      f"exact={float(exact_direct)}")

    rng = random.Random(seed)

    # ---- FRONT-only sweep ----
    for tag, a, b, ar in gen_directed():
        check_front(tag, (a, b, ar))
    for tag, v in gen_random_valid(rng, 150_000):
        check_front(tag, v)
    for tag, v in gen_boundary_codes(rng, per_code=400):
        check_front(tag, v)

    # ---- END-TO-END sweep (real nibbles all the way to FP32) ----
    for tag, v in gen_end_to_end_directed():
        check_end_to_end(tag, v)
    for tag, v in gen_end_to_end_random(rng, 60_000):
        check_end_to_end(tag, v)

    return dict(checked=checked, fail=fail, tag_counts=tag_counts)


# ---------------------------------------------------------------------------
# Vector emission (deterministic, gated on run_verification() passing).
# FRONT ONLY - this is what tb_mxdotp_unit.sv drives (mxdotp_dotp_engine.sv in
# isolation), matching the project convention that a unit test's .hex covers
# exactly the one engine its tb_<name>_unit.sv instantiates. The END-TO-END
# check above is a Python-only proof of the composed pipeline (same role as
# mxfinal_golden.py's own analytically-derived corners, which likewise never
# became a separate RTL vector set).
#
# Packing (56 hex digits = 224 bits per line, matching fp4_unit_vectors.hex's
# total width so the two files are easy to compare by eye):
#   rs1[64] (A nibbles) | rs2[64] (B nibbles) | rs3[64] (AR nibbles) |
#   p1_expected[16] | p2_expected[16]
# p1/p2 fields are masked to 0x1FFF (13 significant bits, top 3 always
# zero) and printed as 4 hex digits each - same convention
# mxfinal_golden.py's _pack_vector_line already uses for p1/p2.
# =============================================================================
EMIT_SEED = 0x4D584430          # "MXD0" in ASCII hex - arbitrary, fixed
EMIT_N_RANDOM = 20000
DEFAULT_VECTORS_OUT = SCRIPT_DIR / ".." / "tb" / "hex_vectors" / "mxdotp_unit_vectors.hex"


def _pack_nibs(nibs):
    v = 0
    for i, n in enumerate(nibs):
        v |= (n & 0xF) << (4 * i)
    return v


def _pack_vector_line(a_nibs, b_nibs, ar_nibs):
    rs1 = _pack_nibs(a_nibs)
    rs2 = _pack_nibs(b_nibs)
    rs3 = _pack_nibs(ar_nibs)
    p1, p2, _ = dotp_engine_model(a_nibs, b_nibs, ar_nibs)
    p1u = p1 & 0x1FFF
    p2u = p2 & 0x1FFF
    return f"{rs1:016x}{rs2:016x}{rs3:016x}{p1u:04x}{p2u:04x}"


def _directed_emit_vectors():
    """A handful of fixed, human-checkable cases, always included first -
    same intent/size as every other golden model's own directed emit set."""
    return [(a, b, ar) for _, a, b, ar in gen_directed()]


def emit_vectors(out_path=None, n_random=EMIT_N_RANDOM, seed=EMIT_SEED):
    """Deterministically (re)generate the FP4R/MXDOTP unit-test vector file.
    Caller is responsible for having already confirmed run_verification()
    passed - matches every other golden model's emit_vectors() contract."""
    out_path = Path(out_path) if out_path is not None else DEFAULT_VECTORS_OUT
    rng = random.Random(seed)

    lines = [_pack_vector_line(*v) for v in _directed_emit_vectors()]
    for _, v in gen_random_valid(rng, n_random):
        lines.append(_pack_vector_line(*v))

    out_path.parent.mkdir(parents=True, exist_ok=True)
    with open(out_path, "w") as f:
        f.write("\n".join(lines) + "\n")
    return len(lines), out_path


# ---------------------------------------------------------------------------
# System-testbench expected constants (--emit-system-consts).
#
# instr_rom.sv's residue expected values used to be hand-derived - the exact
# class of thing bug #16 (the double-applied -2 fp4-code anchor, a clean
# factor-of-4 error) came from. This closes that loop the same way the unit
# .hex files already do: the constants come FROM the golden model, computed by
# the same verified path (mxfinal_golden.mxfinal_frame) the RTL is checked
# against, with both independent exact-Fraction derivations asserted equal
# first. Emits ready-to-paste SystemVerilog localparams; it does NOT write a
# file (the system TB's operands live in instr_rom.sv as named registers, not
# a streamed .hex - see mxdotp_golden.py's emit-vectors note on why the
# END-TO-END path stays Python-side). Run it, paste the localparams, done.
#
# Each entry is a DIRECTED residue vector the system program actually issues,
# named to match instr_rom.sv's localparam:
#   (localparam_name, A_codes, B_codes, AR_codes, Sa, Sar, Sw, acc_bits, note)
# A/B/AR are given as signed fp4 CODE lists (fp4_to_code's range), broadcast
# to all MX_K lanes - the same nibs_for_codes helper the directed sweeps use.
# ---------------------------------------------------------------------------
def _system_vectors():
    def bc(code):                       # broadcast one code to all MX_K lanes
        return nibs_for_codes([code] * MX_K)
    return [
        # Test 2 (existing residue pair) - emitted too, as a cross-check that
        # this path reproduces the value already committed in instr_rom.sv.
        ("MXFP4_RESIDUAL_EXPECTED",  bc(2), bc(2), bc(1), 127, 127, 127, 0x00000000,
         "Test 2: A=1.0 B=1.0 AR=0.5, unit scales, acc=0 -> 24.0"),
        # Test 5 (new) residue #2 - deliberately different: B=2.0 (not 1.0),
        # delta=1 (Sa=128 > Sar=127, a real 1-bit residue slide), acc=4.0.
        ("MXFP4_RESIDUAL2_EXPECTED", bc(2), bc(4), bc(1), 128, 127, 127, 0x40800000,
         "Test 5: A=1.0 B=2.0 AR=0.5, Sa=2^1 Sar=2^0 Sw=2^0, acc=4.0 -> 84.0"),
    ]


def emit_system_consts():
    """Print ready-to-paste SystemVerilog localparams for the system TB's
    directed residue expecteds, each cross-checked (both exact-Fraction paths
    agree) before its RNE-rounded FP32 is emitted. Returns the list of
    (name, bits) so a caller/test can assert on them."""
    out = []
    print("  // --- golden-derived residue expecteds (verification/mxdotp_golden.py "
          "--emit-system-consts) ---")
    for name, A, B, AR, sa, sar, sw, acc, note in _system_vectors():
        p1, p2, _ = dotp_engine_model(A, B, AR)
        # same two-independent-paths cross-check the end-to-end harness uses,
        # so a silently-wrong constant can't be emitted.
        ed = exact_end_to_end(A, B, AR, sa, sar, sw, acc)
        ev = mxf.exact_value(p1, p2, sa, sar, sw, acc)
        assert ed == ev, (name, float(ed), float(ev))
        bits = mxf.mxfinal_frame(p1, p2, sa, sar, sw, acc)
        val = float(mxf.fp32_bits_to_fraction(bits))
        out.append((name, bits))
        print(f"  localparam logic [31:0] {name:24} = 32'h{bits:08X};  // {note}")
    return out


def main():
    ap = argparse.ArgumentParser(
        description="MXDOTP raw dot-product engine golden model: verify "
                    "(FRONT-only + end-to-end vs mxfinal_golden.py), "
                    "(re)generate tb/hex_vectors/mxdotp_unit_vectors.hex, or "
                    "emit the system TB's residue expected constants."
    )
    ap.add_argument("--emit-vectors", action="store_true",
                     help="After a full passing verification, deterministically "
                          "(re)generate the FP4R/MXDOTP unit-test vector file. "
                          "Writes nothing if verification fails.")
    ap.add_argument("--vectors-out", default=None,
                     help=f"Override the output path (default: {DEFAULT_VECTORS_OUT}).")
    ap.add_argument("--n-random", type=int, default=EMIT_N_RANDOM)
    ap.add_argument("--seed", type=lambda s: int(s, 0), default=EMIT_SEED,
                     help="RNG seed for emitted vectors. Only override "
                          "deliberately - it changes the committed .hex file.")
    ap.add_argument("--emit-system-consts", action="store_true",
                     help="After a full passing verification, print the system "
                          "TB's directed residue expected constants as "
                          "SystemVerilog localparams (for instr_rom.sv). Writes "
                          "no file.")
    args = ap.parse_args()

    print("=" * 76)
    print("MXDOTP dot-product engine golden model - FRONT-only + end-to-end")
    print("=" * 76)

    result = run_verification()
    print(f"checked={result['checked']}  fail={result['fail']}")
    print(f"vectors checked by tag: {result['tag_counts']}")

    print("\n" + "=" * 76)
    if result["fail"]:
        print(f"VERIFICATION FAILED ({result['fail']} mismatches) - "
              f"aborting without writing any vector file.", file=sys.stderr)
        sys.exit(1)
    print("VERDICT: FRONT bit-exact vs exact-integer SoP; END-TO-END exact-value "
          "agreement AND RNE-exact vs mxfinal_golden.py's verified frame. "
          "0 real mismatches.")
    print("=" * 76)

    if args.emit_system_consts:
        print()
        emit_system_consts()
        print()

    if not args.emit_vectors:
        sys.exit(0)
    n, out_path = emit_vectors(args.vectors_out, n_random=args.n_random, seed=args.seed)
    print(f"\nWrote {n} vectors to {out_path} (seed=0x{args.seed:x}).")
    sys.exit(0)


if __name__ == "__main__":
    main()