onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate -radix unsigned /max_pooling_top_testbench/dut/LENGTH
add wave -noupdate -radix unsigned /max_pooling_top_testbench/dut/clk
add wave -noupdate -radix unsigned /max_pooling_top_testbench/dut/reset
add wave -noupdate -radix unsigned /max_pooling_top_testbench/dut/input_data
add wave -noupdate -radix unsigned /max_pooling_top_testbench/dut/output_data
add wave -noupdate /max_pooling_top_testbench/dut/calc/CURRENT_STAGE
add wave -noupdate /max_pooling_top_testbench/dut/calc/getPooled
add wave -noupdate -radix unsigned /max_pooling_top_testbench/dut/calc/overallCounter
add wave -noupdate -radix unsigned /max_pooling_top_testbench/dut/calc/counter
add wave -noupdate -radix unsigned /max_pooling_top_testbench/dut/calc/temp1
add wave -noupdate -radix unsigned /max_pooling_top_testbench/dut/calc/temp2
add wave -noupdate -color {Violet Red} -radix decimal /max_pooling_top_testbench/dut/calc/comp_result
add wave -noupdate -radix unsigned /max_pooling_top_testbench/dut/calc/stage2_temp_maxVal
add wave -noupdate -radix unsigned /max_pooling_top_testbench/dut/calc/maxVal
add wave -noupdate -radix unsigned /max_pooling_top_testbench/dut/read
add wave -noupdate -radix unsigned /max_pooling_top_testbench/dut/write
add wave -noupdate /max_pooling_top_testbench/dut/calc/update
add wave -noupdate -radix unsigned /max_pooling_top_testbench/dut/input_from_fifo
add wave -noupdate -radix unsigned /max_pooling_top_testbench/dut/output_to_fifo
add wave -noupdate -radix unsigned -childformat {{{/max_pooling_top_testbench/dut/pooledValues/fifo_buffer[0]} -radix unsigned} {{/max_pooling_top_testbench/dut/pooledValues/fifo_buffer[1]} -radix unsigned} {{/max_pooling_top_testbench/dut/pooledValues/fifo_buffer[2]} -radix unsigned} {{/max_pooling_top_testbench/dut/pooledValues/fifo_buffer[3]} -radix unsigned}} -expand -subitemconfig {{/max_pooling_top_testbench/dut/pooledValues/fifo_buffer[0]} {-height 15 -radix unsigned} {/max_pooling_top_testbench/dut/pooledValues/fifo_buffer[1]} {-height 15 -radix unsigned} {/max_pooling_top_testbench/dut/pooledValues/fifo_buffer[2]} {-height 15 -radix unsigned} {/max_pooling_top_testbench/dut/pooledValues/fifo_buffer[3]} {-height 15 -radix unsigned}} /max_pooling_top_testbench/dut/pooledValues/fifo_buffer
add wave -noupdate -radix unsigned /max_pooling_top_testbench/dut/pooledValues/waddr
add wave -noupdate -radix unsigned /max_pooling_top_testbench/dut/pooledValues/raddr
add wave -noupdate /max_pooling_top_testbench/dut/pooledValues/control/depth
add wave -noupdate -radix binary /max_pooling_top_testbench/dut/pooledValues/control/clk
add wave -noupdate -radix binary /max_pooling_top_testbench/dut/pooledValues/control/reset
add wave -noupdate -radix binary /max_pooling_top_testbench/dut/pooledValues/control/read
add wave -noupdate -radix binary /max_pooling_top_testbench/dut/pooledValues/control/write
add wave -noupdate /max_pooling_top_testbench/dut/pooledValues/control/wr_en
add wave -noupdate /max_pooling_top_testbench/dut/pooledValues/control/empty
add wave -noupdate /max_pooling_top_testbench/dut/pooledValues/control/full
add wave -noupdate -radix unsigned /max_pooling_top_testbench/dut/pooledValues/control/readAddr
add wave -noupdate -radix unsigned /max_pooling_top_testbench/dut/pooledValues/control/writeAddr
add wave -noupdate -radix unsigned /max_pooling_top_testbench/dut/pooledValues/control/readAddr1
add wave -noupdate -radix unsigned /max_pooling_top_testbench/dut/pooledValues/control/writeAddr1
add wave -noupdate -radix unsigned /max_pooling_top_testbench/dut/pooledValues/control/read_next
add wave -noupdate -radix unsigned /max_pooling_top_testbench/dut/pooledValues/control/write_next
add wave -noupdate /max_pooling_top_testbench/dut/pooledValues/control/n_e
add wave -noupdate /max_pooling_top_testbench/dut/pooledValues/control/n_f
add wave -noupdate /max_pooling_top_testbench/dut/pooledValues/control/ps
add wave -noupdate /max_pooling_top_testbench/dut/pooledValues/control/ns
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {2321 ps} 0}
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
WaveRestoreZoom {2112 ps} {2998 ps}
