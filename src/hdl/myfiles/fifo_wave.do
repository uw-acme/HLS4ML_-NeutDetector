onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate -radix binary /fifo_testbench/dut/clk
add wave -noupdate -radix binary /fifo_testbench/dut/reset
add wave -noupdate -radix binary /fifo_testbench/dut/write
add wave -noupdate -radix binary /fifo_testbench/dut/read
add wave -noupdate /fifo_testbench/dut/output_to_fifo
add wave -noupdate /fifo_testbench/dut/input_from_fifo
add wave -noupdate /fifo_testbench/dut/wr_en
add wave -noupdate /fifo_testbench/dut/empty
add wave -noupdate /fifo_testbench/dut/full
add wave -noupdate -radix decimal /fifo_testbench/dut/waddr
add wave -noupdate -radix decimal /fifo_testbench/dut/raddr
add wave -noupdate /fifo_testbench/dut/fifo_buffer
add wave -noupdate /fifo_testbench/dut/control/depth
add wave -noupdate /fifo_testbench/dut/control/clk
add wave -noupdate /fifo_testbench/dut/control/reset
add wave -noupdate /fifo_testbench/dut/control/read
add wave -noupdate /fifo_testbench/dut/control/write
add wave -noupdate /fifo_testbench/dut/control/wr_en
add wave -noupdate /fifo_testbench/dut/control/empty
add wave -noupdate /fifo_testbench/dut/control/full
add wave -noupdate /fifo_testbench/dut/control/readAddr
add wave -noupdate /fifo_testbench/dut/control/writeAddr
add wave -noupdate /fifo_testbench/dut/control/readAddr1
add wave -noupdate /fifo_testbench/dut/control/writeAddr1
add wave -noupdate /fifo_testbench/dut/control/read_next
add wave -noupdate /fifo_testbench/dut/control/write_next
add wave -noupdate /fifo_testbench/dut/control/n_e
add wave -noupdate /fifo_testbench/dut/control/n_f
add wave -noupdate /fifo_testbench/dut/control/ps
add wave -noupdate /fifo_testbench/dut/control/ns
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {33 ps} 0}
quietly wave cursor active 1
configure wave -namecolwidth 150
configure wave -valuecolwidth 100
configure wave -justifyvalue left
configure wave -signalnamewidth 1
configure wave -snapdistance 10
configure wave -datasetprefix 0
configure wave -rowmargin 4
configure wave -childrowmargin 2
configure wave -gridoffset 0
configure wave -gridperiod 1
configure wave -griddelta 40
configure wave -timeline 0
configure wave -timelineunits ps
update
WaveRestoreZoom {0 ps} {954 ps}
