#!/usr/bin/env python3
# =============================================================================
# residue_scale_check.py
#
# PURPOSE
#   Settle the MXFINAL Option-1-vs-Option-2 decision with data, not intuition.
#
#   Option 1 (factor out Sa*Sw, cheapest, no runtime max) is EXACT and optimal
#   IFF the residue block scale never exceeds the primary block scale:
#
#           Sar_raw <= Sa_raw   for every block
#
#   If that holds, take Option 1. If it can be violated under this project's
#   quantization convention, the primary term could shift UP out of the
#   scale-free frame, and you need Option 2 (factor out max(Sa,Sar)*Sw:
#   a comparator + a swap mux) to stay exact.
#
#   This is NOT an RTL golden model. It touches none of the frame arithmetic.
#   It is a faithful software model of primary + residue MXFP4 quantization,
#   sweeping the property above across benign, heavy-tailed, and ADVERSARIAL
#   (clip-corner) block distributions.
#
# CONVENTION CAVEAT  <<< READ THIS >>>
#   The property is convention-sensitive. This script uses the STANDARD OCP MX
#   E8M0 rule: shared_exp = floor(log2(amax)) - emax_elem, emax_elem = 2 for
#   E2M1. If your quantizer picks the scale differently (round instead of
#   floor, a different emax offset, stochastic scale, etc.), REPLACE
#   `choose_scale_exp` below with your project's rule and re-run. Everything
#   else stays the same.
#
#   No external MX library on purpose: the residue scheme is project-specific,
#   and the scale rule must be visible and swappable, not hidden in a package.
#   Requires only numpy.
# =============================================================================

import numpy as np

BLOCK = 32                      # OCP MX scaling block (NOT MX_K=16, which is
                                # elements-per-64b-register; see mxdotp_pkg.sv)
E8M0_MIN, E8M0_MAX = -127, 127
EMAX_E2M1 = 2                   # largest E2M1 normal is 1.5 * 2^2 = 6.0

# E2M1 representable magnitudes, ascending. Alternating even/odd mantissa:
#   even (mantissa bit 0): 0, 1, 2, 4   ->  indices 0,2,4,6
#   odd  (mantissa bit 1): .5,1.5,3, 6  ->  indices 1,3,5,7
_MAGS = np.array([0.0, 0.5, 1.0, 1.5, 2.0, 3.0, 4.0, 6.0])


def quant_e2m1_mag(a):
    """Round nonneg magnitudes to nearest E2M1 magnitude, RNE, clip to 6.0."""
    a = np.clip(a, 0.0, 6.0)
    idx = np.clip(np.searchsorted(_MAGS, a), 1, 7)
    lo, hi = _MAGS[idx - 1], _MAGS[idx]
    dlo, dhi = a - lo, hi - a
    tie = np.isclose(dhi, dlo)
    # On a tie pick the even-mantissa neighbour. Exactly one of {idx-1, idx}
    # is even; idx even => hi is the even one, idx odd => lo is the even one.
    pick_hi = np.where(tie, (idx % 2 == 0), dhi < dlo)
    return np.where(pick_hi, hi, lo)


def choose_scale_exp(block):
    """
    Standard OCP MX E8M0 shared-scale exponent for the last axis.
    Uses frexp for an EXACT floor(log2(amax)) (no fp log2 edge errors).
        amax = mant * 2^e, mant in [0.5,1)  ->  floor(log2(amax)) = e - 1
        shared_exp = (e - 1) - EMAX_E2M1 = e - 3
    <<< SWAP THIS FUNCTION for the project's rule if it differs. >>>
    """
    amax = np.max(np.abs(block), axis=-1)
    _, e = np.frexp(amax)                       # e is int exponent, amax=0 -> e=0
    sexp = e - 1 - EMAX_E2M1
    sexp = np.where(amax > 0.0, sexp, E8M0_MIN)
    return np.clip(sexp, E8M0_MIN, E8M0_MAX).astype(np.int64)


def mxfp4_quantize(block):
    """Return (dequantized block, shared_exp) for MXFP4 primary/residue quant."""
    sexp = choose_scale_exp(block)
    scale = np.ldexp(1.0, sexp)[..., None]      # 2^sexp, exact
    mag = quant_e2m1_mag(np.abs(block) / scale)
    q = np.sign(block) * scale * mag
    return q, sexp


def check(name, blocks):
    """Quantize primary + residue, return per-block (sa, sar) and violation mask."""
    blocks = blocks.reshape(-1, BLOCK)
    q1, sa = mxfp4_quantize(blocks)
    resid = blocks - q1
    _, sar = mxfp4_quantize(resid)
    margin = sa - sar                            # want >= 0 (Sar <= Sa)
    viol = sar > sa
    n, nv = blocks.shape[0], int(viol.sum())
    mn = int(margin.min())
    print(f"  {name:<34} blocks={n:>8}  violations={nv:>6}  "
          f"min(sa-sar)={mn:>4}  "
          f"{'*** VIOLATION ***' if nv else 'ok'}")
    if nv:
        # show up to 3 offending raw blocks for inspection
        bad = np.where(viol)[0][:3]
        for b in bad:
            print(f"      sa={sa[b]:>4} sar={sar[b]:>4}  block={np.round(blocks[b],5)}")
    return margin, viol


def main():
    rng = np.random.default_rng(0xC0FFEE)
    N = 200_000                                  # blocks per benign distribution

    print(f"BLOCK={BLOCK}  EMAX_E2M1={EMAX_E2M1}  (edit choose_scale_exp to match "
          f"your quantizer)\n")
    print("Benign / realistic distributions")
    margins, viols = [], []

    def run(name, data):
        m, v = check(name, data)
        margins.append(m); viols.append(v)

    # Scale each block by a random power of two so the property is probed across
    # the full E8M0 exponent range, not just around 1.0.
    def scaled(base):
        b = base.reshape(-1, BLOCK)
        k = rng.integers(-60, 60, size=(b.shape[0], 1))
        return b * np.ldexp(1.0, k)

    run("gaussian",        scaled(rng.standard_normal((N, BLOCK))))
    run("uniform[-1,1]",   scaled(rng.uniform(-1, 1, (N, BLOCK))))
    run("laplace",         scaled(rng.laplace(0, 1, (N, BLOCK))))
    run("student-t(df=2)", scaled(rng.standard_t(2, (N, BLOCK))))
    run("lognormal",       scaled(rng.lognormal(0, 2, (N, BLOCK)) *
                                   rng.choice([-1, 1], (N, BLOCK))))

    print("\nAdversarial (built to break Sar <= Sa)")

    # (a) Clip corner: one element swept finely through [6.001, 7.999]*2^k so it
    #     clips to 6 and produces the largest possible residue (up to ~2*Sa).
    mult = np.linspace(6.001, 7.999, N)
    k = rng.integers(-60, 60, size=N)
    clip = rng.uniform(-0.4, 0.4, (N, BLOCK)) * np.ldexp(1.0, k)[:, None]
    clip[:, 0] = mult * np.ldexp(1.0, k)         # the clipped max element
    run("clip-corner (single max)", clip)

    # (b) Two clipped elements of opposite sign near the top of the band.
    two = rng.uniform(-0.4, 0.4, (N, BLOCK)) * np.ldexp(1.0, k)[:, None]
    two[:, 0] = 7.9 * np.ldexp(1.0, k)
    two[:, 1] = -7.6 * np.ldexp(1.0, k)
    run("clip-corner (two max)", two)

    # (c) Single large outlier, everything else near zero (biggest dynamic range).
    out = rng.uniform(-1e-6, 1e-6, (N, BLOCK)) * np.ldexp(1.0, k)[:, None]
    out[:, 0] = rng.uniform(6.001, 7.999, N) * np.ldexp(1.0, k)
    run("outlier + near-zero rest", out)

    # (d) All elements equal and just inside the clip band.
    eq = np.zeros((N, BLOCK))
    eq[:] = (rng.uniform(6.001, 7.999, N) * np.ldexp(1.0, k))[:, None]
    run("all-equal in clip band", eq)

    # (e) Bimodal: half the block huge-and-clipping, half tiny.
    bi = rng.uniform(-1e-4, 1e-4, (N, BLOCK)) * np.ldexp(1.0, k)[:, None]
    bi[:, :BLOCK // 2] = (rng.uniform(6.001, 7.999, (N, BLOCK // 2)) *
                          np.ldexp(1.0, k)[:, None])
    run("bimodal huge/tiny", bi)

    # -------- verdict --------
    allm = np.concatenate([m.ravel() for m in margins])
    allv = int(np.concatenate([v.ravel() for v in viols]).sum())
    total = allm.size
    print("\n" + "=" * 68)
    print(f"TOTAL blocks tested : {total:,}")
    print(f"Total violations    : {allv}")
    print(f"min(sa - sar)       : {int(allm.min())}   "
          f"(>=0 means Sar <= Sa everywhere)")
    # margin histogram
    vals, cnts = np.unique(np.clip(allm, -2, 8), return_counts=True)
    print("margin (sa-sar) histogram [clipped to -2..8]:")
    for v_, c_ in zip(vals, cnts):
        print(f"    {v_:>3} : {c_:>10,}  ({100*c_/total:5.1f}%)")
    print("=" * 68)
    if allv == 0:
        print("VERDICT: Sar <= Sa held on EVERY block, including adversarial "
              "clip corners.\n         -> Option 1 (factor out Sa*Sw) is safe "
              "and optimal. No runtime max needed.")
    else:
        print(f"VERDICT: {allv} block(s) had Sar > Sa.\n         -> Option 1 "
              "would shift the primary term out of frame on those.\n"
              "         Use Option 2 (factor out max(Sa,Sar)*Sw), OR confirm "
              "your\n         real quantizer clamps this and swap it into "
              "choose_scale_exp.")


if __name__ == "__main__":
    main()