//==============================================================================
// File    : mxdotp_pkg.sv
// Project : MXDOTP XIF Coprocessor
//------------------------------------------------------------------------------
// Description:
//   Common package containing ISA encodings, configuration constants, shared
//   typedefs, and the numeric helper functions (MXFP4 decode, wide fixed-
//   point accumulate) for the MXDOTP coprocessor.
//
//   Instruction encoding follows the standard RISC-V R4-type layout (the same
//   layout used by FMADD.S/D in the F/D extensions):
//
//     [31:27] rs3     [26:25] funct2   [24:20] rs2   [19:15] rs1
//     [14:12] funct3  [11:7]  rd       [6:0]   opcode
//
//   This is a deliberate choice: cv32e40x_id_stage.sv already hardwires its
//   third register-file read port address to instr[31:27] (REG_S3_MSB/LSB)
//   whenever REGFILE_NUM_READ_PORTS >= 3 (i.e. X_NUM_RS == 3). Using the
//   standard R4 rs3 position means our decoder's view of rs3 matches the
//   register the core actually reads, with zero core RTL changes required.
//
//   All MXDOTP RTL modules should import this package:
//
//     import mxdotp_pkg::*;
//
//==============================================================================
//
// MILESTONE HISTORY (brief - see git history / prior handoff docs for the
// full blow-by-blow):
//   - MXFP8 (E4M3/E5M2) placeholder datapath, k=4.
//   - Migrated to MXFP4 (E2M1), k=8 - matches the MXDOTP paper's k=8 point
//     directly (32-bit operand / 4-bit element == 8).
//   - Added rs3 forwarding and genuine dual-read support at the CV32E40X
//     core level (cv32e40x_id_stage.sv/cv32e40x_controller_bypass.sv/
//     cv32e40x_core.sv's X_DUALREAD) - real core enhancements, not MXDOTP-
//     specific, but what made everything below possible.
//   - Added a k=16, "residual" datapath (MX_FMT_MXFP4_RESIDUAL) as a SECOND
//     format alongside the original k=8 one, to make real use of dual-read:
//     MXDOTP took A, B, AND a residue operand AR (all 64-bit), computing two
//     raw dot products (A.B and AR.B); MXFINAL took a combined 64-bit
//     {scales,old_acc} operand and combined both raw products with the old
//     accumulator.
//
// MILESTONE (current): unified MXDOTP/MXFINAL operand convention across all
// (present and future) MX formats
//
// The two milestones above left MX_FMT_MXFP4 and MX_FMT_MXFP4_RESIDUAL with
// DIFFERENT operand conventions (k=8 vs k=16 A/B, scales-at-DOTP-time vs
// scales-at-FINAL-time, no-dualread vs dualread MXFINAL). That's been
// replaced with one convention for every format, present or future:
//
//   MXDOTP  = exact/raw dot product arithmetic ONLY. Never touches scales.
//   MXFINAL = apply the shared MX scale(s), combine with the FP32
//             accumulator, round once.
//
// This falls out of the same factoring identity used for the residual
// datapath, generalized:
//
//   acc' = s*(R + acc/s),   where R = raw dot product (MXDOTP's job),
//                                 s = combined MX block scale (2^k, exact),
//                                 acc/s and the final *s are both PURE
//                                 exponent adjustments since s is a power of
//                                 two - no floating multiply/divide needed
//                                 anywhere in the datapath.
//
// Concretely, for every format:
//
//   MXDOTP  (funct3=MX_FUNCT3_DOTP):
//     rs1 = A, rs2 = B, rs3 = residue/AR - ALL 64-bit dual-read, MX_K=16
//     MXFP4 elements each, regardless of format. issue_resp.dualread is
//     unconditionally 1 for this op. For MX_FMT_MXFP4 (no residue), rs3 is
//     simply unused - its VALUE doesn't matter, but the operand *shape* is
//     identical to every other format, which is the whole point (one
//     programming model, not one per format - see the "Long-term ISA
//     direction" rationale this milestone was designed against). Always
//     computes BOTH p1=sum(A_i*B_i) and p2=sum(AR_i*B_i) unconditionally
//     (the arithmetic doesn't know or care what format it's in - only
//     MXFINAL's dispatch does), staging them in private registers
//     pending_p1_q/pending_p2_q. No register writeback, any format.
//
//   MXFINAL (funct3=MX_FUNCT3_FINAL):
//     rs1 = scales = {a_scale[31:24], ar_scale[23:16], b_scale[15:8],
//     reserved[7:0]}, rs2 = old FP32 accumulator, rs3 = unused - BOTH rs1
//     and rs2 are plain 32-bit reads, no dual-read needed for either (this
//     is why MXFINAL never sets issue_resp.dualread, in any format: 24 bits
//     of scales and a 32-bit accumulator each fit in their own register with
//     room to spare). Applies scale_exp(a_scale,b_scale) to p1 always;
//     applies scale_exp(ar_scale,b_scale) to p2 ONLY when mx_format ==
//     MX_FMT_MXFP4_RESIDUAL (masked out otherwise, since AR/p2 are
//     meaningless for the non-residual format). Brings in the accumulator,
//     sums everything at full ACC_FULL_WIDTH precision, rounds once
//     (acc_to_fp32), writes rd.
//
// Because MXDOTP's arithmetic is now completely format-independent (always
// A, B, AR at k=16, always computing both p1 and p2), the two formats
// implemented so far share ALL of mxdotp_execute.sv's DOTP-side logic and
// most of its FINAL-side logic too - the only format-dependent step left is
// whether MXFINAL's sum includes p2's contribution.
//
// funct2 (mx_format) assignments, finalized now even though only the first
// two are implemented:
//   00 : MX_FMT_MXFP4          - AR/p2 computed but unused by MXFINAL
//   01 : MX_FMT_MXFP4_RESIDUAL - AR/p2 included by MXFINAL
//   10 : MX_FMT_M2XFP4         - RESERVED, not yet implemented
//   11 : MX_FMT_MXFP8          - RESERVED, not yet implemented
// An MXDOTP/MXFINAL issued with format 10 or 11 is still *accepted* (is_mx
// only checks funct3, not format) but is inert: mxdotp_execute's dispatch
// only special-cases MX_FMT_MXFP4_RESIDUAL, so any other format value
// (including the two reserved ones) falls through to the same behavior as
// MX_FMT_MXFP4. That's a deliberate, safe default for "not implemented yet"
// - not a silent correctness trap - since it exactly matches MX_FMT_MXFP4's
// own defined behavior rather than doing something arbitrary.
//
// This drops fp9_t/fp4_to_fp9/fp9_multiply/FP9_BIAS/E2M1_BIAS entirely -
// they existed only to let MXDOTP apply a scale it already knew about
// immediately, which no format does anymore. fp4_to_code (see below) is now
// the only per-element conversion in the datapath, used uniformly.
//
// GUARD_BITS=3 (still not re-derived - see below) comfortably covers
// summing the (at most) 3 contributions MXFINAL ever combines (p1, p2, old
// accumulator).
//
//==============================================================================

package mxdotp_pkg;

  //----------------------------------------------------------------------------
  // Custom Opcode
  //----------------------------------------------------------------------------
  localparam logic [6:0] MX_OPCODE = 7'b0001011;


  //----------------------------------------------------------------------------
  // Instruction Class (funct3)
  //----------------------------------------------------------------------------
  //
  // MILESTONE (current): fused fast-path engine for plain (non-residue)
  // formats - see mx_raw_contrib_t and the MX_SLOT_FUSED milestone header
  // further down for the full rationale. This split the two-instruction
  // DOTP/FINAL convention's role in two:
  //
  // 000 : MXDOTP   - RESIDUE-STYLE FORMATS ONLY now. Exact/raw dot product
  //                  arithmetic (A.B and AR.B), stage internally, no WB, no
  //                  scale knowledge at all. rs3 is always a meaningful
  //                  residue/auxiliary operand on this path now (AR today;
  //                  "X meta" for whatever a future residue-style format
  //                  needs there) - never present-but-unused the way it was
  //                  when plain MXFP4 still went through this instruction.
  // 001 : MXFINAL  - RESIDUE-STYLE FORMATS ONLY now. Apply MX scale(s) to
  //                  the staged raw products, combine with the FP32
  //                  accumulator, round once, write rd. Always includes the
  //                  residue/p2 contribution unconditionally (no format
  //                  mask any more - see mxdotp_final_engine.sv) since every
  //                  instruction reaching this slot is, by ISA convention,
  //                  a residue-style format.
  // 010 : MXDUALREAD_TEST - validation-only, NOT part of the real MXDOTP ISA
  //                  (see mxdotp_execute.sv for why this exists). rs1=base
  //                  register; requests issue_resp.dualread=1 and writes the
  //                  *upper* 32 bits of the resulting paired {rs1+1,rs1} read
  //                  (i.e. register rs1+1's value) to rd. This is the only
  //                  way to observe, from software, whether the core's
  //                  dual-read mechanism (cv32e40x_core.sv's X_DUALREAD,
  //                  REGFILE_NUM_READ_PORTS==6) actually works, independent
  //                  of format.
  // 011 : MXFUSED  - PLAIN (non-residue) FORMATS ONLY. Single-instruction,
  //                  single-engine fast path: rs1=A, rs2=B (64-bit dual-
  //                  read, same shape as MXDOTP's) and rs3={reserved[15:0],
  //                  b_scale[7:0],a_scale[7:0]} (upper 32, from rs3+1) /
  //                  old FP32 accumulator (lower 32, from rs3) - also 64-bit
  //                  dual-read, packed the same way MXFINAL's rs1 is today,
  //                  just relocated to rs3. Computes the raw dot product,
  //                  applies the scale, accumulates, rounds, and writes rd -
  //                  all in one instruction, no mailbox, no AR/residue
  //                  operand at all. mx_format selects the ELEMENT format
  //                  here (MX_FMT_MXFP4 implemented; MX_FMT_MXFP8 reserved/
  //                  stubbed - see mxdotp_fused_engine.sv), not a residue
  //                  variant - MX_FMT_MXFP4_RESIDUAL/MX_FMT_M2XFP4 aren't
  //                  meaningful for an instruction with no AR operand and
  //                  fall through to the same safe-inert stub MXFP8 does.
  //
  localparam logic [2:0] MX_FUNCT3_DOTP           = 3'b000;
  localparam logic [2:0] MX_FUNCT3_FINAL          = 3'b001;
  localparam logic [2:0] MX_FUNCT3_DUALREAD_TEST  = 3'b010;
  localparam logic [2:0] MX_FUNCT3_FUSED          = 3'b011;


  //----------------------------------------------------------------------------
  // Data Format / Variant (funct2, R4-type bits [26:25])
  //----------------------------------------------------------------------------
  //
  // Same four encodings, but their MEANING now depends on which funct3 they
  // ride along with (see the funct3 milestone comment above):
  //   - Under MXDOTP/MXFINAL (residue-style path): selects the residue
  //     variant. Only MX_FMT_MXFP4_RESIDUAL is implemented; MX_FMT_MXFP4
  //     reaching this path is stale/unused post-split (no longer produced
  //     by the intended software convention) but still falls through
  //     safely rather than being treated as an error - see
  //     mxdotp_final_engine.sv.
  //   - Under MXFUSED (plain fast path): selects the ELEMENT format.
  //     MX_FMT_MXFP4 is implemented; MX_FMT_MXFP8 is a reserved/stubbed
  //     front-end (see mxdotp_fused_engine.sv) that safely contributes
  //     zero until its real arithmetic is designed. MX_FMT_MXFP4_RESIDUAL/
  //     MX_FMT_M2XFP4 aren't meaningful here (no AR operand exists in this
  //     instruction's encoding) and fall into the same stub.
  //
  localparam logic [1:0] MX_FMT_MXFP4          = 2'b00;
  localparam logic [1:0] MX_FMT_MXFP4_RESIDUAL = 2'b01;
  localparam logic [1:0] MX_FMT_M2XFP4         = 2'b10;  // RESERVED - not yet implemented
  localparam logic [1:0] MX_FMT_MXFP8          = 2'b11;  // RESERVED (MXDOTP path) /
                                                          // stubbed front-end (MXFUSED path)


  //----------------------------------------------------------------------------
  // XIF Configuration
  //----------------------------------------------------------------------------
  localparam int MX_NUM_RS = 3;


  //----------------------------------------------------------------------------
  // Controller FSM
  //----------------------------------------------------------------------------
  typedef enum logic [1:0] {
    MX_IDLE,
    MX_WAIT_COMMIT,
    MX_COMPUTE,
    MX_RESULT
  } mxdotp_state_t;

  //==============================================================================
  //
  // MILESTONE: pipelined coprocessor (independent DOTP/FINAL/DUALREAD_TEST slots)
  //
  // Previously, mxdotp_xif.sv was a single-in-flight FSM: one shared state_q,
  // one shared saved_id/saved_rs/etc., one shared mxdotp_execute instance, and
  // issue_ready asserted only in MX_IDLE. Every MX instruction therefore paid
  // the *entire* Issue->Commit->Compute->Result round trip before the next one
  // could even be issued - confirmed as a real, not just theoretical, cost
  // (cv32e40x_id_stage.sv's xif_waiting ties id_ready_o/id_valid_o directly to
  // our own issue_ready, so this was a direct, mechanical stall on the core's
  // own ID stage, not something the core imposed on us). The XIF protocol
  // itself does not require this: every channel (issue_req/commit/result) in
  // if_xif.sv carries an id field specifically to let multiple offloaded
  // instructions be outstanding at once - this project's earlier single-
  // saved_id design simply didn't use that capability (see the comment that
  // used to head this file).
  //
  // This milestone gives MXDOTP, MXFINAL, and MX_FUNCT3_DUALREAD_TEST each
  // their own independent slot - own mxdotp_state_t register, own saved
  // operand/id/rd registers, own execute engine with its own busy/start/done -
  // instead of one shared FSM/engine for all three. Two consequences:
  //
  //   - issue_ready is no longer a single bit gated on one shared state_q; it
  //     is computed per-instruction from whichever slot that instruction's
  //     own mx_operation maps to, so e.g. MXFINAL can be issued (and
  //     committed) while a preceding MXDOTP is still computing.
  //   - A single-entry "mailbox" (mailbox_valid_q/mailbox_p1_q/mailbox_p2_q)
  //     replaces MXDOTP writing scaled results directly - MXDOTP's engine
  //     posts its raw p1/p2 into the mailbox once free, and MXFINAL's engine
  //     snapshots (consumes) the mailbox into its own private registers the
  //     instant it starts, immediately freeing the mailbox for the next
  //     MXDOTP. This is a real data dependency (MXFINAL cannot compute before
  //     the mailbox has valid data), not a resource conflict - it's expressed
  //     as an extra qualifier on when each engine's own start_i may fire, not
  //     as an extra FSM state.
  //
  // Safety net for a case the common DOTP->FINAL->DOTP->FINAL software
  // pattern never exercises, but that the hardware must not silently corrupt
  // on: two MXDOTPs issued back-to-back with no intervening MXFINAL. Since
  // the mailbox is single-entry, MXDOTP's own COMPUTE->RESULT transition is
  // gated on the mailbox actually being free (not just on its own engine
  // being done) - if the mailbox is still occupied by a previous,
  // unconsumed MXDOTP result, the new one simply waits (backpressure) rather
  // than overwriting it. This degrades an unusual instruction ordering to a
  // stall, not silent data loss.
  //
  // Because up to three instructions (one per slot) can now be outstanding at
  // once, but CV32E40X retires strictly in program order, results can't just
  // be posted whenever each slot happens to finish - a small in-order
  // delivery queue (MX_ORDER_DEPTH entries, tagged by which slot produced
  // each entry, in acceptance order) gates the shared result_if: only the
  // oldest still-outstanding instruction's slot may present result_valid,
  // even if a more-recently-issued slot finished computing first.
  //
  //==============================================================================

  // --- Order-delivery queue: tags which slot produced each outstanding
  //     instruction, in the order they were accepted. Depth exactly matches
  //     the number of independent slots (DOTP, FINAL, DUALREAD_TEST, FUSED)
  //     since each slot can have at most one instruction outstanding at a
  //     time by construction - four is a real bound, not a heuristic. ---
  localparam int MX_NUM_SLOTS  = 4;
  localparam int MX_ORDER_DEPTH = MX_NUM_SLOTS;

  typedef enum logic [1:0] {
    MX_SLOT_DOTP,
    MX_SLOT_FINAL,
    MX_SLOT_DUALREAD,
    MX_SLOT_FUSED
  } mx_slot_e;

  //==============================================================================
  //
  // MILESTONE: fused fast-path engine for plain (non-residue) formats
  //
  // Even after pipelining, plain MX_FMT_MXFP4 still paid the FULL two-
  // instruction, two-slot MXDOTP->MXFINAL round trip (mailbox, order queue,
  // two separate Issue->Commit->Result handshakes) even though it doesn't
  // structurally need three register operands the way a residue format
  // does - MXDOTP's own AR/p2 arithmetic was computed and then unconditionally
  // discarded by MXFINAL's format mask for this format. Two distinct, now-
  // addressed wastes:
  //   1) Protocol overhead paid twice per plain-format dot product (two
  //      issue slots, two commit-gated FSMs, a mailbox handoff) for an
  //      instruction pair that only ever had two operands' worth of real
  //      information (A, B) plus scales/old_acc - never a genuine third
  //      (AR) operand.
  //   2) mxdotp_dotp_engine.sv unconditionally computing p2=sum(AR_i*B_i)
  //      for a format that immediately discards it.
  //
  // This is an intentional ISA-breaking change (not preserving the earlier
  // "one operand convention for every format" uniformity), splitting the
  // instruction set into two genuinely different conventions by need:
  //   - MXDOTP/MXFINAL: RESIDUE-STYLE FORMATS ONLY from here on. Still
  //     genuinely need three dual-read operands at DOTP time (A, B, AR) and
  //     a second instruction at FINAL time (scales, old_acc) - nothing about
  //     this path shrinks, since the operand count is real, not an artifact
  //     of ISA uniformity. mxdotp_final_engine.sv is simplified to match:
  //     its format mask is gone, since every instruction reaching it is now
  //     guaranteed (by ISA convention, not a runtime check) to want the
  //     residue contribution included.
  //   - MXFUSED (new, MX_FUNCT3_FUSED): the plain fast path. rs1=A, rs2=B
  //     (dual-read, same shape as MXDOTP), rs3={scales,old_acc} (also dual-
  //     read, packed like MXFINAL's rs1 is today but relocated) - one
  //     instruction, one slot, no mailbox (nothing to hand off across
  //     instructions - the raw-sum-to-rounded-result handoff happens
  //     entirely inside mxdotp_fused_engine.sv, privately, between its own
  //     front-end and back-end).
  //
  // mxdotp_fused_engine.sv is structured as a format-selected FRONT-END
  // (unpack + multiply + sum, one branch per element format) feeding a
  // single shared BACK-END (scale + accumulate + round - the same
  // place_in_acc/fp32_to_acc/acc_to_fp32 machinery mxdotp_final_engine.sv
  // already uses). The contract between them is mx_raw_contrib_t (below):
  // a front-end reduces whatever its element format is to one signed
  // magnitude plus an exponent correction, ready for place_in_acc as-is -
  // the back-end never special-cases *format*, only that struct's
  // contents. MX_FMT_MXFP4's front-end is implemented now (reusing
  // fp4_to_code, MX_K, PSUM_WIDTH exactly as mxdotp_dotp_engine.sv does,
  // just without ever computing an AR/p2 term - a real area win specific
  // to this path, not just a protocol one). MX_FMT_MXFP8's front-end is a
  // deliberate STUB (contributes zero, same "reserved format falls through
  // safely" convention used elsewhere in this project) - MXFP8's real
  // arithmetic is NOT a simple reparameterization of MXFP4's exact "2x
  // value" fixed-point trick (E4M3/E5M2 have real mantissas and a much
  // wider dynamic range), and is deliberately deferred until that's
  // designed on its own terms (see the MXDOTP paper's FP9/E5M3-intermediate,
  // early-accumulation approach for MXFP8, referenced in
  // mxdotp_fused_engine.sv's header, for what that will likely need to
  // look like).
  //
  // ACC_WIDTH=95/ACC_ANCHOR=34 (below) are shared, UNCHANGED, by both the
  // fused engine's back-end and mxdotp_final_engine.sv's - deliberately not
  // re-derived for MXFP4's smaller dynamic range yet (still Known
  // Limitation #1 / a deferred "optimize later" item). These are not
  // arbitrary placeholders: they are the MXDOTP paper's own sizing for its
  // real MXFP8/k=8 datapath (95-bit fixed-point accumulator, anchor at 34,
  // sized to exactly hold the sum of eight products plus the shifted
  // accumulator, sign and rounding bits included) - i.e. already the
  // *intended* width for MXFP8's eventual front-end, and over-provisioned
  // headroom (not lossy) for MXFP4's smaller range in the meantime.
  //
  //==============================================================================

  //============================================================================
  // MXFP4 numeric datapath: widths and pure helper functions
  //============================================================================
  //
  // Used exclusively by mxdotp_execute.sv. Kept here so the per-element
  // decode / wide-accumulate steps are independently-readable pure functions
  // rather than buried inline in always blocks.
  //
  // KNOWN LIMITATIONS (flagged deliberately, not silently simplified away):
  //   - No dedicated Inf/NaN detection: E2M1 has no reserved Inf/NaN
  //     encoding in the OCP MX spec, so this is moot for the element format
  //     itself. It still applies to the FP32 accumulator path, which
  //     doesn't special-case Inf/NaN inputs either.
  //   - The 95-bit/anchor-34 fixed-point buffer (reused verbatim from the
  //     original MXDOTP paper's own sizing, NOT yet re-derived for MXFP4's
  //     much smaller dynamic range) gives far more range than an MX-scaled
  //     accumulation realistically needs. A contribution whose true
  //     magnitude exceeds this range saturates to the max representable
  //     value rather than wrapping or corrupting the sign bit (place_in_acc
  //     reserves its top bit purely as a sign-safety guard and explicitly
  //     checks for shifted-out bits, so this saturation is exact at the
  //     boundary, not an approximation). Only the single, final acc_to_fp32
  //     call clamps the *result's* exponent to what FP32 can represent -
  //     that's required IEEE-754-style behavior for any finite format, not
  //     an early precision-losing step. Nothing narrower than
  //     ACC_FULL_WIDTH is used anywhere before that one call.
  //----------------------------------------------------------------------------

  // --- Block size: MXFP4 elements per 64-bit dual-read operand (A/B/AR),
  //     uniform across every format now - 16x4=64 bits exactly. ---
  localparam int MX_K = 16;

  // --- E8M0 block-scale format (OCP MX spec): unsigned 8-bit exponent-only
  //     scale, value = 2^(raw-127). Applying a scale is a pure exponent add. ---
  localparam int E8M0_BIAS = 127;

  // --- Internal wide fixed-point accumulation buffer: 95-bit two's-
  //     complement buffer, bit[ACC_ANCHOR] has weight 2^0. PRODSUM_WIDTH=67
  //     is the raw sum-of-products magnitude width (before anchoring) that
  //     the original MXDOTP paper's own datapath uses - reused verbatim,
  //     deliberately NOT re-derived for MXFP4's much smaller dynamic range
  //     yet (see milestone header above). GUARD_BITS=3 covers summing the
  //     (at most 3) contributions MXFINAL ever combines (p1, p2, old
  //     accumulator) without overflow. ---
  localparam int ACC_WIDTH     = 95;
  localparam int ACC_ANCHOR    = 34;
  localparam int PRODSUM_WIDTH = 67;
  localparam int GUARD_BITS    = 3;
  localparam int ACC_FULL_WIDTH = ACC_WIDTH + GUARD_BITS;  // carries every MXFINAL
                                                             // contribution and their
                                                             // sum through to the one
                                                             // and only rounding step
                                                             // (acc_to_fp32) with no
                                                             // intermediate narrowing

  // A generously-wide signed type for exponent arithmetic (folded-in E8M0
  // scale exponents and buffer shift amounts all comfortably fit with room
  // to spare, avoiding overflow before the deliberate clamps in
  // place_in_acc).
  typedef logic signed [15:0] mx_exp_t;

  //----------------------------------------------------------------------------
  // Per-element and per-product fixed-point widths.
  //
  // Every E2M1 value is an exact multiple of 0.5 (the whole format is just 8
  // magnitudes: 0, 0.5, 1, 1.5, 2, 3, 4, 6), so representing an element as a
  // plain signed fixed-point integer - code = 2*value, i.e. code in
  // {0,+-1,+-2,+-3,+-4,+-6,+-8,+-12} - is exact, with no floating-point
  // machinery needed at all. Sums of products of such codes stay exact
  // fixed-point integers too, which is exactly what lets MXDOTP compute a
  // real (not approximate) raw dot product with no scale knowledge.
  //
  // Bit-width derivation (worth spelling out in full - it's easy to get
  // wrong in exactly this way, and was, earlier in this project):
  //   - CODE_WIDTH = 5 : signed 2*value, range [-12,12], fits in 5 bits
  //     (2^4=16 > 12).
  //   - PROD_WIDTH = 9 : a SINGLE product code_a*code_b maxes out at
  //     12*12=144, needing 9 bits signed (2^8=256 > 144, 2^7=128 < 144).
  //     This is the width a single term needs - correct as far as it goes.
  //   - PSUM_WIDTH = 13 : p1/p2 are each a SUM of MX_K=16 such terms, not
  //     one term. Worst case (all 16 terms at +-144, same sign):
  //     16*144 = 2304, needing 13 bits signed (2^12=4096 > 2304,
  //     2^11=2048 < 2304) - 4 more bits than a single product, i.e.
  //     PROD_WIDTH + $clog2(MX_K). Sizing p1/p2 at 9 bits (the single-
  //     product width) instead of 13 would silently overflow/wrap for real,
  //     not even that extreme, inputs - this is computed via $clog2(MX_K)
  //     rather than hardcoded so it stays correct if MX_K ever changes.
  //   - The "-2" exponent correction used in mxdotp_execute.sv's MXFINAL:
  //     code = 2*value, so a raw product code_a*code_b = 4*(value_a*value_b)
  //     - i.e. every raw product (and therefore every sum of them) carries
  //     an implicit *4 relative to the true unscaled dot product value.
  //     Feeding p1/p2 into place_in_acc with exponent scale_exp(...) alone
  //     would therefore be 4x too large; subtracting 2 from the exponent
  //     (2^-2 = 1/4) corrects for it.
  //----------------------------------------------------------------------------
  localparam int CODE_WIDTH = 5;
  localparam int PROD_WIDTH = 9;
  localparam int PSUM_WIDTH = PROD_WIDTH + $clog2(MX_K);  // = 13

  //----------------------------------------------------------------------------
  // fp4_to_code: convert a single MXFP4 (E2M1) element directly to its exact
  // signed fixed-point "2*value" integer code. Exact for all eight E2M1
  // magnitudes including the 0.5 subnormal (exp_field==0, mant==1) - a flat
  // fixed-point representation has no renormalization problem to dodge in
  // the first place (unlike widening into a floating, implicit-leading-1
  // form would).
  //----------------------------------------------------------------------------
  function automatic logic signed [CODE_WIDTH-1:0] fp4_to_code(input logic [3:0] val);
    logic       sign;
    logic [3:0] mag;  // unsigned magnitude, 0..12
    begin
      sign = val[3];
      // val[2:0] is {exp_field[1:0], mant} - the 3 bits that determine
      // magnitude regardless of sign.
      unique case (val[2:0])
        3'b000: mag = 4'd0;   // 0.0
        3'b001: mag = 4'd1;   // 0.5
        3'b010: mag = 4'd2;   // 1.0
        3'b011: mag = 4'd3;   // 1.5
        3'b100: mag = 4'd4;   // 2.0
        3'b101: mag = 4'd6;   // 3.0
        3'b110: mag = 4'd8;   // 4.0
        3'b111: mag = 4'd12;  // 6.0
      endcase
      return sign ? (-$signed({1'b0, mag})) : $signed({1'b0, mag});
    end
  endfunction

  //----------------------------------------------------------------------------
  // mx_raw_contrib_t: the contract between a mxdotp_fused_engine.sv FRONT-END
  // (format-specific unpack/multiply/sum) and its shared BACK-END (scale +
  // accumulate + round). A front-end reduces its own element format down to
  // exactly this - a signed magnitude already shaped for place_in_acc, plus
  // whatever per-format exponent correction its own numeric representation
  // needs (e.g. -2 for MXFP4's code=2*value convention - see fp4_to_code
  // above and mxdotp_fused_engine.sv). The back-end never special-cases
  // *format*, only this struct's contents - a future MXFP8 front-end plugs
  // in by producing the same three fields, not by teaching the back-end
  // anything new. mag is pre-zero-extended to 32 bits so it can be passed to
  // place_in_acc without further shaping at the call site.
  //----------------------------------------------------------------------------
  typedef struct packed {
    logic        sign;
    logic [31:0] mag;
    mx_exp_t     exp_corr;
  } mx_raw_contrib_t;

  //----------------------------------------------------------------------------
  // scale_exp: fold a pair of E8M0 block scales into a single signed exponent
  // offset. Applying X^A * X^B to a value is exactly this added to its
  // existing exponent - no separate multiply needed (E8M0 has no mantissa).
  //----------------------------------------------------------------------------
  function automatic mx_exp_t scale_exp(input logic [7:0] xa_raw, input logic [7:0] xb_raw);
    return mx_exp_t'({8'd0, xa_raw}) + mx_exp_t'({8'd0, xb_raw}) - mx_exp_t'(2*E8M0_BIAS);
  endfunction

  //----------------------------------------------------------------------------
  // place_in_acc: shift an unsigned magnitude (caller zero-extends into a
  // 32-bit container) into the ACC_WIDTH-bit two's-complement wide buffer,
  // positioned so its LSB lands at bit (exp + ACC_ANCHOR).
  //
  // The usable *unsigned magnitude* range is ACC_WIDTH-1 bits (MAGW below) -
  // bit ACC_WIDTH-1 is reserved purely as a sign-safety guard and is never
  // written by the shifted magnitude itself. This matters: a shift landing
  // exactly on bit ACC_WIDTH-1 would otherwise be misread as the two's-
  // complement sign bit even though the true value is positive. Overflow is
  // detected by explicitly checking whether any bits were shifted out above
  // the MAGW-bit window (not just a coarse pre-check on shift_amt), so a
  // shift landing anywhere near that boundary saturates correctly instead
  // of silently truncating.
  //----------------------------------------------------------------------------
  function automatic logic signed [ACC_WIDTH-1:0] place_in_acc(
    input logic     sign,
    input mx_exp_t  exp,
    input logic [31:0] mag
  );
    localparam int MAGW = ACC_WIDTH - 1;  // usable unsigned magnitude width
    mx_exp_t                  shift_amt;
    int                       shamt;
    logic [MAGW+32-1:0]       wide_tmp;
    logic [MAGW-1:0]          mag_mag;
    logic signed [ACC_WIDTH-1:0] result;
    begin
      shift_amt = exp + mx_exp_t'(ACC_ANCHOR);
      if (shift_amt >= mx_exp_t'(MAGW)) begin
        mag_mag = {MAGW{1'b1}};                          // saturate: max representable magnitude
      end else if (shift_amt <= -mx_exp_t'(32)) begin
        mag_mag = '0;                                    // fully below resolution: negligible
      end else if (shift_amt >= 0) begin
        shamt    = int'(shift_amt);
        wide_tmp = {{MAGW{1'b0}}, mag} << shamt;
        if (|wide_tmp[MAGW+32-1:MAGW])
          mag_mag = {MAGW{1'b1}};                        // true overflow: saturate
        else
          mag_mag = wide_tmp[MAGW-1:0];
      end else begin
        shamt   = int'(-shift_amt);
        mag_mag = MAGW'(mag >> shamt);
      end
      result = sign ? (-$signed({1'b0, mag_mag})) : $signed({1'b0, mag_mag});
      return result;
    end
  endfunction

  //----------------------------------------------------------------------------
  // fp32_to_acc: decode an FP32 value and place it into the wide buffer at
  // its natural exponent position (used by MXFINAL to bring in the old
  // accumulator). Denormals (biased exp==0) flush to zero.
  //----------------------------------------------------------------------------
  function automatic logic signed [ACC_WIDTH-1:0] fp32_to_acc(input logic [31:0] val);
    logic        sign;
    logic [7:0]  exp_biased;
    logic [22:0] mant;
    logic [23:0] sig24;
    mx_exp_t     e;
    begin
      sign       = val[31];
      exp_biased = val[30:23];
      mant       = val[22:0];
      if (exp_biased == 8'd0) begin
        return '0;
      end
      sig24 = {1'b1, mant};
      e     = mx_exp_t'({8'd0, exp_biased}) - mx_exp_t'(127) - mx_exp_t'(23);
      return place_in_acc(sign, e, {8'd0, sig24});
    end
  endfunction

  //----------------------------------------------------------------------------
  // acc_to_fp32: normalize + single round-to-nearest-even of the final wide
  // fixed-point sum back down to FP32 - the *only* rounding step in the
  // whole datapath (matching the "single rounding" property of both
  // reference papers). Takes the full ACC_FULL_WIDTH (ACC_WIDTH+GUARD_BITS)
  // value directly - callers should never narrow to ACC_WIDTH before this
  // call. The exponent clamp near the end (over/underflow to the FP32
  // representable range) is the *only* range-limiting step in the whole
  // datapath, and it's the legitimate final one, not an early one.
  //----------------------------------------------------------------------------
  function automatic logic [31:0] acc_to_fp32(input logic signed [ACC_FULL_WIDTH-1:0] acc);
    logic                       sign;
    logic [ACC_FULL_WIDTH-1:0]  mag;
    int                         lead_pos;
    int                         i;
    logic [22:0]                mant_out;
    logic [7:0]                 exp_out;
    mx_exp_t                    unbiased_exp;
    logic                       round_bit, sticky_bit;
    logic [23:0]                mant_ext;
    begin
      if (acc == '0) return 32'd0;

      sign = acc[ACC_FULL_WIDTH-1];
      mag  = sign ? (-acc) : acc;  // two's-complement negation, reinterpreted as
                                    // unsigned magnitude via same-width assignment

      // Leading-one detection (simple descending scan - fine for a first,
      // correctness-focused pass; a leading-zero anticipator would replace
      // this for timing once synthesis is a concern).
      lead_pos = -1;
      for (i = ACC_FULL_WIDTH-1; i >= 0; i--) begin
        if (lead_pos == -1 && mag[i]) lead_pos = i;
      end

      unbiased_exp = mx_exp_t'(lead_pos) - mx_exp_t'(ACC_ANCHOR);

      mant_out   = '0;
      round_bit  = 1'b0;
      sticky_bit = 1'b0;
      for (i = 0; i < 23; i++) begin
        if (lead_pos - 1 - i >= 0) mant_out[22-i] = mag[lead_pos-1-i];
      end
      if (lead_pos - 24 >= 0) round_bit = mag[lead_pos-24];
      // Fixed-bound loop (ACC_FULL_WIDTH is a compile-time constant), guarded
      // by a data-dependent `if` - the same pattern the mant_out loop just
      // above already uses, not a new one. lead_pos-24 was the loop's actual
      // trip count before this rewrite (data-dependent, since lead_pos comes
      // from the leading-one scan above) - Vivado cannot statically unroll a
      // variable trip count ([Synth 8-3380] "loop condition does not
      // converge"), so the bound is widened to the provably-safe constant
      // ACC_FULL_WIDTH (mag's own bit range is 0..ACC_FULL_WIDTH-1, so no
      // valid i is ever excluded) and the original bound is enforced inside
      // as a guard instead. Semantically identical: every i that the old
      // loop would have visited (0 <= i < lead_pos-24) still contributes;
      // every additional i this loop now visits (lead_pos-24 <= i <
      // ACC_FULL_WIDTH) is guarded off and contributes nothing, exactly as
      // if the loop had stopped there - not an approximation, the same
      // boolean OR-reduction, just expressed with a synthesizable trip count.
      for (i = 0; i < ACC_FULL_WIDTH; i++) begin
        if (i < lead_pos-24 && mag[i]) sticky_bit = 1'b1;
      end

      mant_ext = {1'b0, mant_out};
      if (round_bit && (sticky_bit || mant_out[0])) begin  // round-to-nearest-even
        mant_ext = mant_ext + 24'd1;
      end

      if (mant_ext[23]) begin
        unbiased_exp = unbiased_exp + mx_exp_t'(1);
        mant_out     = mant_ext[23:1];
      end else begin
        mant_out = mant_ext[22:0];
      end

      // This is the ONE legitimate range clamp in the whole datapath -
      // saturating an FP32 result to its representable exponent range is
      // required IEEE-754-style behavior for any finite format, not an
      // early precision-losing step.
      if ((unbiased_exp + mx_exp_t'(127)) <= mx_exp_t'(0)) begin
        exp_out = 8'd0; mant_out = '0;              // underflow -> flush to zero
      end else if ((unbiased_exp + mx_exp_t'(127)) >= mx_exp_t'(255)) begin
        exp_out = 8'hFE; mant_out = 23'h7FFFFF;      // saturate to max finite (no Inf here)
      end else begin
        exp_out = 8'(unbiased_exp + mx_exp_t'(127));
      end

      return {sign, exp_out, mant_out};
    end
  endfunction

endpackage
