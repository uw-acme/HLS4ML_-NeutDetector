onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /maxPooling_Streamed_testbench/dut/clk
add wave -noupdate /maxPooling_Streamed_testbench/dut/reset
add wave -noupdate /maxPooling_Streamed_testbench/dut/enable
add wave -noupdate /maxPooling_Streamed_testbench/dut/input_data
add wave -noupdate /maxPooling_Streamed_testbench/dut/input_from_fifo
add wave -noupdate /maxPooling_Streamed_testbench/dut/write
add wave -noupdate /maxPooling_Streamed_testbench/dut/read
add wave -noupdate /maxPooling_Streamed_testbench/dut/output_data
add wave -noupdate /maxPooling_Streamed_testbench/dut/output_to_fifo
add wave -noupdate /maxPooling_Streamed_testbench/dut/temp
add wave -noupdate /maxPooling_Streamed_testbench/dut/pooled
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
