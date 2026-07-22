#!/usr/bin/env python3
# =============================================================================
# residue_scale_check_mxlib.py
#
# Validates the MXFINAL Option-1-vs-Option-2 property against the ACTUAL
# reference implementation of OCP MX quantization (Microsoft's microxcaling
# library, https://github.com/microsoft/microxcaling), not a reimplementation.
#
# PROPERTY UNDER TEST
#   For every 32-element block: quantize to MXFP4 (E2M1), take the residual
#   (block - dequantized primary), quantize the residual to MXFP4 again, and
#   check the residual's shared E8M0 exponent (Sar) never exceeds the
#   primary's (Sa). If Sar <= Sa always, MXFINAL can factor out Sa*Sw alone
#   (Option 1, no runtime max needed). If it can be violated, Option 2
#   (factor out max(Sa,Sar)*Sw - one comparator + one mux) is required.
#
# WHY THIS LIBRARY, NOT A REIMPLEMENTATION
#   microxcaling is the de facto reference PyTorch emulation library for OCP
#   MX formats. Using its own `_quantize_mx` / `_shared_exponents` calls
#   directly means the block-scale convention (floor(log2(amax)) - emax,
#   RNE rounding, clip/overflow handling) is EXACTLY the reference's, not our
#   guess at it. This script calls those two functions completely unmodified
#   - no reimplemented quantization math anywhere below.
#
# ONE-TIME SETUP
#   git clone https://github.com/microsoft/microxcaling.git
#   cd microxcaling
#   pip install torch          # CPU-only is fine, no CUDA/build step needed -
#                               # _quantize_mx's custom_cuda path is never
#                               # taken below (custom_cuda=False, CPU tensors)
#   python residue_scale_check_mxlib.py     # run from the repo root so
#                                            # `import mx` resolves; or set
#                                            # PYTHONPATH to the repo root.
# =============================================================================

import torch
from mx.mx_ops import _quantize_mx, _shared_exponents
from mx.formats import _get_format_params

BLOCK        = 32            # true OCP MX scaling block (not MX_K=16 -
                              # see mxdotp_pkg.sv's MX_K comment for why
                              # those are different quantities)
ELEM_FORMAT  = "fp4_e2m1"
SCALE_BITS   = 8             # E8M0, matches this project's E8M0_BIAS=127
SEED         = 0xC0FFEE

_, _, EMAX, MAX_NORM, _ = _get_format_params(ELEM_FORMAT)
SCALE_EMAX = 2 ** (SCALE_BITS - 1) - 1   # 127, library's own E8M0 clamp


def quantize(x):
    """Unmodified library call - the exact reference MXFP4 quantizer."""
    return _quantize_mx(
        x, SCALE_BITS, ELEM_FORMAT, axes=[-1], block_size=BLOCK,
        round="even", flush_fp32_subnorms=False, custom_cuda=False,
    )


def shared_exp_of(x):
    """
    The block's E8M0 shared exponent, via the library's own
    `_shared_exponents` - the identical call `_quantize_mx` makes
    internally (ebits=0, then subtract emax, then the library's own
    scale_emax clamp). Not reimplemented: same two library calls.
    """
    se = _shared_exponents(x, method="max", axes=[-1], ebits=0) - EMAX
    se = se.clamp(min=-SCALE_EMAX, max=SCALE_EMAX)
    return se.squeeze(-1)


def check(name, blocks):
    blocks = blocks.reshape(-1, BLOCK)

    sa = shared_exp_of(blocks)                  # primary shared exponent
    q1 = quantize(blocks)                       # library's own MXFP4 quant

    resid = blocks - q1
    sar = shared_exp_of(resid)                  # residual shared exponent
    _ = quantize(resid)                         # quantize the residual again
                                                 # (per the proposed procedure;
                                                 # NaN here would itself be a
                                                 # library-side overflow flag)

    margin = sa - sar                           # want >= 0 everywhere
    viol = sar > sa
    n, nv = blocks.shape[0], int(viol.sum().item())
    mn = int(margin.min().item())
    print(f"  {name:<34} blocks={n:>8}  violations={nv:>6}  "
          f"min(sa-sar)={mn:>4}  {'*** VIOLATION ***' if nv else 'ok'}")
    if nv:
        bad = torch.where(viol)[0][:3]
        for b in bad:
            print(f"      sa={int(sa[b])} sar={int(sar[b])}  "
                  f"block={blocks[b].tolist()}")
    return margin, viol


def scaled(base, gen):
    """Rescale each block by a random power of two so the property is probed
    across the full E8M0 exponent range, not just around magnitude ~1."""
    b = base.reshape(-1, BLOCK)
    k = torch.randint(-60, 60, (b.shape[0], 1), generator=gen).float()
    return b * torch.pow(2.0, k)


def main():
    torch.manual_seed(SEED)
    gen = torch.Generator().manual_seed(SEED)
    N = 200_000

    print(f"Using microxcaling reference library.  elem_format={ELEM_FORMAT}  "
          f"BLOCK={BLOCK}  emax={EMAX}  max_norm={MAX_NORM}\n")

    print("Benign / realistic distributions")
    margins, viols = [], []

    def run(name, data):
        m, v = check(name, data)
        margins.append(m); viols.append(v)

    run("gaussian",      scaled(torch.randn(N, BLOCK, generator=gen), gen))
    run("uniform[-1,1]", scaled(torch.empty(N, BLOCK).uniform_(-1, 1), gen))
    run("laplace",       scaled(torch.distributions.Laplace(0., 1.)
                                 .sample((N, BLOCK)), gen))
    t2 = torch.distributions.StudentT(2.0).sample((N, BLOCK))
    run("student-t(df=2)", scaled(t2, gen))
    ln = torch.distributions.LogNormal(0., 2.).sample((N, BLOCK))
    sign = torch.randint(0, 2, (N, BLOCK), generator=gen).float() * 2 - 1
    run("lognormal", scaled(ln * sign, gen))

    print("\nAdversarial (built to break Sar <= Sa)")

    k = torch.randint(-60, 60, (N, 1)).float()
    scale = torch.pow(2.0, k)

    # (a) Clip corner: one element swept through [6.001, 7.999] (clips to 6.0,
    #     the largest possible per-element residual).
    clip = torch.empty(N, BLOCK).uniform_(-0.4, 0.4) * scale
    mult = torch.linspace(6.001, 7.999, N)
    clip[:, 0] = mult * scale.squeeze(-1)
    run("clip-corner (single max)", clip)

    # (b) Two clipped elements of opposite sign near the top of the band.
    two = torch.empty(N, BLOCK).uniform_(-0.4, 0.4) * scale
    two[:, 0] = 7.9 * scale.squeeze(-1)
    two[:, 1] = -7.6 * scale.squeeze(-1)
    run("clip-corner (two max)", two)

    # (c) Single large outlier, everything else near zero.
    out = torch.empty(N, BLOCK).uniform_(-1e-6, 1e-6) * scale
    out[:, 0] = torch.empty(N).uniform_(6.001, 7.999) * scale.squeeze(-1)
    run("outlier + near-zero rest", out)

    # (d) All elements equal and just inside the clip band.
    eq = torch.empty(N, BLOCK)
    eq[:] = (torch.empty(N, 1).uniform_(6.001, 7.999) * scale)
    run("all-equal in clip band", eq)

    # (e) Bimodal: half the block huge-and-clipping, half tiny.
    bi = torch.empty(N, BLOCK).uniform_(-1e-4, 1e-4) * scale
    bi[:, :BLOCK // 2] = torch.empty(N, BLOCK // 2).uniform_(6.001, 7.999) * scale
    run("bimodal huge/tiny", bi)

    # -------- verdict --------
    allm = torch.cat([m.reshape(-1) for m in margins])
    allv = int(torch.cat([v.reshape(-1) for v in viols]).sum().item())
    total = allm.numel()
    print("\n" + "=" * 68)
    print(f"TOTAL blocks tested : {total:,}")
    print(f"Total violations    : {allv}")
    print(f"min(sa - sar)       : {int(allm.min())}   "
          f"(>=0 means Sar <= Sa everywhere)")
    clipped = allm.clamp(-2, 8)
    vals, cnts = torch.unique(clipped, return_counts=True)
    print("margin (sa-sar) histogram [clipped to -2..8]:")
    for v_, c_ in zip(vals.tolist(), cnts.tolist()):
        print(f"    {int(v_):>3} : {c_:>10,}  ({100*c_/total:5.1f}%)")
    print("=" * 68)
    if allv == 0:
        print("VERDICT: Sar <= Sa held on EVERY block against the reference "
              "library's own\n         quantizer, including adversarial clip "
              "corners.\n         -> Option 1 (factor out Sa*Sw) is safe and "
              "optimal. No runtime max needed.")
    else:
        print(f"VERDICT: {allv} block(s) had Sar > Sa against the reference "
              "library.\n         -> Use Option 2 (factor out max(Sa,Sar)*Sw: "
              "one comparator + one mux).")


if __name__ == "__main__":
    main()