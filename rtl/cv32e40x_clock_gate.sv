module cv32e40x_clock_gate
#(
  parameter LIB = 0
)
(
    input  logic clk_i,
    input  logic en_i,
    input  logic scan_cg_en_i,
    output logic clk_o
);

    OPENROAD_CLKGATE u_clkgate (
        .CK  ( clk_i ),
        .E   ( en_i | scan_cg_en_i ),
        .GCK ( clk_o )
    );

endmodule
