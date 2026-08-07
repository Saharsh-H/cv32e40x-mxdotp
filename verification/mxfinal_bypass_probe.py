#!/usr/bin/env python3
"""
MXFINAL acc-dominates bypass: binade-boundary margin probe.

Investigative script (NOT part of the regular golden-model suites). Run it in
the same directory as mxfinal_golden.py:

    python3 mxf_bypass_binade_probe.py

What it checks
--------------
The acc-dominates bypass fires when acc_shift > MXF_MAX_ACC_SHIFT and returns
old_acc verbatim. That is only correct if the product pair cannot move the
accumulator by half an ulp under RNE.

At the minimum bypassing shift s = MAX_ACC_SHIFT+1 the accumulator's own ulp is
2^s frame units, so half-ulp *within* the binade is 2^(s-1). But when the
accumulator sits exactly on a binade boundary (mantissa == 0) and the products
push toward zero, the relevant spacing is the one BELOW that boundary: ulp is
2^(s-1) and half-ulp is 2^(s-2). The three sibling frames in mxdotp_pkg.sv all
state their margin against 2^(s-2):

    MXFP4    2^12 = 4096   vs |SoP| <=  2304                 -> 1.78x  OK
    M2XFP4   2^17 = 131072 vs |SoP| <= 75264                 -> 1.74x  OK
    MXFP8    2^69          vs |SoP| <  392*2^60 = 2^68.61    -> 1.31x  OK
    MXFINAL  2^12 = 4096   vs |p1|+|p2| <= 4608              -> 0.89x  FAILS

MXFINAL's own header instead compares 4608 against 2^13 = 8192, i.e. the
within-binade half-ulp, which is why it reports the same 1.78x as MXFP4 despite
having twice the resident bound.

mxfinal_golden.py's harness cannot see this: its per-vector bypass proof tests
|exact - acc| < ulp/2 using ulp = 2^(E-127-23), the accumulator's own binade.
"""

from fractions import Fraction
import mxfinal_golden as G


def vec(m, p1, p2, sa=92, sw=127, neg_acc=False):
    """Build a vector with acc = +/-2^m and acc_shift == MAX_ACC_SHIFT+1.

    acc_shift = E + is_sub - ACC_SHIFT_CONST - anchor, anchor = sa + sw - 254.
    """
    E = m + 127
    acc = ((1 << 31) if neg_acc else 0) | (E << 23)     # mantissa == 0
    target = G.MAX_ACC_SHIFT + 1
    anchor = E - G.ACC_SHIFT_CONST - target
    sw = anchor + 254 - sa
    return (p1, p2, sa, sa, sw, acc)                    # sar == sa  -> delta 0


def report(v):
    got = G.mxfinal_frame(*v)
    ref = G.mxfinal_ref(*v)
    exact = G.exact_value(*v)
    accv = G.fp32_bits_to_fraction(v[5])
    E = (v[5] >> 23) & 0xFF
    ulp = Fraction(2) ** (max(E, 1) - 127 - 23)
    print(f"  p1={v[0]:+6d} p2={v[1]:+6d} acc=0x{v[5]:08x}  "
          f"got=0x{got:08x} ref=0x{ref:08x}  {'MISMATCH' if got != ref else 'match'}")
    print(f"    |exact-acc| = {float(abs(exact-accv)):.6e}   "
          f"harness bound ulp/2 = {float(ulp/2):.6e}   "
          f"true bound ulp/4 = {float(ulp/4):.6e}")


def main():
    print(f"MXF_MAX_ACC_SHIFT = {G.MAX_ACC_SHIFT}, REMAIN = {G.REMAIN}\n")

    print("Directed counterexample (acc on a binade boundary, delta = 0):")
    report(vec(0, -2304, -2304))
    report(vec(0, +2304, +2304, neg_acc=True))
    print("\nControl - same shape, resident pair inside the 2^12 bound:")
    report(vec(0, -2048, -2048))

    print("\nSweep: acc = +/-2^m, mantissa 0, acc_shift = MAX+1, delta = 0")
    for max_shift, label in ((G.MAX_ACC_SHIFT, "as shipped (13)"),
                             (G.MAX_ACC_SHIFT + 1, "patched (14)")):
        G.MAX_ACC_SHIFT = max_shift
        bad = tot = 0
        for m in range(-110, 110):
            for p1 in range(-2304, 2305, 64):
                for p2 in range(-2304, 2305, 64):
                    for neg in (False, True):
                        v = vec(m, p1, p2, neg_acc=neg)
                        if G.classify_bypass(*v) != "acc_dominates":
                            continue
                        tot += 1
                        if G.mxfinal_frame(*v) != G.mxfinal_ref(*v):
                            bad += 1
        print(f"  MAX_ACC_SHIFT = {max_shift:2d} [{label}]: "
              f"{bad} / {tot} bypassed vectors disagree with the exact reference")


if __name__ == "__main__":
    main()