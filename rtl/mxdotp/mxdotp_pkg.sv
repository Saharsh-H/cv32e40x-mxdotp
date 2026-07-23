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
  //                  here, not a residue variant. MX_FMT_MXFP4 (
  //                  mxdotp_fused_engine.sv) and MX_FMT_MXFP8 (
  //                  mxdotp_fp8_fused_engine.sv) each have their own engine.
  //                  and MX_FMT_M2XFP4 (mxdotp_m2xfp4_fused_engine.sv) each
  //                  have their own engine, all three routed by
  //                  mxdotp_xif.sv's fused pending-queue head decode.
  //                  MX_FMT_MXFP4_RESIDUAL is the one encoding that isn't
  //                  meaningful for an instruction with no AR operand, and
  //                  falls through to the same safe-inert stub permanently.
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
  //   - Under MXFUSED (plain fast path): selects the ELEMENT format, and
  //     thereby which fused engine the instruction is routed to (see
  //     mxdotp_xif.sv's fused_pending_q head decode). MX_FMT_MXFP4 and
  //     MX_FMT_MXFP8 are each implemented by their own engine.
  //     MX_FMT_M2XFP4 is routed to mxdotp_m2xfp4_fused_engine.sv (its own
  //     slot, MX_SLOT_FUSED_M2; verified standalone against m2_golden.py,
  //     59,016 vectors bit-exact, before being wired). NOTE its rs1/rs2
  //     role asymmetry - see the ISA NOTE below. MX_FMT_MXFP4_RESIDUAL is
  //     not meaningful here (no AR operand exists in this instruction's
  //     encoding) and falls into the MXFP4 engine's safe-inert SoP=0 stub
  //     (an exact accumulator pass-through) permanently.
  //
  //     ISA NOTE - M2XFP4 breaks rs1/rs2 symmetry. For MX_FMT_MXFP4 and
  //     MX_FMT_MXFP8 the two operands are interchangeable (the dot product
  //     is commutative and both sides decode identically). MX_FMT_M2XFP4 is
  //     the FIRST encoding in this ISA where operand ORDER carries meaning:
  //     rs1 is ALWAYS the activations (Elem-EM metadata: 2 bits extend the
  //     top-1 element's mantissa per subgroup) and rs2 is ALWAYS the weights
  //     (Sg-EM metadata: 2 bits refine the subgroup's effective scale).
  //     Swapping rs1/rs2 for M2XFP4 changes the result; W-by-W and A-by-A
  //     products are not expressible. See the M2XFP4 frame section at the
  //     bottom of this package for the arithmetic.
  //
  localparam logic [1:0] MX_FMT_MXFP4          = 2'b00;
  localparam logic [1:0] MX_FMT_MXFP4_RESIDUAL = 2'b01;
  localparam logic [1:0] MX_FMT_M2XFP4         = 2'b10;  // RESERVED (MXDOTP path) /
                                                          // implemented (MXFUSED path)
  localparam logic [1:0] MX_FMT_MXFP8          = 2'b11;  // RESERVED (MXDOTP path) /
                                                          // implemented (MXFUSED path)


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
  //     instruction, in the order they were accepted.
  //
  //     MILESTONE (current): true overlap for the FUSED slot only (DOTP/
  //     FINAL/DUALREAD_TEST are UNCHANGED - still at most one outstanding
  //     each, by construction, exactly as before). FUSED can now have
  //     multiple instructions outstanding simultaneously: up to
  //     MX_FUSED_PENDING_DEPTH waiting for their own commit (a small FIFO -
  //     see mxdotp_xif.sv's fused pending-commit queue), plus up to
  //     MX_FUSED_INFLIGHT_DEPTH already committed and moving through
  //     mxdotp_fused_engine.sv's own internal pipeline. MX_FUSED_INFLIGHT_DEPTH
  //     is NOT a tunable - it's the fixed number of register points in that
  //     engine's pipeline (input capture, contrib_q, sum_q, lead_q,
  //     result_data_q = 5), so it can hold at most 5 instructions
  //     concurrently by hard structural fact, not by choice.
  //
  //     MX_FUSED_PENDING_DEPTH=2 is a deliberately conservative starting
  //     guess (not yet measured against CV32E40X's real issue-to-commit
  //     latency) - mxdotp_xif.sv's pending-commit queue asserts if this
  //     is ever too small, rather than silently dropping an entry. Sized
  //     small on purpose: if the assertion never fires in simulation, 2
  //     was enough; if it does fire, that's real evidence a deeper queue
  //     is actually needed, rather than a guess baked in from day one.
  //==============================================================================

  localparam int MX_NUM_SLOTS  = 6;  // DOTP, FINAL, DUALREAD_TEST, FUSED (MXFP4),
                                      // FUSED8 (MXFP8), FUSED_M2 (M2XFP4) - six
                                      // distinct SLOT TYPES. Counts kinds of work,
                                      // not how many of one kind can be outstanding
                                      // at once. FUSED, FUSED8 and FUSED_M2 are the
                                      // three many-outstanding slots.

  localparam int MX_FUSED_PENDING_DEPTH  = 2;  // see milestone header above
  localparam int MX_FUSED_INFLIGHT_DEPTH = 5;  // fixed - EACH fused engine's own
                                                 // register-point count, not a knob
                                                 // (input capture, prod/contrib_q,
                                                 // sum_q, lead_q, result_data_q).
  // The MXFP4, MXFP8 and M2XFP4 fused engines SHARE one pending-commit queue
  // (an accepted FUSED instruction of any element format waits there for its
  // own commit), but each has its OWN MX_FUSED_INFLIGHT_DEPTH pipeline. So the
  // most FUSED-family instructions outstanding at once is the shared pending
  // depth plus ALL THREE engines' inflight depths (not one engine's).
  localparam int MX_FUSED_MAX_OUTSTANDING = MX_FUSED_PENDING_DEPTH + 3*MX_FUSED_INFLIGHT_DEPTH;

  // DOTP + FINAL + DUALREAD_TEST (one each, unchanged) + the FUSED family's max
  // simultaneous outstanding across all three element-format engines.
  // MX_NUM_SLOTS-3 = the three single-outstanding slots (FUSED, FUSED8 and
  // FUSED_M2 are the three that the MX_FUSED_MAX_OUTSTANDING term already
  // fully accounts for). 3 + 2 + 15 = 20 entries.
  localparam int MX_ORDER_DEPTH = (MX_NUM_SLOTS - 3) + MX_FUSED_MAX_OUTSTANDING;

  typedef enum logic [2:0] {
    MX_SLOT_DOTP,
    MX_SLOT_FINAL,
    MX_SLOT_DUALREAD,
    MX_SLOT_FUSED,
    MX_SLOT_FUSED8,
    MX_SLOT_FUSED_M2
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
  // ACC_WIDTH=95/ACC_ANCHOR=34 (below) are now the sizing for
  // mxdotp_final_engine.sv (residue path) ONLY. They were taken from the
  // MXDOTP paper's MXFP8/k=8 datapath, but the paper's ANCHOR=34 is the
  // fractional point of a scale-FREE frame in the factored form
  // s1*s2*(A.B + acc/(s1*s2)) - NOT an absolute fixed-point anchor. Used
  // absolutely (as this buffer does), the sizing imposes a hard |value|
  // window of ~[2^-11, 2^60] with round/sticky loss below it (place_in_acc
  // right-shifts drop bits with no sticky capture, and acc_finalize has no
  // sticky input) and mid-range saturation above it. NEITHER fused engine
  // uses this buffer any more: the plain-MXFP4 engine has its dedicated
  // 38-bit scale-free frame (FP4_FRAME_WIDTH section below) and the MXFP8
  // engine its dedicated 95-bit one (FP8_FRAME_WIDTH section at the bottom
  // of this package), both mirroring the reference implementation's
  // accumulator-shift structure. Known Limitation #1 is thereby RESOLVED
  // for both fused paths; MXFINAL's re-derivation is still open (needs a
  // residue-offset convention: its p1/p2 carry two INDEPENDENT scales, so
  // which one factors out of the frame is a design decision).
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

  // --- Elements per 64-bit dual-read operand (A/B/AR) - 16x4 = 64 bits
  //     exactly, uniform across every format now.
  //
  //     THIS IS NOT THE OCP MX SCALING BLOCK SIZE, and the distinction is
  //     stated at length here because this file previously labelled MX_K
  //     "Block size", and that one word propagated into several sessions'
  //     handoff notes as a false belief that this project runs a non-standard
  //     group of 16. It does not, and never did.
  //
  //       - The OCP MX spec fixes the scaling block at k=32 elements sharing
  //         one E8M0 scale. That is a FORMAT fact and this project follows it.
  //       - MX_K=16 is a REGISTER-WIDTH fact: how many E2M1 nibbles fit in one
  //         64-bit dual-read operand. It says nothing about scaling.
  //
  //     A conformant 32-element block is therefore spanned by TWO consecutive
  //     MXFUSED instructions that carry the SAME a_scale/b_scale in rs3 and
  //     chain through the FP32 accumulator. Nothing in any engine assumes,
  //     encodes, or depends on the block size: each instruction applies
  //     whatever scale rs3 hands it, and MX_K appears ONLY as an unpacking
  //     loop bound / array size / $clog2 term for PSUM_WIDTH. Block size is
  //     purely a quantizer-side convention. Grep confirms it: there is no
  //     non-comment use of MX_K anywhere that a scale flows through.
  //
  //     The one hardware-visible consequence of spanning a block across two
  //     instructions is one extra RNE rounding per block (each MXFUSED rounds
  //     exactly once, on accumulate). That is inherent to a 64-bit register
  //     file and is shared by the reference implementation, which likewise
  //     issues 8 products per instruction for MXFP8 (VECTOR_BITS=3) and so
  //     spans an OCP block across four.
  //
  //     Same conclusion for M2XFP4, for the same reason: Elem-EM and Sg-EM are
  //     both per-SUBGROUP-of-8 mechanisms (M2_SUBGROUP_LEN below), so a
  //     32-element block sees 4 subgroups carrying 4 independent Sg-EM k
  //     values under one shared E - exactly the group=32 / subgroup=8
  //     configuration the M2XFP paper itself evaluates, at the paper's own
  //     0.25 metadata bits/element, with no block-size dependence anywhere in
  //     the datapath. Any claim that this project's M2XFP4 accuracy differs
  //     from the paper's on account of group size is unfounded. ---
  localparam int MX_K = 16;

  // --- E8M0 block-scale format (OCP MX spec): unsigned 8-bit exponent-only
  //     scale, value = 2^(raw-127). Applying a scale is a pure exponent add. ---
  localparam int E8M0_BIAS = 127;

  // --- Internal wide fixed-point accumulation buffer: 95-bit two's-
  //     complement buffer, bit[ACC_ANCHOR] has weight 2^0. PRODSUM_WIDTH=67
  //     is the SINGLE SHIFTED PRODUCT's signed width in the paper's own
  //     datapath (sign + magnitude span [2^31 : 2^-34]; their
  //     PROD_SHIFT_WIDTH = 1 + 32 + 34) - the sum of 8 needs 3 more bits.
  //     Documentation-only constant, consumed nowhere; kept for reference.
  //     GUARD_BITS=3 covers summing the
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

  // Magnitude-only companion to fp4_to_code, for consumers that need |value|
  // directly (e.g. a tournament/max-finding tree) and would otherwise have to
  // recover it by negating fp4_to_code's OWN signed result a second time -
  // fp4_to_code already computes this exact `mag` internally via a plain
  // case-statement LUT (no carry chain) before ever applying the sign, so
  // undoing that sign afterward is a real, avoidable negate sitting on
  // whatever critical path consumes it. Deliberately a STANDALONE duplicate
  // of fp4_to_code's case statement rather than a refactor of fp4_to_code
  // itself (which mxdotp_dotp_engine.sv, mxdotp_final_engine.sv and
  // mxdotp_fused_engine.sv also depend on) - touching a function four
  // engines share needs re-verifying all four, not just the one consumer
  // that needed this. The two tables are proven identical exhaustively (see
  // verification), not just by inspection.
  function automatic logic [3:0] fp4_mag(input logic [2:0] mag3);
    logic [3:0] mag;
    begin
      unique case (mag3)
        3'b000: mag = 4'd0;   // 0.0
        3'b001: mag = 4'd1;   // 0.5
        3'b010: mag = 4'd2;   // 1.0
        3'b011: mag = 4'd3;   // 1.5
        3'b100: mag = 4'd4;   // 2.0
        3'b101: mag = 4'd6;   // 3.0
        3'b110: mag = 4'd8;   // 4.0
        3'b111: mag = 4'd12;  // 6.0
      endcase
      return mag;
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
  // mx_lead_result_t: the contract between acc_find_lead (leading-one scan)
  // and acc_finalize (mantissa extract + round + clamp) - the exact split
  // point identified from Vivado's own timing report as the highest-leverage
  // single pipeline cut in the whole back-end (see mxdotp_fused_engine.sv /
  // mxdotp_final_engine.sv's BACK2/BACK3 stages). lead_pos is signed and
  // sized to hold the -1 sentinel (acc was exactly zero) through
  // ACC_FULL_WIDTH-1 (the maximum valid bit position) with room to spare -
  // 9 bits comfortably covers -256..255 against an actual range of -1..97.
  //----------------------------------------------------------------------------
  typedef struct packed {
    logic                      sign;
    logic signed [8:0]         lead_pos;
    logic [ACC_FULL_WIDTH-1:0] mag;
  } mx_lead_result_t;

  //----------------------------------------------------------------------------
  // acc_find_lead / acc_finalize: acc_to_fp32 (below) split at its leading-
  // one-scan boundary. This is Vivado's OWN evidence, not a guess: the
  // report_timing critical path ran unbroken from rs3_q (an operand
  // register) through place_in_acc/fp32_to_acc, the wide sum, the leading-
  // one scan, and the mantissa/round/clamp logic - 79 logic levels, zero
  // registers - because nothing in the original single-function
  // acc_to_fp32 gave a caller anywhere to put one. Splitting the FUNCTION
  // is what makes a real register possible at the call site: a caller now
  // registers acc_find_lead's result (mx_lead_result_t) before calling
  // acc_finalize on it, instead of the whole chain running in one
  // unbroken combinational cycle.
  //----------------------------------------------------------------------------

  // First half: two's-complement -> sign/magnitude, then the leading-one
  // scan (a simple descending priority scan - unchanged algorithm from
  // before this split; only its position in the pipeline changed).
  function automatic mx_lead_result_t acc_find_lead(input logic signed [ACC_FULL_WIDTH-1:0] acc);
    logic                      sign;
    logic [ACC_FULL_WIDTH-1:0] mag;
    int                        lead_pos;
    int                        i;
    mx_lead_result_t           result;
    begin
      sign = acc[ACC_FULL_WIDTH-1];
      mag  = sign ? (-acc) : acc;  // two's-complement negation, reinterpreted as
                                    // unsigned magnitude via same-width assignment
      lead_pos = -1;
      for (i = ACC_FULL_WIDTH-1; i >= 0; i--) begin
        if (lead_pos == -1 && mag[i]) lead_pos = i;
      end
      result.sign     = sign;
      result.lead_pos = 9'(lead_pos);  // sign-extends -1 correctly into the signed field
      result.mag      = mag;
      return result;
    end
  endfunction

  // Second half: mantissa extraction, sticky/round, exponent clamp - takes
  // an ALREADY-COMPUTED sign/lead_pos/mag (e.g. from a registered
  // acc_find_lead call one cycle earlier) instead of recomputing them from
  // acc directly. Includes the acc==0 special case (here: lead_pos==-1, the
  // sentinel acc_find_lead produces for that input - mag==0 iff acc==0 for
  // a two's-complement value, and the leading-one loop only ever fails to
  // set lead_pos when mag is entirely zero, so this is exactly equivalent
  // to the original function's `if (acc == '0) return 32'd0;`).
  function automatic logic [31:0] acc_finalize(input mx_lead_result_t lr);
    int          lead_pos;
    mx_exp_t     unbiased_exp;
    logic [22:0] mant_out;
    logic        round_bit, sticky_bit;
    logic [23:0] mant_ext;
    logic [7:0]  exp_out;
    int          i;
    begin
      lead_pos = int'(lr.lead_pos);
      if (lead_pos == -1) return 32'd0;

      unbiased_exp = mx_exp_t'(lead_pos) - mx_exp_t'(ACC_ANCHOR);

      mant_out   = '0;
      round_bit  = 1'b0;
      sticky_bit = 1'b0;
      for (i = 0; i < 23; i++) begin
        if (lead_pos - 1 - i >= 0) mant_out[22-i] = lr.mag[lead_pos-1-i];
      end
      if (lead_pos - 24 >= 0) round_bit = lr.mag[lead_pos-24];
      // Fixed-bound loop (ACC_FULL_WIDTH is a compile-time constant), guarded
      // by a data-dependent `if` - the same pattern the mant_out loop just
      // above uses. lead_pos-24 alone was a data-dependent trip count that
      // Vivado couldn't statically unroll ([Synth 8-3380] "loop condition
      // does not converge") - the bound is widened to the provably-safe
      // constant ACC_FULL_WIDTH (mag's own bit range is 0..ACC_FULL_WIDTH-1,
      // so no valid i is ever excluded) and the original bound enforced as a
      // guard instead. Semantically identical, not an approximation: every i
      // beyond the original bound is guarded off and contributes nothing.
      for (i = 0; i < ACC_FULL_WIDTH; i++) begin
        if (i < lead_pos-24 && lr.mag[i]) sticky_bit = 1'b1;
      end

      mant_ext = {1'b0, mant_out};
      if (round_bit && (sticky_bit || mant_out[0])) begin  // round-to-nearest-even
        mant_ext = mant_ext + 24'd1;
      end

      if (mant_ext[23]) begin
        // BUG FIX (found by fp4_golden.py's exact-rational sweep, latent
        // since this function was written): a carry out of the 23-bit
        // fraction is only ever reachable when the pre-round fraction was
        // ALL ONES (1.111...1 rounding up to 2.0), so the renormalized
        // fraction is exactly ZERO. The previous mant_ext[23:1] kept the
        // carry bit as the new fraction MSB, producing 1.5*2^(e+1) instead
        // of 1.0*2^(e+1) - a half-magnitude error. Never hit by the
        // existing test vectors (none round up from an all-ones fraction);
        // affects MXFINAL results only in that corner (MXFP8 moved to its
        // own fp8_finalize, which carries the same fix).
        unbiased_exp = unbiased_exp + mx_exp_t'(1);
        mant_out     = '0;
      end else begin
        mant_out = mant_ext[22:0];
      end

      if ((unbiased_exp + mx_exp_t'(127)) <= mx_exp_t'(0)) begin
        exp_out = 8'd0; mant_out = '0;
      end else if ((unbiased_exp + mx_exp_t'(127)) >= mx_exp_t'(255)) begin
        exp_out = 8'hFE; mant_out = 23'h7FFFFF;
      end else begin
        exp_out = 8'(unbiased_exp + mx_exp_t'(127));
      end

      return {lr.sign, exp_out, mant_out};
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
  //
  // Now just a thin composition of acc_find_lead + acc_finalize above (kept
  // for any caller that doesn't need a pipeline cut here - neither
  // mxdotp_final_engine.sv nor mxdotp_fused_engine.sv call this directly
  // any more; both call the split halves with a real register in between).
  //----------------------------------------------------------------------------
  function automatic logic [31:0] acc_to_fp32(input logic signed [ACC_FULL_WIDTH-1:0] acc);
    return acc_finalize(acc_find_lead(acc));
  endfunction


  //============================================================================
  // MILESTONE: FP4 dedicated sliding-accumulator frame (paper-faithful BACK1)
  //============================================================================
  //
  // Used ONLY by mxdotp_fused_engine.sv (the plain-MXFP4 fast path). The
  // shared ACC_WIDTH=95/ACC_ANCHOR=34 buffer above is UNCHANGED and still
  // used by mxdotp_final_engine.sv (residue path); mxdotp_fp8_fused_engine.sv
  // now has its own sibling frame (FP8_FRAME_WIDTH section at the bottom of
  // this package).
  //
  // The scheme here mirrors the reference implementation's own datapath
  // (fpnew_mxdotp_accumulator_shift / add_accumulator_sop / twos_compl in
  // the paper's released code), restricted to one format:
  //
  //   result = s1*s2 * ( A.B  +  acc/(s1*s2) )
  //
  // The sum-of-products NEVER moves - it lives in a fixed, SCALE-FREE
  // 38-bit frame (bit b = code weight 2^b = value weight 2^(b-2); the *4
  // of fp4_to_code is absorbed by the constant -2 in the final exponent,
  // so the frame has zero hardware fraction bits). Only the ACCUMULATOR
  // slides, shifted by (acc_exp - combined_scale); the scale is re-applied
  // on the result EXPONENT at the very end, never on the wide datapath.
  //
  // Frame layout (38 = FP4_FRAME_WIDTH):
  //   | sign : 1 | acc @ max left shift : 24 | R guard : 1 | unsigned SoP : 12 |
  //   - SoP: |sum of 16 products of 9-bit codes| <= 16*144 = 2304 < 2^12
  //   - acc mantissa (24b) parked at bits [36:13] when acc_shift = 13
  //   - knife-edge exact: (2^24-1)*2^13 + 2304 < 2^37, sign bit never
  //     corrupted, NO saturation logic exists or is needed in-frame
  //
  // When the accumulator shifts RIGHT below frame bit 0, the next 25 bits
  // are kept in a 'remaining' field appended below the frame for the
  // leading-one scan (63-bit extended word = {frame38, remaining25});
  // anything below THAT is a single sticky flag. Floor-truncation of a
  // NEGATIVE word with a positive residue below flips the sticky
  // direction; the reference design's fix (mirrored in fp4_find_lead's
  // neg_adjust input) is to take ~word instead of ~word+1, re-expressing
  // |true| = |word| - eps as (|word|-1) + (1-eps) so "sticky = more
  // magnitude below" stays true.
  //
  // Exactness: bit-exact RNE against an exact-rational reference on 227k+
  // directed/random vectors (fp4_golden.py), including the acc-dominates
  // bypass (proven |SoP contribution| < ulp(acc)/2 strictly, even across
  // binade boundaries) - exact-to-RNE for ANY E8M0 scale pair and ANY
  // normal/subnormal FP32 accumulator, unlike the absolute-window
  // place_in_acc path, which truncates whole scale/magnitude ranges.
  //
  // FP4_REMAIN_BITS was 24 through the first cut of this milestone, which
  // left one bounded corner: when the acc dropped sticky bits below the
  // remaining field (right shift > REMAIN) AND SoP != 0, the extended
  // word's magnitude is bounded below by 2^REMAIN - 2^23 - at REMAIN=24
  // that bound is only 2^23, so the leading one could land as low as bit
  // 23 and the round bit (at bit lead-24) fell inside the already-crushed
  // sticky region -> unrecoverable, deviation exactly 1 ulp. Observed on
  // 0.11% of unconstrained-random vectors (18364/227430 in the corner
  // class; 0 actual failures since the golden model allowed the same
  // corner). Widening to REMAIN=25 makes the same bound 2^25 - 2^23 =
  // 3*2^23 > 2^24, so the leading one is always >= bit 24 and the round
  // bit is always inside the kept word - the corner class no longer
  // exists (0/227430 on the same sweep). The paper's own reference
  // hardware has the REMAIN=24 behavior; this is a deliberate deviation
  // from it to close the gap.
  //----------------------------------------------------------------------------

  localparam int FP4_FRAME_WIDTH   = 38;                    // see layout above
  localparam int FP4_MAX_ACC_SHIFT = FP4_FRAME_WIDTH - 24 - 1;  // = 13
  localparam int FP4_REMAIN_BITS   = 25;                    // DST precision (24->25: closes
                                                             // the 1-ULP catastrophic-cancellation
                                                             // corner - see golden model sweep)
  localparam int FP4_LZC_WIDTH     = FP4_FRAME_WIDTH + FP4_REMAIN_BITS;  // = 63

  // Accumulator-shift constant: mant24 LSB (weight 2^(e-23)) lands at frame
  // bit (e - 21 - scale_exp) since frame bit b has value weight 2^(b-2);
  // with e = E_biased + is_subnormal - 127 this is E + is_sub - 148 - scale.
  localparam int FP4_ACC_SHIFT_CONST = 148;                 // 127 + 23 - 2

  // acc_find_lead/acc_finalize sibling contract, sized for the 63-bit word.
  // lead_pos: -1 sentinel .. 62, signed 8 bits with room to spare.
  typedef struct packed {
    logic                          sign;
    logic signed [7:0]             lead_pos;
    logic [FP4_LZC_WIDTH-1:0]      mag;
  } fp4_lead_result_t;

  // First half (BACK2): two's-complement -> sign/magnitude with the
  // reference design's sticky-direction adjustment, then the leading-one
  // scan. neg_adjust_i must be BACK1's registered
  // (right_shift > FP4_REMAIN_BITS) && acc_sticky && (smant != 0) - i.e.
  // "a nonzero positive residue was floor-truncated below this word".
  function automatic fp4_lead_result_t fp4_find_lead(
    input logic signed [FP4_LZC_WIDTH-1:0] word,
    input logic                            neg_adjust_i
  );
    logic                     sign;
    logic [FP4_LZC_WIDTH-1:0] mag;
    int                       lead_pos;
    int                       i;
    fp4_lead_result_t         result;
    begin
      sign = word[FP4_LZC_WIDTH-1];
      if (sign && neg_adjust_i)
        mag = ~word;        // |word| - 1, with the implied (1-eps) tail below
      else
        mag = sign ? (-word) : word;
      lead_pos = -1;
      for (i = FP4_LZC_WIDTH-1; i >= 0; i--) begin
        if (lead_pos == -1 && mag[i]) lead_pos = i;
      end
      result.sign     = sign;
      result.lead_pos = 8'(lead_pos);
      result.mag      = mag;
      return result;
    end
  endfunction

  // Second half (BACK3): mantissa extraction + round/sticky + exponent
  // clamp on the 63-bit word. Differences from the shared acc_finalize:
  //   - exponent = lead_pos - 27 + scale_exp (25 remaining bits + the -2
  //     code anchor; the scale re-enters HERE, on an exponent wire only)
  //   - acc_sticky_i (bits dropped below the remaining field) ORs into
  //     the sticky term
  //   - carry-out of an all-ones fraction renormalizes to fraction = 0
  //     (acc_finalize was independently patched for the same issue, found by
  //     the same fp4_golden.py sweep - see acc_finalize's BUG FIX comment
  //     above; both functions now agree)
  function automatic logic [31:0] fp4_finalize(
    input fp4_lead_result_t lr,
    input logic             acc_sticky_i,
    input mx_exp_t          scale_exp_i
  );
    int          lead_pos;
    mx_exp_t     unbiased_exp;
    logic [22:0] mant_out;
    logic        round_bit, sticky_bit;
    logic [23:0] mant_ext;
    logic [7:0]  exp_out;
    int          i;
    begin
      lead_pos = int'(lr.lead_pos);
      if (lead_pos == -1) return 32'd0;

      unbiased_exp = mx_exp_t'(lead_pos) - mx_exp_t'(FP4_REMAIN_BITS + 2)
                   + scale_exp_i;

      mant_out   = '0;
      round_bit  = 1'b0;
      sticky_bit = acc_sticky_i;
      for (i = 0; i < 23; i++) begin
        if (lead_pos - 1 - i >= 0) mant_out[22-i] = lr.mag[lead_pos-1-i];
      end
      if (lead_pos - 24 >= 0) round_bit = lr.mag[lead_pos-24];
      // Fixed-bound loop, data-dependent guard inside - same synthesizable
      // pattern as acc_finalize (see its comment for the Vivado history).
      for (i = 0; i < FP4_LZC_WIDTH; i++) begin
        if (i < lead_pos-24 && lr.mag[i]) sticky_bit = 1'b1;
      end

      mant_ext = {1'b0, mant_out};
      if (round_bit && (sticky_bit || mant_out[0])) begin  // round-to-nearest-even
        mant_ext = mant_ext + 24'd1;
      end

      if (mant_ext[23]) begin
        // Carry out of the 23-bit fraction: only reachable from an
        // all-ones fraction, so the renormalized fraction is exactly 0.
        unbiased_exp = unbiased_exp + mx_exp_t'(1);
        mant_out     = '0;
      end else begin
        mant_out = mant_ext[22:0];
      end

      if ((unbiased_exp + mx_exp_t'(127)) <= mx_exp_t'(0)) begin
        exp_out = 8'd0; mant_out = '0;
      end else if ((unbiased_exp + mx_exp_t'(127)) >= mx_exp_t'(255)) begin
        exp_out = 8'hFE; mant_out = 23'h7FFFFF;
      end else begin
        exp_out = 8'(unbiased_exp + mx_exp_t'(127));
      end

      return {lr.sign, exp_out, mant_out};
    end
  endfunction

  //----------------------------------------------------------------------------
  // MXFP8 SLIDING-ACCUMULATOR FRAME (mxdotp_fp8_fused_engine.sv)
  //
  // Sibling of the FP4_FRAME_WIDTH section above, re-derived for the FP8
  // engine's native E4M3/E5M2 decode from the reference implementation's own
  // constants (fpnew_mxdotp_multi_pkg.sv: ANCHOR / FIXED_SUM_WIDTH /
  // MAX_ACC_SHIFT_AMOUNT and fpnew_mxdotp_accumulator_shift). This RETIRES
  // the engine's previous use of the absolute-window place_in_acc /
  // fp32_to_acc / acc_find_lead / acc_finalize path, which mis-read the
  // paper's factored-form sizing (ANCHOR=34 is the fractional point of a
  // scale-FREE product frame, s1*s2*(A.B + acc/(s1*s2)) - NOT an absolute
  // fixed-point anchor) and consequently had a hard |value| window of
  // ~[2^-11, 2^60] outside which accumulators/products were truncated or
  // saturated, plus round/sticky loss for any contribution below the window
  // floor. The sliding frame has no such window: exact-to-RNE for ANY E8M0
  // scale pair and ANY normal/subnormal FP32 accumulator.
  //
  // Frame layout (95 = FP8_FRAME_WIDTH; anchor 32: bit b = value weight
  // 2^(b-32), so the smallest possible product - E5M2 subnormal^2 = 2^-32 -
  // lands exactly on bit 0 with zero fraction lost):
  //   | sign : 1 | acc @ max left shift : 24 | R guard : 1 | unsigned SoP : 69 |
  //   - SoP: 8 products, each |mag| <= 15*15 = 225 at frame shift <= 60
  //     (element exponent sum <= 28, incl. max-exponent NaN/Inf encodings
  //     decoded as finite per Known Limitation #3), so
  //     |SoP| <= 8 * 49 * 2^60 = 392*2^60 < 2^69 (the E5M2 bound dominates;
  //     E4M3's is 8 * 225 * 2^42 << that).
  //   - acc mantissa (24b) parked at bits [93:70] when acc_shift = 70
  //   - knife-edge exact: (2^24-1)*2^70 + 392*2^60 < 2^94, sign bit never
  //     corrupted, NO saturation logic exists or is needed in-frame.
  //   - acc-dominates bypass (acc_shift > 70): ulp(acc)/2 >= 2^69 frame
  //     units even across a binade boundary, and |SoP| < 2^68.62 - strict,
  //     though only by a factor ~1.3 (document-worthy; the FP4 engine's
  //     margin is wider).
  //
  // The reference's ANCHOR=34 vs our 32: their per-element decode pads
  // E5M2's 2-bit mantissa into a 3-bit super-mantissa (mag*2, exp-1 - same
  // value), so their frame is our frame shifted 2 bits; both come out
  // 95 bits wide and the schemes are value-identical.
  //
  // FP8_REMAIN_BITS = 25, deviating from the reference's DST_PRECISION_BITS
  // = 24 exactly as the FP4 engine does and for the same closed-form reason
  // (see the FP4 section's REMAIN history note): at 24 the extended word's
  // magnitude under dropped-sticky cancellation is bounded below by only
  // 2^23, leaving the round bit unrecoverable (1-ulp deviation); at 25 the
  // bound is 3*2^23 > 2^24, so the leading one is always >= bit 24 and the
  // round bit is always inside the kept word. Golden model: fp8_golden.py
  // (325k+ vectors across two seeds vs an exact-rational reference,
  // 0 failures, 0 corner-case deviations, bypass exactness proven
  // per-vector as |exact - acc| < ulp(acc)/2 strictly).
  //----------------------------------------------------------------------------

  localparam int FP8_FRAME_ANCHOR   = 32;                   // see layout above
  localparam int FP8_SOP_WIDTH      = 70;                   // signed; |SoP| < 2^69
  localparam int FP8_FRAME_WIDTH    = 95;                   // 1 + 24 + 1 + 69
  localparam int FP8_MAX_ACC_SHIFT  = FP8_FRAME_WIDTH - 24 - 1;            // = 70
  localparam int FP8_REMAIN_BITS    = 25;                   // DST precision + corner closure
  localparam int FP8_LZC_WIDTH      = FP8_FRAME_WIDTH + FP8_REMAIN_BITS;   // = 120

  // Accumulator-shift constant: mant24 LSB (weight 2^(e-23)) lands at frame
  // bit (e - 23 + 32) = e + 9 since frame bit b has value weight 2^(b-32);
  // with e = E_biased + is_subnormal - 127 this is E + is_sub - 118 - scale.
  localparam int FP8_ACC_SHIFT_CONST = 118;                 // 127 + 23 - 32

  // fp8_find_lead/fp8_finalize sibling contract, sized for the 120-bit word.
  // lead_pos: -1 sentinel .. 119, signed 8 bits (-128..127) with room.
  typedef struct packed {
    logic                          sign;
    logic signed [7:0]             lead_pos;
    logic [FP8_LZC_WIDTH-1:0]      mag;
  } fp8_lead_result_t;

  // First half (BACK2): two's-complement -> sign/magnitude with the
  // reference design's sticky-direction adjustment, then the leading-one
  // scan. neg_adjust_i must be BACK1's registered
  // (right_shift > FP8_REMAIN_BITS) && acc_sticky && (smant != 0) - i.e.
  // "a nonzero positive residue was floor-truncated below this word".
  // Identical algorithm to fp4_find_lead; duplicated because SV package
  // functions cannot be width-parameterized (same sibling convention as
  // fp4_find_lead itself vs acc_find_lead).
  function automatic fp8_lead_result_t fp8_find_lead(
    input logic signed [FP8_LZC_WIDTH-1:0] word,
    input logic                            neg_adjust_i
  );
    logic                     sign;
    logic [FP8_LZC_WIDTH-1:0] mag;
    int                       lead_pos;
    int                       i;
    fp8_lead_result_t         result;
    begin
      sign = word[FP8_LZC_WIDTH-1];
      if (sign && neg_adjust_i)
        mag = ~word;        // |word| - 1, with the implied (1-eps) tail below
      else
        mag = sign ? (-word) : word;
      lead_pos = -1;
      for (i = FP8_LZC_WIDTH-1; i >= 0; i--) begin
        if (lead_pos == -1 && mag[i]) lead_pos = i;
      end
      result.sign     = sign;
      result.lead_pos = 8'(lead_pos);
      result.mag      = mag;
      return result;
    end
  endfunction

  // Second half (BACK3): mantissa extraction + round/sticky + exponent
  // clamp on the 120-bit word. Same structure as fp4_finalize; only the
  // exponent constant differs:
  //   - exponent = lead_pos - 57 + scale_exp (25 remaining bits + the
  //     32-bit frame anchor; the scale re-enters HERE, on an exponent
  //     wire only)
  //   - acc_sticky_i (bits dropped below the remaining field) ORs into
  //     the sticky term
  //   - carry-out of an all-ones fraction renormalizes to fraction = 0
  function automatic logic [31:0] fp8_finalize(
    input fp8_lead_result_t lr,
    input logic             acc_sticky_i,
    input mx_exp_t          scale_exp_i
  );
    int          lead_pos;
    mx_exp_t     unbiased_exp;
    logic [22:0] mant_out;
    logic        round_bit, sticky_bit;
    logic [23:0] mant_ext;
    logic [7:0]  exp_out;
    int          i;
    begin
      lead_pos = int'(lr.lead_pos);
      if (lead_pos == -1) return 32'd0;

      unbiased_exp = mx_exp_t'(lead_pos)
                   - mx_exp_t'(FP8_REMAIN_BITS + FP8_FRAME_ANCHOR)
                   + scale_exp_i;

      mant_out   = '0;
      round_bit  = 1'b0;
      sticky_bit = acc_sticky_i;
      for (i = 0; i < 23; i++) begin
        if (lead_pos - 1 - i >= 0) mant_out[22-i] = lr.mag[lead_pos-1-i];
      end
      if (lead_pos - 24 >= 0) round_bit = lr.mag[lead_pos-24];
      // Fixed-bound loop, data-dependent guard inside - same synthesizable
      // pattern as acc_finalize (see its comment for the Vivado history).
      for (i = 0; i < FP8_LZC_WIDTH; i++) begin
        if (i < lead_pos-24 && lr.mag[i]) sticky_bit = 1'b1;
      end

      mant_ext = {1'b0, mant_out};
      if (round_bit && (sticky_bit || mant_out[0])) begin  // round-to-nearest-even
        mant_ext = mant_ext + 24'd1;
      end

      if (mant_ext[23]) begin
        // Carry out of the 23-bit fraction: only reachable from an
        // all-ones fraction, so the renormalized fraction is exactly 0.
        unbiased_exp = unbiased_exp + mx_exp_t'(1);
        mant_out     = '0;
      end else begin
        mant_out = mant_ext[22:0];
      end

      if ((unbiased_exp + mx_exp_t'(127)) <= mx_exp_t'(0)) begin
        exp_out = 8'd0; mant_out = '0;
      end else if ((unbiased_exp + mx_exp_t'(127)) >= mx_exp_t'(255)) begin
        exp_out = 8'hFE; mant_out = 23'h7FFFFF;
      end else begin
        exp_out = 8'(unbiased_exp + mx_exp_t'(127));
      end

      return {lr.sign, exp_out, mant_out};
    end
  endfunction


  //----------------------------------------------------------------------------
  // M2XFP4 SLIDING-ACCUMULATOR FRAME (mxdotp_m2xfp4_fused_engine.sv)
  //
  // Third sibling of the FP4_FRAME_WIDTH / FP8_FRAME_WIDTH sections above,
  // same structure and same register discipline, different constants. Sized
  // from M2XFP (ASPLOS'26, arXiv:2601.19213) - metadata-augmented MXFP4.
  //
  // WHAT M2XFP4 IS. Elements are ordinary MXFP4 (E2M1). The 16-element
  // dual-read operand pair is split into 2 subgroups of 8, and 8 bits of
  // per-instruction metadata ride in rs3's previously-reserved field:
  //
  //   rs1 = ACTIVATIONS, Elem-EM. 2 bits per subgroup extend the mantissa of
  //         the SINGLE largest-magnitude element ("top-1") to E2M3. Every
  //         other element in the subgroup stays plain E2M1, uncorrected.
  //   rs2 = WEIGHTS, Sg-EM. 2 bits per subgroup refine that subgroup's
  //         effective scale to (1 + k/4)*2^E, k in {0,1,2,3} - i.e.
  //         multipliers {1.0, 1.25, 1.5, 1.75}. Chosen offline by MSE search
  //         at quantization time; NO on-chip search, and no multiplier - it
  //         is a shift-and-add on the subgroup's partial sum (paper Sec 5.4).
  //
  // The role split is ASYMMETRIC and is the paper's central empirical finding
  // (Sec 4.3), not an implementation convenience: weights are static and can
  // afford an offline adaptive-scale search; activations are dynamic and need
  // a deterministic, fixed-shared-scale encoding. This is the first encoding
  // in this ISA where rs1/rs2 order carries meaning - see the funct2 section.
  //
  // ELEM-EM DECODE - THE PART THAT IS NOT "APPEND 2 MANTISSA BITS".
  // The stored 6-bit datum for the top-1 element is {fp4_bits[3:0],meta[1:0]}
  // where fp4_bits is FloatToBits(|x_fp4|) - the encoding operates on
  // MAGNITUDES only (paper Alg. 1 lines 13-14), so the sign rides along in
  // the FP4 nibble and is never disturbed. The decode is that pattern
  // MINUS ONE, read as E2M3 (bias 1, subnormal = m/8):
  //
  //     X'_mag_bits = {fp4_nib[2:0], meta[1:0]} - 1        // 5-bit E2M3 mag
  //
  // The -1 is the paper's bias-clamp encoding (Alg. 1 steps 6-8): the encoder
  // adds 1 to the E2M3 pattern and clamps it into [fp4_bits||00, fp4_bits||11]
  // so the top-1's high bits stay identical to its FP4 value and it therefore
  // REMAINS the subgroup max after substitution.
  //
  //   CONSEQUENCE: with meta == 00 the decrement borrows out of the mantissa
  //   into the exponent field, so the top-1 element's BASELINE value is NOT
  //   the stored FP4 code - it is (code-1) with mantissa 11. Reading Sec 5.4's
  //   "X' = X + dX, so W*X' = W*X + W*dX" as "the FP4 MAC is reused unchanged
  //   and a correction term is added alongside" is a misreading: that split is
  //   POST-decrement. The paper needs it only because its Top-1 Decode Unit is
  //   physically separate from the systolic PE array (Fig. 10 forwards
  //   (val,idx) to Fig. 11's PE, which then needs an 8:1 select on the W side
  //   to feed an auxiliary MAC). This engine decodes all 16 lanes in parallel,
  //   so nothing needs selecting and no auxiliary MAC exists: the top-1's lane
  //   simply carries a wider code. See the code convention below.
  //
  //   The all-zero pattern {fp4_nib[2:0],meta} == 5'b00000 would borrow below
  //   zero. It is CLAMPED to 0 rather than wrapping. The encoder provably
  //   cannot emit it (fp6_bits+1 >= 1, and clamping into [0,3] when
  //   fp4_bits==0 can only yield >= 1 - asserted in m2_golden.py's encoder
  //   conformance sweep), so this is a totality guard against garbage
  //   metadata, not a reachable path.
  //
  // TOP-1 SELECTION - re-derived on-chip, deterministically, NOT transmitted.
  // This is what keeps the metadata budget at 8 bits: no index bits are sent.
  // Rule (paper Alg. 1 lines 7-10): select on |quantized FP4 value|, ties
  // broken by LOWEST index. The hardware and the offline quantizer MUST agree
  // exactly, so this is a hard conformance requirement on the quantizer, in
  // the same class as how AR is produced for the residue format.
  //   - The paper's own Fig. 10 CONTRADICTS its Alg. 1 here: the figure's
  //     FP4->UINT lookup table ranks +6 above -6, so they never tie and the
  //     sign decides; Alg. 1 takes abs() first, so they tie and the index
  //     decides. We follow Alg. 1, because that is the rule the quantizer
  //     implements and the RTL must match the quantizer.
  //   - E2M1 magnitude codes are monotonic in value, so the comparison is a
  //     plain 3-bit unsigned compare. The paper's 16-entry FP4->UINT LUT
  //     (Fig. 10) exists to make its sign-inclusive ordering monotonic and is
  //     unnecessary under the Alg. 1 rule. Comparator tree -> equality mask ->
  //     priority encode (lowest index) -> one-hot, and the priority encoder IS
  //     Alg. 1's min(C_idx) tie-break, for free.
  //
  // CODE CONVENTION (this is where the anchor comes from).
  //   weights      : code_w = 2*W    (fp4_to_code, unchanged), |code_w| <= 12
  //   activations  : code_x = 8*X'   , |code_x| <= 56  -> 7-bit signed
  //   plain lanes  : code_x = 4*fp4_to_code(nib)  (8*X == 4*(2*X)), exact
  // so a product code_w*code_x = 16*W*X' is in units of 1/16, |prod| <= 672
  // -> PROD_WIDTH 11. Sg-EM then takes the subgroup partial sum P (units of
  // 1/16) to (1 + k/4)*P, which in units of 1/64 is the EXACT integer
  // P*(4+k) - a 2-place and 1-place shift plus adds, no multiplier, no
  // truncation. That is why the frame anchor is 6 here and 2 for MXFP4: the
  // frame LSB is 2^-6, not 2^-2. Everything below stays exact; there is no
  // fraction to define sticky semantics for.
  //
  // Frame layout (43 = M2_FRAME_WIDTH):
  //   | sign : 1 | acc @ max left shift : 24 | R guard : 1 | unsigned SoP : 17 |
  //   - SoP sizing proof (deliberately loose, easy to check by hand):
  //       |SoP| <= 2 subgroups * 8 elements * (12*56) * 7 = 75264 < 2^17
  //     The tight bound is 65856 (the top-1 caps the other 7 lanes at 6.0, so
  //     a subgroup is 7*(12*48) + 1*(12*56) = 4704, not 8*672 = 5376). Both
  //     give the same 17-bit field, so the loose bound is used as the proof.
  //   - acc mantissa (24b) parked at bits [41:18] when acc_shift = 18
  //   - knife-edge exact: (2^24-1)*2^18 + 75264 = 2^42 - 186880 < 2^42, sign
  //     bit never corrupted, NO saturation logic exists or is needed in-frame
  //   - min nonzero |SoP| is exactly 1 frame unit (e.g. P0=+2,k0=0 and
  //     P1=-1,k1=3 give 2*4 + (-1)*7 = 1) - load-bearing for M2_REMAIN_BITS
  //     below, and a directed vector in m2_golden.py.
  //
  // M2_REMAIN_BITS = 25, IDENTICAL to FP4's and for exactly the same reason,
  // which is worth stating because it is NOT a coincidence: when the acc drops
  // sticky bits below the remaining field (right shift > REMAIN) AND SoP != 0,
  // the extended word's magnitude is bounded below by 2^REMAIN - 2^23 (the acc
  // is right-shifted far enough that its visible leading one sits at or below
  // bit 22, while SoP != 0 contributes at least 1 frame unit = 2^REMAIN). That
  // bound depends ONLY on the accumulator's 24-bit mantissa - not on the
  // anchor, not on the SoP width. So the same R >= 25 closure that v8 derived
  // for MXFP4 transfers here unchanged: 2^25 - 2^23 = 3*2^23 > 2^24, the
  // leading one is always >= bit 24, and the round bit is always recoverable.
  // m2_golden.py expects ZERO vectors in that corner class (unlike FP4 at
  // REMAIN=24) and fails the run if any appear.
  //
  // Exactness: bit-exact RNE against an exact-rational reference on 259,781
  // vectors at each of two independent seeds (m2_golden.py; 0 failures, 0
  // corner-class deviations), including the acc-dominates bypass (proven
  // |SoP contribution| < ulp(acc)/2 strictly) and an encoder-conformance
  // sweep that asserts |X'| <= 7, X' in (1/8)Z, and encode/decode round-trip
  // against the paper's own Fig. 8 worked example.
  //
  // Bypass margin at shift 19 (acc_shift > M2_MAX_ACC_SHIFT): half-ulp across
  // a binade boundary = 2^17 = 131072 frame units, vs |SoP|max = 75264 -> a
  // factor of 1.74. Comparable to MXFP4's own 1.78 at its analogous boundary,
  // and far more comfortable than MXFP8's 1.3. If a future format widens the
  // SoP bound, re-check this number first.
  //----------------------------------------------------------------------------

  // Elem-EM / Sg-EM element counts. MX_K=16 elements, 2 subgroups of 8.
  //
  // MX_K=16 here is elements-per-OPERAND, not the OCP scaling block (=32) -
  // see the MX_K definition above for why that distinction matters and how a
  // 32-element block maps onto two instructions. Both metadata mechanisms are
  // per-subgroup-of-8, so neither is block-size dependent.
  localparam int M2_SUBGROUPS    = 2;
  localparam int M2_SUBGROUP_LEN = MX_K / M2_SUBGROUPS;     // = 8

  // Activation code width: code_x = 8*X', |X'| <= 7.0 -> |code_x| <= 56.
  localparam int M2_XCODE_WIDTH = 7;                        // signed
  // Product code_w*code_x, |.| <= 12*56 = 672 -> 11 bits signed.
  localparam int M2_PROD_WIDTH  = 11;
  // Subgroup partial sum P (units of 1/16), |P| <= 4704 (tight) -> 14b signed.
  localparam int M2_PSUM_WIDTH  = 14;
  // SoP = sum of P_j*(4+k_j) (units of 1/64), |SoP| <= 75264 < 2^17 -> 18b
  // signed. Same relationship FP4 has between its 12-bit in-frame SoP field
  // and its 13-bit signed PSUM_WIDTH: one extra bit for the sign.
  localparam int M2_SOP_SIGNED_WIDTH = 18;

  localparam int M2_FRAME_WIDTH   = 43;                     // see layout above
  localparam int M2_MAX_ACC_SHIFT = M2_FRAME_WIDTH - 24 - 1; // = 18
  localparam int M2_REMAIN_BITS   = 25;                     // see closure proof above
  localparam int M2_LZC_WIDTH     = M2_FRAME_WIDTH + M2_REMAIN_BITS;  // = 68
  localparam int M2_FRAME_ANCHOR  = 6;                      // frame bit b weight 2^(b-6)
  localparam int M2_SOP_WIDTH     = 17;                     // unsigned SoP field

  // Accumulator-shift constant: mant24 LSB (weight 2^(e-23)) lands at frame
  // bit (e - 17 - scale_exp) since frame bit b has value weight 2^(b-6);
  // with e = E_biased + is_subnormal - 127 this is E + is_sub - 144 - scale.
  localparam int M2_ACC_SHIFT_CONST = 144;                  // 127 + 23 - 6

  // rs3 packing (upper 32 bits, from rs3+1) for MX_FMT_M2XFP4:
  //   [63:57] reserved (7 bits still spare)
  //   [56:53] sg_em   : {subgroup1[1:0], subgroup0[1:0]}   - rs2 / weights
  //   [52:49] elem_em : {subgroup1[1:0], subgroup0[1:0]}   - rs1 / activations
  //   [48]    reserved - kept uniformly as the sub-format select bit, SYMMETRIC
  //           with mxdotp_fp8_fused_engine.sv's use of rs3[48] for E4M3/E5M2.
  //           Deliberately NOT consumed by metadata: keeping one bit meaning
  //           the same thing across every fused format is worth more than the
  //           8th metadata bit, and it leaves M2XFP4 a sub-variant escape
  //           hatch (e.g. an Elem-EM-top2 mode) at no cost today.
  //   [47:40] b_scale, [39:32] a_scale   - unchanged from MXFP4/MXFP8 MXFUSED
  //   [31:0]  old_acc (lower 32, from rs3) - unchanged
  localparam int M2_META_LSB      = 49;
  localparam int M2_ELEM_EM_LSB   = 49;                     // [52:49]
  localparam int M2_SG_EM_LSB     = 53;                     // [56:53]

  // acc_find_lead/acc_finalize sibling contract, sized for the 68-bit word.
  // lead_pos: -1 sentinel .. 67, signed 8 bits with room to spare.
  typedef struct packed {
    logic                          sign;
    logic signed [7:0]             lead_pos;
    logic [M2_LZC_WIDTH-1:0]       mag;
  } m2_lead_result_t;

  // Elem-EM decode: the top-1 element's 5-bit E2M3 magnitude code. See the
  // "ELEM-EM DECODE" note above - this is a decrement, not a concatenation,
  // and the 5'b00000 input is clamped rather than allowed to borrow.
  //
  // Takes the FP4 nibble's 3-bit MAGNITUDE, not the whole nibble, because the
  // paper's encoding is defined on FloatToBits(|x|) (Alg. 1 lines 13-14): the
  // sign never participates and is re-applied by m2_x_to_code. Making that
  // explicit in the signature is deliberate - it is the property that
  // guarantees the decrement can never disturb the sign bit.
  function automatic logic [4:0] m2_x_mag_bits(
    input logic [2:0] nib_mag,
    input logic [1:0] meta
  );
    logic [4:0] v;
    begin
      v = {nib_mag, meta};
      return (v == 5'b00000) ? 5'b00000 : (v - 5'b00001);
    end
  endfunction

  // Elem-EM code: code_x = 8*X', signed, |.| <= 56. E2M3 with bias 1:
  //   e == 0 : mag = m/8            -> code = m
  //   e >  0 : mag = (1 + m/8)*2^(e-1) -> code = (8 + m) << (e-1)
  function automatic logic signed [M2_XCODE_WIDTH-1:0] m2_x_to_code(
    input logic [3:0] nib,
    input logic [1:0] meta
  );
    logic [4:0]                        v;
    logic [1:0]                        e;
    logic [2:0]                        m;
    logic [M2_XCODE_WIDTH-1:0]         mag;
    begin
      v = m2_x_mag_bits(nib[2:0], meta);
      e = v[4:3];
      m = v[2:0];
      // Widen BEFORE shifting - {1'b1,m} is only 4 bits, and (8+m)<<2 needs 7.
      mag = (e == 2'd0) ? M2_XCODE_WIDTH'(m)
                        : (M2_XCODE_WIDTH'({1'b1, m}) << (e - 2'd1));
      return nib[3] ? -signed'(mag) : signed'(mag);
    end
  endfunction

  // Plain (non-top-1) activation lane: code_x = 8*X == 4*(2*X) == 4*fp4_code.
  function automatic logic signed [M2_XCODE_WIDTH-1:0] m2_plain_to_code(
    input logic [3:0] nib
  );
    begin
      return M2_XCODE_WIDTH'(fp4_to_code(nib)) <<< 2;
    end
  endfunction

  //----------------------------------------------------------------------------
  // NARROW-MULTIPLIER DECOMPOSITION (added post-synthesis, see below).
  //
  // The original FRONT (above/mxdotp_m2xfp4_fused_engine.sv v1) typed EVERY
  // lane's activation code at M2_XCODE_WIDTH=7 bits uniformly, so all 16 of a
  // subgroup-pair's multipliers synthesized at 7x5 even though only the ONE
  // actual top-1 lane per subgroup ever needs more than 5 bits: a plain lane's
  // code (4*fp4_to_code(nib)) is PROVABLY always a multiple of 4 (its low 2
  // bits are always zero), so it only ever needs CODE_WIDTH=5 bits of real
  // information. A synthesis timing report (10ns/100MHz constraint) showed
  // this was the dominant cost: FRONT's worst slack (6.57ns) was ~1.58ns
  // tighter than the equivalent stage in mxdotp_fused_engine.sv's own FRONT
  // (8.15ns), by far the largest gap of any pipeline stage - BACK1/2/3's
  // gaps against their own FP4 equivalents were all under 0.2ns, i.e. noise-
  // level, not structural.
  //
  // Fix: use the distributive identity explicitly (this is the paper's own
  // Fig. 11 split, Sec 5.4's W*X' = W*X + W*dX - deliberately not used in v1
  // because full-parallel-lane-decode made it seem unnecessary; the timing
  // data says otherwise):
  //
  //   W * X'_top1 = W * X_plain + W * (X'_top1 - X_plain)
  //               = baseline (5x5, ALL 16 lanes, tree-INDEPENDENT, identical
  //                 structure/speed to mxdotp_fused_engine.sv's own FRONT)
  //               + correction (ONE 5x5 multiply PER SUBGROUP, not per lane -
  //                 gated behind the top-1 tree, but narrow and singular
  //                 instead of wide and per-lane)
  //
  // delta_code(nib,meta) := m2_x_to_code(nib,meta) - 4*fp4_to_code(nib), i.e.
  // 8*(X'_top1 - X_plain), computed and verified exhaustively over all 8 FP4
  // magnitudes x 4 meta values (32 combinations): every value is in
  // {-8,-4,-2,-1,0,1,2,4,8} - proof that quantifies the paper's own Sec 4.4
  // observation ("a value quantized to FP4 x has only five potential E2M3
  // correspondents") into an exact, small, sign-antisymmetric correction.
  // Implemented as a direct 32-entry lookup (not by computing the full
  // exponent-dependent m2_x_to_code barrel-shift for all 8 lanes and then
  // subtracting - that would just relocate the expensive computation, not
  // remove it). M2_DELTA_WIDTH=5 holds the full +/-8 range; the correction
  // product (CODE_WIDTH=5 x M2_DELTA_WIDTH=5, |.|<=12*8=96) needs
  // M2_CORR_PROD_WIDTH=8 bits signed.
  //----------------------------------------------------------------------------

  localparam int M2_DELTA_WIDTH      = 5;   // signed, holds the full +/-8 delta range
  localparam int M2_CORR_PROD_WIDTH  = 8;   // b_code(5) x delta_code(5), |.| <= 96

  // Magnitude-only delta lookup: mag3 = nib[2:0] (the E2M1 magnitude field,
  // sign excluded - delta is exactly antisymmetric in sign, verified over all
  // 16x4=64 (nib,meta) combinations). 32-entry case, generated directly from
  // (and checked bit-for-bit against) the exhaustive sweep in m2_golden.py -
  // not hand-derived, to eliminate transcription risk on the one part of this
  // engine that has no other independent check until the full-engine
  // regression runs.
  function automatic logic signed [M2_DELTA_WIDTH-1:0] m2_delta_mag(
    input logic [2:0] mag3,
    input logic [1:0] meta
  );
    begin
      case ({mag3, meta})
        5'b000_00: return  5'sd0;
        5'b000_01: return  5'sd0;
        5'b000_10: return  5'sd1;
        5'b000_11: return  5'sd2;
        5'b001_00: return -5'sd1;
        5'b001_01: return  5'sd0;
        5'b001_10: return  5'sd1;
        5'b001_11: return  5'sd2;
        5'b010_00: return -5'sd1;
        5'b010_01: return  5'sd0;
        5'b010_10: return  5'sd1;
        5'b010_11: return  5'sd2;
        5'b011_00: return -5'sd1;
        5'b011_01: return  5'sd0;
        5'b011_10: return  5'sd1;
        5'b011_11: return  5'sd2;
        5'b100_00: return -5'sd1;
        5'b100_01: return  5'sd0;
        5'b100_10: return  5'sd2;
        5'b100_11: return  5'sd4;
        5'b101_00: return -5'sd2;
        5'b101_01: return  5'sd0;
        5'b101_10: return  5'sd2;
        5'b101_11: return  5'sd4;
        5'b110_00: return -5'sd2;
        5'b110_01: return  5'sd0;
        5'b110_10: return  5'sd4;
        5'b110_11: return  5'sd8;
        5'b111_00: return -5'sd4;
        5'b111_01: return  5'sd0;
        5'b111_10: return  5'sd4;
        5'b111_11: return  5'sd8;
        default:   return  5'sd0;   // unreachable (5-bit case is exhaustive)
      endcase
    end
  endfunction

  // Full delta, sign re-applied from the nibble's own sign bit - same
  // convention as m2_x_to_code's own `nib[3] ? -mag : mag`.
  function automatic logic signed [M2_DELTA_WIDTH-1:0] m2_delta_code(
    input logic [3:0] nib,
    input logic [1:0] meta
  );
    logic signed [M2_DELTA_WIDTH-1:0] mag;
    begin
      mag = m2_delta_mag(nib[2:0], meta);
      return nib[3] ? -mag : mag;
    end
  endfunction


  // First half (BACK2): identical in structure to fp4_find_lead, sized for
  // the 68-bit word. neg_adjust_i must be BACK1's registered
  // (right_shift > M2_REMAIN_BITS) && acc_sticky && (smant != 0).
  function automatic m2_lead_result_t m2_find_lead(
    input logic signed [M2_LZC_WIDTH-1:0] word,
    input logic                           neg_adjust_i
  );
    logic                    sign;
    logic [M2_LZC_WIDTH-1:0] mag;
    int                      lead_pos;
    int                      i;
    m2_lead_result_t         result;
    begin
      sign = word[M2_LZC_WIDTH-1];
      if (sign && neg_adjust_i)
        mag = ~word;        // |word| - 1, with the implied (1-eps) tail below
      else
        mag = sign ? (-word) : word;
      lead_pos = -1;
      for (i = M2_LZC_WIDTH-1; i >= 0; i--) begin
        if (lead_pos == -1 && mag[i]) lead_pos = i;
      end
      result.sign     = sign;
      result.lead_pos = 8'(lead_pos);
      result.mag      = mag;
      return result;
    end
  endfunction

  // Second half (BACK3): identical in structure to fp4_finalize, sized for
  // the 68-bit word. Exponent = lead_pos - 31 + scale_exp (25 remaining bits
  // + the -6 code anchor); the scale re-enters HERE, on an exponent wire only.
  function automatic logic [31:0] m2_finalize(
    input m2_lead_result_t lr,
    input logic            acc_sticky_i,
    input mx_exp_t         scale_exp_i
  );
    int          lead_pos;
    mx_exp_t     unbiased_exp;
    logic [22:0] mant_out;
    logic        round_bit, sticky_bit;
    logic [23:0] mant_ext;
    logic [7:0]  exp_out;
    int          i;
    begin
      lead_pos = int'(lr.lead_pos);
      if (lead_pos == -1) return 32'd0;

      unbiased_exp = mx_exp_t'(lead_pos)
                   - mx_exp_t'(M2_REMAIN_BITS + M2_FRAME_ANCHOR)
                   + scale_exp_i;

      mant_out   = '0;
      round_bit  = 1'b0;
      sticky_bit = acc_sticky_i;
      for (i = 0; i < 23; i++) begin
        if (lead_pos - 1 - i >= 0) mant_out[22-i] = lr.mag[lead_pos-1-i];
      end
      if (lead_pos - 24 >= 0) round_bit = lr.mag[lead_pos-24];
      // Fixed-bound loop, data-dependent guard inside - same synthesizable
      // pattern as fp4_finalize/fp8_finalize.
      for (i = 0; i < M2_LZC_WIDTH; i++) begin
        if (i < lead_pos-24 && lr.mag[i]) sticky_bit = 1'b1;
      end

      mant_ext = {1'b0, mant_out};
      if (round_bit && (sticky_bit || mant_out[0])) begin  // round-to-nearest-even
        mant_ext = mant_ext + 24'd1;
      end

      if (mant_ext[23]) begin
        // Carry out of the 23-bit fraction: only reachable from an
        // all-ones fraction, so the renormalized fraction is exactly 0.
        unbiased_exp = unbiased_exp + mx_exp_t'(1);
        mant_out     = '0;
      end else begin
        mant_out = mant_ext[22:0];
      end

      if ((unbiased_exp + mx_exp_t'(127)) <= mx_exp_t'(0)) begin
        exp_out = 8'd0; mant_out = '0;
      end else if ((unbiased_exp + mx_exp_t'(127)) >= mx_exp_t'(255)) begin
        exp_out = 8'hFE; mant_out = 23'h7FFFFF;
      end else begin
        exp_out = 8'(unbiased_exp + mx_exp_t'(127));
      end

      return {lr.sign, exp_out, mant_out};
    end
  endfunction


  //----------------------------------------------------------------------------
  // MXFINAL SLIDING-ACCUMULATOR FRAME (mxdotp_final_engine.sv)
  //
  // Fourth sibling of the FP4_FRAME_WIDTH / FP8_FRAME_WIDTH / M2_FRAME_WIDTH
  // sections above, re-derived for the MXFINAL residue accumulate. This
  // REPLACES the old absolute-window path (place_in_acc x2 + fp32_to_acc into
  // the ACC_WIDTH=95 / ACC_ANCHOR=34 buffer), which truncated whole
  // scale/magnitude ranges - the same class of bug the plain-MXFP4 sliding
  // frame fixed, now closed for MXFINAL too. Validated bit-exact RNE against
  // an exact-rational reference (mxfinal_golden.py) across 745k+ directed /
  // random / analytically-derived-worst-corner / acc_shift-boundary vectors,
  // 0 real mismatches, on multiple seeds.
  //
  // WHAT MXFINAL COMPUTES:
  //   result = (Sa*Sw)*p1 + (Sar*Sw)*p2 + acc
  //     p1 = sum(code_a *code_b ), p2 = sum(code_ar*code_b), each 13b signed,
  //          |p1|,|p2| <= 2304 < 2^12  (PSUM_WIDTH, code = 2*value)
  //     Sa,Sar,Sw = E8M0 raw bytes; Sar <= Sa is PROVEN (residue_scale_check
  //          against the microxcaling reference: floor(log2(amax))-emax scale
  //          selection guarantees the residual block scale never exceeds the
  //          primary's, with >= 2 binades of margin).
  //
  // THE FRAME (single sliding-accumulator, anchor selected by p1==0 - NOT a
  // runtime leading-bit comparator; just one mux):
  //   anchor = Sa*Sw   (if p1 != 0)  -> F = p1 frame-resident (shift 0),
  //                                      SECOND = p2 slides down by delta=Sa-Sar
  //   anchor = Sar*Sw  (if p1 == 0)  -> F = p2 frame-resident (shift 0),
  //                                      SECOND absent
  //   acc always slides (acc_shift = E + is_sub - MXF_ACC_SHIFT_CONST - anchor),
  //   exactly as in the plain-MXFP4 frame.
  //   F is ALWAYS exact (pure left shift). SECOND and acc EACH use a per-term
  //   clamped right shift: the shift is clamped at THAT TERM'S OWN BIT WIDTH
  //   (13 for the 13b product term, 25 for the 25b signed acc mantissa), NOT
  //   at REMAIN - beyond a term's own width an arithmetic right shift is a
  //   proven no-op (pure sign bits), so clamping there is lossless. REMAIN
  //   only sets where word-bit-0 sits relative to F; it does NOT gate any
  //   individual term's precision. Sticky is set whenever ANY bits are
  //   genuinely dropped (v != contrib<<clamped_rs), regardless of whether the
  //   required shift was <= own_width or had to be clamped.
  //   Scale re-enters ONLY on the result exponent (mxf_finalize), never on the
  //   wide datapath.
  //
  // BYPASSES (each mirrors a plain-MXFP4 bypass; the engine, not these
  // functions, applies them and returns old_acc verbatim):
  //   (1) acc_shift > MXF_MAX_ACC_SHIFT     : acc dominates. |F+SECOND at the
  //       frame-resident scale| <= |p1|+|p2| <= 4608 < 2^13 = ulp(acc)/2 at
  //       this shift (strictly, even across binade boundaries), so RNE returns
  //       the accumulator exactly. Same 2^13 margin proof as plain MXFP4, with
  //       4608 in place of 2304 (still < 8192).
  //   (2) p1==0 and p2==0                    : SoP-analog is zero.
  //   (3) p1!=0, delta<12, p2 == -(p1<<delta): F+SECOND cancel EXACTLY to the
  //       zero coefficient (cancellation is impossible for delta>=12, since
  //       |p1<<delta| > 2304 >= |p2| once delta>=12 - a cheap bounded check).
  //
  // DERIVED SIZING (all from first principles, verified by the golden model):
  //
  //   MXF_REMAIN_BITS = 36.  Worst catastrophic-cancellation corner: F and
  //     SECOND (both exact, delta<=11 for cancellation) combine to a minimum
  //     nonzero magnitude of 2^(REMAIN-11); the accumulator's clamped
  //     contribution reaches at most ~2^23 in the tightest single-bit-shift
  //     corner. For the guaranteed nonzero |word| to stay >= 2^24 (keeping the
  //     round bit inside exactly-tracked data, never inside the collapsed
  //     sticky region):
  //         2^(REMAIN-11) - 2^23 >= 2^24
  //         2^(REMAIN-11)        >= 3*2^23 > 2^24  =>  REMAIN-11 >= 25
  //         REMAIN >= 36
  //     Tight: the golden model's worst-corner sweep shows real (non-tie)
  //     1-ulp failures at REMAIN=35 and none at REMAIN=36. (Plain MXFP4 needs
  //     only 25 because it has ONE product term, not two: no F/SECOND
  //     cancellation, so its minimum nonzero magnitude is bounded differently.)
  //
  //   MXF_FRAME_WIDTH = 38.  Knife-edge no-overflow proof for the frame TOP,
  //     re-derived for the F+SECOND resident pair (which plain MXFP4 lacks):
  //     at MXF_MAX_ACC_SHIFT=13 the acc's 24b mantissa top bit lands at word
  //     bit R+36; the frame-resident integer is F+SECOND, up to |p1|+|p2| =
  //     4608 (SECOND coincides with F's anchor at the delta=0 boundary). Then
  //         (2^24-1)*2^13 + 4608 = 2^37 - 3584 < 2^37,
  //     so the magnitude never reaches word bit R+37 (the sign bit) - no
  //     saturation logic exists or is needed, exactly as in the FP4 frame.
  //     Layout above the anchor (bit b's value weight is 2^(b-2), the -2 code
  //     anchor):
  //       | sign:1 | acc @ max left shift:24 | guard:1 | F+SECOND resident:12 |
  //
  //   MXF_LZC_WIDTH = MXF_FRAME_WIDTH + MXF_REMAIN_BITS = 74.  Confirmed tight:
  //     the max word magnitude observed across the full adversarial sweep is
  //     exactly 73 bits = MXF_LZC_WIDTH-1, the sign-safe limit.
  //
  //   MXF_MAX_ACC_SHIFT = 13 = MXF_FRAME_WIDTH - 24 - 1, unchanged from FP4.
  //   MXF_ACC_SHIFT_CONST = 148 = 127 + 23 - 2, unchanged from FP4.
  //----------------------------------------------------------------------------

  localparam int MXF_FRAME_WIDTH   = 38;                    // knife-edge proof above
  localparam int MXF_MAX_ACC_SHIFT = MXF_FRAME_WIDTH - 24 - 1;  // = 13
  localparam int MXF_REMAIN_BITS   = 36;                    // derived above (35 fails)
  localparam int MXF_LZC_WIDTH     = MXF_FRAME_WIDTH + MXF_REMAIN_BITS;  // = 74
  localparam int MXF_ACC_SHIFT_CONST = 148;                 // 127 + 23 - 2

  // Per-term clamped placement, shared by SECOND (own_width=13) and the
  // accumulator mantissa (own_width=25). Returns the (signed) contribution to
  // the extended word and whether any nonzero bits were floor-truncated below
  // its landing position. `shift` is the word-bit position of value bit 0;
  // negative shift = arithmetic right shift (floor toward -inf). The clamp is
  // at own_width because an own_width-bit signed value shifted right by
  // >= own_width is already all sign bits - clamping there changes no result
  // while keeping the shifter a fixed 5-bit amount.
  typedef struct packed {
    logic signed [MXF_LZC_WIDTH-1:0] contrib;
    logic                            sticky;
  } mxf_place_result_t;

  function automatic mxf_place_result_t mxf_place(
    input logic signed [24:0] value,     // wide enough for the 25b acc mantissa
    input int                 shift,      // word-bit of value's LSB (may be <0)
    input int                 own_width   // 13 (product) or 25 (acc mantissa)
  );
    mxf_place_result_t result;
    int                rs, clamped_rs;
    logic signed [24:0]              floored;   // value >>> clamped_rs, 25b
    logic signed [24:0]              back;      // floored <<< clamped_rs, 25b
    begin
      result.contrib = '0;
      result.sticky  = 1'b0;
      if (shift >= 0) begin
        result.contrib = MXF_LZC_WIDTH'(value) <<< shift;
        result.sticky  = 1'b0;   // left shift never drops bits
      end else begin
        rs         = -shift;
        clamped_rs = (rs > own_width) ? own_width : rs;
        // Arithmetic floor within the 25-bit signed container, THEN widen
        // (sign-extends, since `floored` is signed). For a right shift the
        // reconstructed `back` = floored<<rs has magnitude <= |value| < 2^25,
        // so the 25-bit width never wraps (proven exhaustively over the full
        // signed-25 range) and value!=back is the exact "bits dropped" test.
        floored        = value >>> clamped_rs;
        back           = floored <<< clamped_rs;
        result.contrib = MXF_LZC_WIDTH'(floored);
        result.sticky  = (value != back);
      end
      return result;
    end
  endfunction

  // Leading-one scan + sticky-direction adjust, sized for the 74-bit word.
  // Structural sibling of fp4_find_lead; neg_adjust_i is the engine's
  // aggregate "a nonzero positive residue was floor-truncated below this
  // word" flag (OR of the per-term stickies from any right-shifted term).
  typedef struct packed {
    logic                          sign;
    logic signed [7:0]             lead_pos;
    logic [MXF_LZC_WIDTH-1:0]      mag;
  } mxf_lead_result_t;

  function automatic mxf_lead_result_t mxf_find_lead(
    input logic signed [MXF_LZC_WIDTH-1:0] word,
    input logic                            neg_adjust_i
  );
    logic                     sign;
    logic [MXF_LZC_WIDTH-1:0] mag;
    int                       lead_pos;
    int                       i;
    mxf_lead_result_t         result;
    begin
      sign = word[MXF_LZC_WIDTH-1];
      if (sign && neg_adjust_i)
        mag = ~word;        // |word|-1, implied (1-eps) tail below
      else
        mag = sign ? (-word) : word;
      lead_pos = -1;
      for (i = MXF_LZC_WIDTH-1; i >= 0; i--) begin
        if (lead_pos == -1 && mag[i]) lead_pos = i;
      end
      result.sign     = sign;
      result.lead_pos = 8'(lead_pos);
      result.mag      = mag;
      return result;
    end
  endfunction

  // Mantissa extract + round/sticky + exponent clamp on the 74-bit word.
  // Structural sibling of fp4_finalize; scale re-enters HERE via scale_exp_i
  // (= the selected anchor), on an exponent wire only. Same conventions:
  //   - exponent = lead_pos - (MXF_REMAIN_BITS + 2) + scale_exp
  //   - acc_sticky_i (bits dropped below the word) ORs into the sticky term
  //   - carry-out of an all-ones fraction renormalizes to fraction = 0
  //   - subnormal RESULT flushes to signed zero; overflow clamps to
  //     sign|0xFE|0x7FFFFF (Known Limitation #3 - the RTL cannot emit Inf)
  function automatic logic [31:0] mxf_finalize(
    input mxf_lead_result_t lr,
    input logic             acc_sticky_i,
    input mx_exp_t          scale_exp_i
  );
    int          lead_pos;
    mx_exp_t     unbiased_exp;
    logic [22:0] mant_out;
    logic        round_bit, sticky_bit;
    logic [23:0] mant_ext;
    logic [7:0]  exp_out;
    int          i;
    begin
      lead_pos = int'(lr.lead_pos);
      if (lead_pos == -1) return 32'd0;

      unbiased_exp = mx_exp_t'(lead_pos) - mx_exp_t'(MXF_REMAIN_BITS + 2)
                   + scale_exp_i;

      mant_out   = '0;
      round_bit  = 1'b0;
      sticky_bit = acc_sticky_i;
      for (i = 0; i < 23; i++) begin
        if (lead_pos - 1 - i >= 0) mant_out[22-i] = lr.mag[lead_pos-1-i];
      end
      if (lead_pos - 24 >= 0) round_bit = lr.mag[lead_pos-24];
      for (i = 0; i < MXF_LZC_WIDTH; i++) begin
        if (i < lead_pos-24 && lr.mag[i]) sticky_bit = 1'b1;
      end

      mant_ext = {1'b0, mant_out};
      if (round_bit && (sticky_bit || mant_out[0])) begin  // round-to-nearest-even
        mant_ext = mant_ext + 24'd1;
      end

      if (mant_ext[23]) begin
        // Carry out of the 23-bit fraction: only reachable from an all-ones
        // fraction, so the renormalized fraction is exactly 0.
        unbiased_exp = unbiased_exp + mx_exp_t'(1);
        mant_out     = '0;
      end else begin
        mant_out = mant_ext[22:0];
      end

      if ((unbiased_exp + mx_exp_t'(127)) <= mx_exp_t'(0)) begin
        exp_out = 8'd0; mant_out = '0;
      end else if ((unbiased_exp + mx_exp_t'(127)) >= mx_exp_t'(255)) begin
        exp_out = 8'hFE; mant_out = 23'h7FFFFF;
      end else begin
        exp_out = 8'(unbiased_exp + mx_exp_t'(127));
      end

      return {lr.sign, exp_out, mant_out};
    end
  endfunction


endpackage
