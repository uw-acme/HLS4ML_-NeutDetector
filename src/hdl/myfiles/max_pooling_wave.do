onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate -radix decimal /max_pooling_testbench/dut/n_in
add wave -noupdate -radix decimal /max_pooling_testbench/dut/n_out
add wave -noupdate -radix decimal /max_pooling_testbench/dut/clk
add wave -noupdate -radix decimal /max_pooling_testbench/dut/enable
add wave -noupdate -radix decimal /max_pooling_testbench/dut/input1
add wave -noupdate -radix decimal /max_pooling_testbench/dut/input2
add wave -noupdate -radix decimal /max_pooling_testbench/dut/input3
add wave -noupdate -radix decimal /max_pooling_testbench/dut/input4
add wave -noupdate -radix binary /max_pooling_testbench/dut/done
add wave -noupdate -radix decimal /max_pooling_testbench/dut/output_data
add wave -noupdate -radix decimal /max_pooling_testbench/dut/max1
add wave -noupdate -radix decimal /max_pooling_testbench/dut/max2
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {0 ps} 0}
quietly wave cursor active 0
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
WaveRestoreZoom {0 ps} {1 ns}
