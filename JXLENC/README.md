### L2 HW run
```sh
Compiling Kernel: JxlEnc_lossy_enc_compute
mkdir -p _x_temp.hw.xilinx_u280_xdma_201920_3
v++ -c -D KERNEL_NAME=JxlEnc_lossy_enc_compute --hls.clock 300000000:JxlEnc_lossy_enc_compute -t hw --platform /opt/xilinx/platforms/xilinx_u280_xdma_201920_3/xilinx_u280_xdma_201920_3.xpfm --save-temps   -I /home/janethamrani/Vitis_Libraries/codec/../utils/L1/include/ -I /home/janethamrani/Vitis_Libraries/codec/L2/include/hw/jxlEnc -k JxlEnc_lossy_enc_compute -I'/home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel' --temp_dir _x_temp.hw.xilinx_u280_xdma_201920_3 --report_dir /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/reports/_x.hw.xilinx_u280_xdma_201920_3 -o _x_temp.hw.xilinx_u280_xdma_201920_3/JxlEnc_lossy_enc_compute.xo /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp
Option Map File Used: '/tools/Xilinx/Vitis/2021.2/data/vitis/vpp/optMap.xml'

****** v++ v2021.2 (64-bit)
  **** SW Build 3363252 on 2021-10-14-04:41:01
    ** Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.

INFO: [v++ 60-1306] Additional information associated with this v++ compile can be found at:
	Reports: /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/reports/_x.hw.xilinx_u280_xdma_201920_3/JxlEnc_lossy_enc_compute
	Log files: /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/logs/JxlEnc_lossy_enc_compute
Running Dispatch Server on port: 40383
INFO: [v++ 60-1548] Creating build summary session with primary output /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/JxlEnc_lossy_enc_compute.xo.compile_summary, at Sat Feb  4 16:08:15 2023
INFO: [v++ 60-1316] Initiating connection to rulecheck server, at Sat Feb  4 16:08:15 2023
INFO: [v++ 60-1315] Creating rulecheck session with output '/home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/reports/_x.hw.xilinx_u280_xdma_201920_3/JxlEnc_lossy_enc_compute/v++_compile_JxlEnc_lossy_enc_compute_guidance.html', at Sat Feb  4 16:08:16 2023
INFO: [v++ 60-895]   Target platform: /opt/xilinx/platforms/xilinx_u280_xdma_201920_3/xilinx_u280_xdma_201920_3.xpfm
INFO: [v++ 60-1578]   This platform contains Xilinx Shell Archive '/opt/xilinx/platforms/xilinx_u280_xdma_201920_3/hw/xilinx_u280_xdma_201920_3.xsa'
INFO: [v++ 74-78] Compiler Version string: 2021.2
INFO: [v++ 60-1302] Platform 'xilinx_u280_xdma_201920_3.xpfm' has been explicitly enabled for this release.
INFO: [v++ 60-585] Compiling for hardware target
INFO: [v++ 60-423]   Target device: xilinx_u280_xdma_201920_3
INFO: [v++ 60-242] Creating kernel: 'JxlEnc_lossy_enc_compute'
INFO: [v++ 60-1616] Creating a HLS clock using hls.clock option: 300 MHz

===>The following messages were generated while  performing high-level synthesis for kernel: JxlEnc_lossy_enc_compute Log file: /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/JxlEnc_lossy_enc_compute/JxlEnc_lossy_enc_compute/vitis_hls.log :
INFO: [v++ 204-61] Pipelining loop 'VITIS_LOOP_5346_1_VITIS_LOOP_5347_2'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 13, loop 'VITIS_LOOP_5346_1_VITIS_LOOP_5347_2'
INFO: [v++ 204-61] Pipelining loop 'LOOP_0_LOOP_1'.
INFO: [v++ 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 4, loop 'LOOP_0_LOOP_1'
INFO: [v++ 204-61] Pipelining loop 'LOOP_2'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 41, loop 'LOOP_2'
INFO: [v++ 204-61] Pipelining loop 'loop_load_dct8_pixel_VITIS_LOOP_4449_1'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 4, loop 'loop_load_dct8_pixel_VITIS_LOOP_4449_1'
INFO: [v++ 204-61] Pipelining loop 'loop_load_dct16_pixel_VITIS_LOOP_4467_1'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 4, loop 'loop_load_dct16_pixel_VITIS_LOOP_4467_1'
INFO: [v++ 204-61] Pipelining loop 'loop_load_dct32_pixel_VITIS_LOOP_4485_1'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 4, loop 'loop_load_dct32_pixel_VITIS_LOOP_4485_1'
INFO: [v++ 204-61] Pipelining loop 'VITIS_LOOP_7188_1'.
INFO: [v++ 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 2, loop 'VITIS_LOOP_7188_1'
INFO: [v++ 204-61] Pipelining loop 'VITIS_LOOP_5905_1_VITIS_LOOP_5906_2'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 2, loop 'VITIS_LOOP_5905_1_VITIS_LOOP_5906_2'
INFO: [v++ 204-61] Pipelining loop 'loop_dct8x8'.
WARNING: [v++ 200-885] The II Violation in module 'hls_DCT1DImpl_8x8_1' (loop 'loop_dct8x8'): Unable to schedule 'store' operation ('out_0_addr_2_write_ln5691', /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp:5691) of variable 't05', /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp:5647 on array 'out_0' due to limited memory ports (II = 2). Please consider using a memory core with more ports or partitioning the array 'out_0'.
Resolution: For help on HLS 200-885 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-885.html
WARNING: [v++ 200-885] The II Violation in module 'hls_DCT1DImpl_8x8_1' (loop 'loop_dct8x8'): Unable to schedule 'store' operation ('out_0_addr_3_write_ln5693', /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp:5693) of variable 't11', /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp:5653 on array 'out_0' due to limited memory ports (II = 3). Please consider using a memory core with more ports or partitioning the array 'out_0'.
Resolution: For help on HLS 200-885 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-885.html
INFO: [v++ 200-1470] Pipelining result : Target II = 2, Final II = 4, Depth = 60, loop 'loop_dct8x8'
INFO: [v++ 204-61] Pipelining loop 'loop_transposeBlock8_VITIS_LOOP_5702_1'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 8, loop 'loop_transposeBlock8_VITIS_LOOP_5702_1'
INFO: [v++ 204-61] Pipelining loop 'loop_dct8x8'.
WARNING: [v++ 200-885] The II Violation in module 'hls_DCT1DImpl_8x8' (loop 'loop_dct8x8'): Unable to schedule 'store' operation ('out_0_addr_5_write_ln5691', /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp:5691) of variable 't05', /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp:5647 on array 'out_0' due to limited memory ports (II = 2). Please consider using a memory core with more ports or partitioning the array 'out_0'.
Resolution: For help on HLS 200-885 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-885.html
WARNING: [v++ 200-885] The II Violation in module 'hls_DCT1DImpl_8x8' (loop 'loop_dct8x8'): Unable to schedule 'store' operation ('out_0_addr_6_write_ln5693', /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp:5693) of variable 't11', /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp:5653 on array 'out_0' due to limited memory ports (II = 3). Please consider using a memory core with more ports or partitioning the array 'out_0'.
Resolution: For help on HLS 200-885 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-885.html
INFO: [v++ 200-1470] Pipelining result : Target II = 2, Final II = 4, Depth = 60, loop 'loop_dct8x8'
INFO: [v++ 204-61] Pipelining loop 'loop_transposeBlock8_VITIS_LOOP_5702_1'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 8, loop 'loop_transposeBlock8_VITIS_LOOP_5702_1'
INFO: [v++ 204-61] Pipelining loop 'VITIS_LOOP_5842_1_VITIS_LOOP_5843_2'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 3, loop 'VITIS_LOOP_5842_1_VITIS_LOOP_5843_2'
INFO: [v++ 204-61] Pipelining loop 'hls_feed_b64_VITIS_LOOP_5864_1'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 4, loop 'hls_feed_b64_VITIS_LOOP_5864_1'
INFO: [v++ 204-61] Pipelining loop 'hls_feed_b64_VITIS_LOOP_5888_1'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 4, loop 'hls_feed_b64_VITIS_LOOP_5888_1'
INFO: [v++ 204-61] Pipelining loop 'VITIS_LOOP_6409_1_VITIS_LOOP_6410_2'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 2, loop 'VITIS_LOOP_6409_1_VITIS_LOOP_6410_2'
INFO: [v++ 204-61] Pipelining loop 'VITIS_LOOP_6330_1_VITIS_LOOP_6331_2'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 3, loop 'VITIS_LOOP_6330_1_VITIS_LOOP_6331_2'
INFO: [v++ 204-61] Pipelining loop 'VITIS_LOOP_6145_1'.
WARNING: [v++ 200-885] The II Violation in module 'hls_dct16_block_1' (loop 'VITIS_LOOP_6145_1'): Unable to schedule 'store' operation ('out_addr_9_write_ln6277', /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp:6277) of variable 'add2', /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp:6277 on array 'out_r' due to limited memory ports (II = 11). Please consider using a memory core with more ports or partitioning the array 'out_r'.
Resolution: For help on HLS 200-885 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-885.html
WARNING: [v++ 200-885] The II Violation in module 'hls_dct16_block_1' (loop 'VITIS_LOOP_6145_1'): Unable to schedule 'store' operation ('out_addr_11_write_ln6279', /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp:6279) of variable 'add10', /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp:6279 on array 'out_r' due to limited memory ports (II = 12). Please consider using a memory core with more ports or partitioning the array 'out_r'.
Resolution: For help on HLS 200-885 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-885.html
WARNING: [v++ 200-885] The II Violation in module 'hls_dct16_block_1' (loop 'VITIS_LOOP_6145_1'): Unable to schedule 'store' operation ('out_addr_1_write_ln6269', /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp:6269) of variable 'add4', /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp:6269 on array 'out_r' due to limited memory ports (II = 13). Please consider using a memory core with more ports or partitioning the array 'out_r'.
Resolution: For help on HLS 200-885 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-885.html
WARNING: [v++ 200-885] The II Violation in module 'hls_dct16_block_1' (loop 'VITIS_LOOP_6145_1'): Unable to schedule 'store' operation ('out_addr_3_write_ln6271', /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp:6271) of variable 'add6', /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp:6271 on array 'out_r' due to limited memory ports (II = 14). Please consider using a memory core with more ports or partitioning the array 'out_r'.
Resolution: For help on HLS 200-885 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-885.html
WARNING: [v++ 200-885] The II Violation in module 'hls_dct16_block_1' (loop 'VITIS_LOOP_6145_1'): Unable to schedule 'store' operation ('out_addr_5_write_ln6273', /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp:6273) of variable 'add8', /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp:6273 on array 'out_r' due to limited memory ports (II = 15). Please consider using a memory core with more ports or partitioning the array 'out_r'.
Resolution: For help on HLS 200-885 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-885.html
INFO: [v++ 200-1470] Pipelining result : Target II = 11, Final II = 16, Depth = 94, loop 'VITIS_LOOP_6145_1'
INFO: [v++ 204-61] Pipelining loop 'VITIS_LOOP_6340_1_VITIS_LOOP_6341_2'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 8, loop 'VITIS_LOOP_6340_1_VITIS_LOOP_6341_2'
INFO: [v++ 204-61] Pipelining loop 'VITIS_LOOP_6145_1'.
WARNING: [v++ 200-885] The II Violation in module 'hls_dct16_block' (loop 'VITIS_LOOP_6145_1'): Unable to schedule 'store' operation ('out_addr_23_write_ln6277', /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp:6277) of variable 'add19', /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp:6277 on array 'out_r' due to limited memory ports (II = 11). Please consider using a memory core with more ports or partitioning the array 'out_r'.
Resolution: For help on HLS 200-885 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-885.html
WARNING: [v++ 200-885] The II Violation in module 'hls_dct16_block' (loop 'VITIS_LOOP_6145_1'): Unable to schedule 'store' operation ('out_addr_25_write_ln6279', /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp:6279) of variable 'add21', /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp:6279 on array 'out_r' due to limited memory ports (II = 12). Please consider using a memory core with more ports or partitioning the array 'out_r'.
Resolution: For help on HLS 200-885 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-885.html
WARNING: [v++ 200-885] The II Violation in module 'hls_dct16_block' (loop 'VITIS_LOOP_6145_1'): Unable to schedule 'store' operation ('out_addr_write_ln6269', /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp:6269) of variable 'add12', /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp:6269 on array 'out_r' due to limited memory ports (II = 13). Please consider using a memory core with more ports or partitioning the array 'out_r'.
Resolution: For help on HLS 200-885 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-885.html
WARNING: [v++ 200-885] The II Violation in module 'hls_dct16_block' (loop 'VITIS_LOOP_6145_1'): Unable to schedule 'store' operation ('out_addr_17_write_ln6271', /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp:6271) of variable 'add14', /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp:6271 on array 'out_r' due to limited memory ports (II = 14). Please consider using a memory core with more ports or partitioning the array 'out_r'.
Resolution: For help on HLS 200-885 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-885.html
WARNING: [v++ 200-885] The II Violation in module 'hls_dct16_block' (loop 'VITIS_LOOP_6145_1'): Unable to schedule 'store' operation ('out_addr_19_write_ln6273', /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp:6273) of variable 'add16', /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp:6273 on array 'out_r' due to limited memory ports (II = 15). Please consider using a memory core with more ports or partitioning the array 'out_r'.
Resolution: For help on HLS 200-885 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-885.html
INFO: [v++ 200-1470] Pipelining result : Target II = 11, Final II = 16, Depth = 94, loop 'VITIS_LOOP_6145_1'
INFO: [v++ 204-61] Pipelining loop 'VITIS_LOOP_6340_1_VITIS_LOOP_6341_2'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 14, loop 'VITIS_LOOP_6340_1_VITIS_LOOP_6341_2'
INFO: [v++ 204-61] Pipelining loop 'VITIS_LOOP_6393_1'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 4, loop 'VITIS_LOOP_6393_1'
INFO: [v++ 204-61] Pipelining loop 'VITIS_LOOP_6358_1'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 4, loop 'VITIS_LOOP_6358_1'
INFO: [v++ 204-61] Pipelining loop 'VITIS_LOOP_6379_1'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 4, loop 'VITIS_LOOP_6379_1'
INFO: [v++ 204-61] Pipelining loop 'load_dct32_VITIS_LOOP_6979_1'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 2, loop 'load_dct32_VITIS_LOOP_6979_1'
INFO: [v++ 204-61] Pipelining loop 'VITIS_LOOP_6524_1'.
WARNING: [v++ 200-885] The II Violation in module 'hls_DCT1DImpl_32_1' (loop 'VITIS_LOOP_6524_1'): Unable to schedule 'store' operation ('out_addr_49_write_ln6886', /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp:6886) of variable 'tmp32_b32_out2_21', /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp:6852 on array 'out_r' due to limited memory ports (II = 30). Please consider using a memory core with more ports or partitioning the array 'out_r'.
Resolution: For help on HLS 200-885 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-885.html
WARNING: [v++ 200-885] The II Violation in module 'hls_DCT1DImpl_32_1' (loop 'VITIS_LOOP_6524_1'): Unable to schedule 'store' operation ('out_addr_50_write_ln6887', /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp:6887) of variable 'tmp32_b32_out2_22', /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp:6853 on array 'out_r' due to limited memory ports (II = 31). Please consider using a memory core with more ports or partitioning the array 'out_r'.
Resolution: For help on HLS 200-885 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-885.html
INFO: [v++ 200-1470] Pipelining result : Target II = 30, Final II = 32, Depth = 142, loop 'VITIS_LOOP_6524_1'
INFO: [v++ 204-61] Pipelining loop 'VITIS_LOOP_7025_1_VITIS_LOOP_7026_2'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 8, loop 'VITIS_LOOP_7025_1_VITIS_LOOP_7026_2'
INFO: [v++ 204-61] Pipelining loop 'VITIS_LOOP_6989_1_VITIS_LOOP_6990_2'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 3, loop 'VITIS_LOOP_6989_1_VITIS_LOOP_6990_2'
INFO: [v++ 204-61] Pipelining loop 'VITIS_LOOP_6524_1'.
WARNING: [v++ 200-885] The II Violation in module 'hls_DCT1DImpl_32' (loop 'VITIS_LOOP_6524_1'): Unable to schedule 'store' operation ('out_addr_79_write_ln6886', /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp:6886) of variable 'tmp32_b32_out2_21', /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp:6852 on array 'out_r' due to limited memory ports (II = 30). Please consider using a memory core with more ports or partitioning the array 'out_r'.
Resolution: For help on HLS 200-885 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-885.html
WARNING: [v++ 200-885] The II Violation in module 'hls_DCT1DImpl_32' (loop 'VITIS_LOOP_6524_1'): Unable to schedule 'store' operation ('out_addr_80_write_ln6887', /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp:6887) of variable 'tmp32_b32_out2_22', /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/kernel/hls_lossy_enc_compute.cpp:6853 on array 'out_r' due to limited memory ports (II = 31). Please consider using a memory core with more ports or partitioning the array 'out_r'.
Resolution: For help on HLS 200-885 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-885.html
INFO: [v++ 200-1470] Pipelining result : Target II = 30, Final II = 32, Depth = 142, loop 'VITIS_LOOP_6524_1'
INFO: [v++ 204-61] Pipelining loop 'VITIS_LOOP_6999_1_VITIS_LOOP_7000_2'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 8, loop 'VITIS_LOOP_6999_1_VITIS_LOOP_7000_2'
INFO: [v++ 204-61] Pipelining loop 'VITIS_LOOP_7011_1_VITIS_LOOP_7012_2'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 3, loop 'VITIS_LOOP_7011_1_VITIS_LOOP_7012_2'
INFO: [v++ 204-61] Pipelining loop 'loop_feed_dct32_ac'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 4, loop 'loop_feed_dct32_ac'
INFO: [v++ 204-61] Pipelining loop 'Loop_idct32_1_Loop_idct32_2'.
INFO: [v++ 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 12, loop 'Loop_idct32_1_Loop_idct32_2'
INFO: [v++ 204-61] Pipelining loop 'VITIS_LOOP_6906_1'.
INFO: [v++ 200-1470] Pipelining result : Target II = 128, Final II = 31, Depth = 31, loop 'VITIS_LOOP_6906_1'
INFO: [v++ 204-61] Pipelining loop 'Loop_idct_transpose_VITIS_LOOP_6968_1'.
INFO: [v++ 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 2, loop 'Loop_idct_transpose_VITIS_LOOP_6968_1'
INFO: [v++ 204-61] Pipelining loop 'VITIS_LOOP_6906_1'.
INFO: [v++ 200-1470] Pipelining result : Target II = 128, Final II = 31, Depth = 31, loop 'VITIS_LOOP_6906_1'
INFO: [v++ 204-61] Pipelining loop 'loop_feed_dct32_dc'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 4, loop 'loop_feed_dct32_dc'
INFO: [v++ 204-61] Pipelining loop 'LOOP_0_LOOP_1'.
INFO: [v++ 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 2, loop 'LOOP_0_LOOP_1'
INFO: [v++ 204-61] Pipelining loop 'DUP_1_DUP_2'.
INFO: [v++ 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 15, loop 'DUP_1_DUP_2'
INFO: [v++ 204-61] Pipelining loop 'LOOP_1_LOOP_3_LOOP_4'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 2, loop 'LOOP_1_LOOP_3_LOOP_4'
INFO: [v++ 204-61] Pipelining loop 'LOOP_3_LOOP_4'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 2, loop 'LOOP_3_LOOP_4'
INFO: [v++ 204-61] Pipelining loop 'LOOP_3_LOOP_4'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 2, loop 'LOOP_3_LOOP_4'
INFO: [v++ 204-61] Pipelining loop 'LOOP_1_LOOP_2'.
INFO: [v++ 200-1470] Pipelining result : Target II = 64, Final II = 7, Depth = 7, loop 'LOOP_1_LOOP_2'
INFO: [v++ 204-61] Pipelining loop 'LOOP_1_LOOP_3_LOOP_4'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 58, loop 'LOOP_1_LOOP_3_LOOP_4'
INFO: [v++ 204-61] Pipelining loop 'Loop 1'.
INFO: [v++ 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 1, loop 'Loop 1'
INFO: [v++ 204-61] Pipelining loop 'VITIS_LOOP_7821_1'.
INFO: [v++ 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 25, loop 'VITIS_LOOP_7821_1'
INFO: [v++ 204-61] Pipelining loop 'LOOP_2'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 2, loop 'LOOP_2'
INFO: [v++ 204-61] Pipelining loop 'LOOP_6'.
INFO: [v++ 200-1470] Pipelining result : Target II = NA, Final II = 7, Depth = 14, loop 'LOOP_6'
INFO: [v++ 204-61] Pipelining loop 'LOOP_7'.
INFO: [v++ 200-1470] Pipelining result : Target II = NA, Final II = 12, Depth = 14, loop 'LOOP_7'
INFO: [v++ 204-61] Pipelining loop 'LOOP_3_LOOP_4'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 58, loop 'LOOP_3_LOOP_4'
INFO: [v++ 204-61] Pipelining loop 'Loop 1'.
INFO: [v++ 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 1, loop 'Loop 1'
INFO: [v++ 204-61] Pipelining loop 'VITIS_LOOP_7821_1'.
INFO: [v++ 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 25, loop 'VITIS_LOOP_7821_1'
INFO: [v++ 204-61] Pipelining loop 'LOOP_2'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 2, loop 'LOOP_2'
INFO: [v++ 204-61] Pipelining loop 'LOOP_6'.
INFO: [v++ 200-1470] Pipelining result : Target II = NA, Final II = 7, Depth = 14, loop 'LOOP_6'
INFO: [v++ 204-61] Pipelining loop 'LOOP_7'.
INFO: [v++ 200-1470] Pipelining result : Target II = NA, Final II = 12, Depth = 14, loop 'LOOP_7'
INFO: [v++ 204-61] Pipelining loop 'LOOP_3_LOOP_4'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 58, loop 'LOOP_3_LOOP_4'
INFO: [v++ 204-61] Pipelining loop 'Loop 1'.
INFO: [v++ 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 1, loop 'Loop 1'
INFO: [v++ 204-61] Pipelining loop 'VITIS_LOOP_7821_1'.
INFO: [v++ 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 25, loop 'VITIS_LOOP_7821_1'
INFO: [v++ 204-61] Pipelining loop 'Loop 1'.
INFO: [v++ 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 1, loop 'Loop 1'
INFO: [v++ 204-61] Pipelining loop 'LOOP_1_LOOP_3_LOOP_4_LOOP_5'.
INFO: [v++ 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 4, loop 'LOOP_1_LOOP_3_LOOP_4_LOOP_5'
INFO: [v++ 204-61] Pipelining loop 'LOOP_1_LOOP_3_LOOP_4_LOOP_5'.
INFO: [v++ 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 4, loop 'LOOP_1_LOOP_3_LOOP_4_LOOP_5'
INFO: [v++ 204-61] Pipelining loop 'LOOP_1_LOOP_3_LOOP_4_LOOP_5'.
INFO: [v++ 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 4, loop 'LOOP_1_LOOP_3_LOOP_4_LOOP_5'
INFO: [v++ 204-61] Pipelining loop 'LOOP_10_LOOP_11_LOOP_12'.
INFO: [v++ 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 6, loop 'LOOP_10_LOOP_11_LOOP_12'
INFO: [v++ 204-61] Pipelining loop 'LOOP_5_LOOP_6_LOOP_7'.
INFO: [v++ 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 5, loop 'LOOP_5_LOOP_6_LOOP_7'
INFO: [v++ 204-61] Pipelining loop 'LOOP_13_LOOP_14_LOOP_15'.
INFO: [v++ 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 5, loop 'LOOP_13_LOOP_14_LOOP_15'
INFO: [v++ 204-61] Pipelining loop 'LOOP_1_LOOP_2'.
INFO: [v++ 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 2, loop 'LOOP_1_LOOP_2'
INFO: [v++ 204-61] Pipelining loop 'LOOP_5_LOOP_6'.
INFO: [v++ 200-1470] Pipelining result : Target II = NA, Final II = 5, Depth = 9, loop 'LOOP_5_LOOP_6'
INFO: [v++ 204-61] Pipelining loop 'VITIS_LOOP_4959_3'.
INFO: [v++ 200-1470] Pipelining result : Target II = 3, Final II = 3, Depth = 30, loop 'VITIS_LOOP_4959_3'
INFO: [v++ 204-61] Pipelining loop 'VITIS_LOOP_5111_3'.
INFO: [v++ 200-1470] Pipelining result : Target II = 3, Final II = 3, Depth = 126, loop 'VITIS_LOOP_5111_3'
INFO: [v++ 204-61] Pipelining loop 'VITIS_LOOP_5389_2_VITIS_LOOP_5390_3'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 38, loop 'VITIS_LOOP_5389_2_VITIS_LOOP_5390_3'
INFO: [v++ 204-61] Pipelining loop 'LOOP_0_LOOP_1'.
INFO: [v++ 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 2, loop 'LOOP_0_LOOP_1'
INFO: [v++ 204-61] Pipelining loop 'VITIS_LOOP_4595_2_VITIS_LOOP_4596_3_VITIS_LOOP_4597_4'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 44, loop 'VITIS_LOOP_4595_2_VITIS_LOOP_4596_3_VITIS_LOOP_4597_4'
INFO: [v++ 204-61] Pipelining loop 'VITIS_LOOP_4648_3_VITIS_LOOP_4650_5_VITIS_LOOP_4651_6_VITIS_LOOP_4652_7'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 45, loop 'VITIS_LOOP_4648_3_VITIS_LOOP_4650_5_VITIS_LOOP_4651_6_VITIS_LOOP_4652_7'
INFO: [v++ 204-61] Pipelining loop 'VITIS_LOOP_4718_3_VITIS_LOOP_4720_5_VITIS_LOOP_4721_6_VITIS_LOOP_4722_7'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 45, loop 'VITIS_LOOP_4718_3_VITIS_LOOP_4720_5_VITIS_LOOP_4721_6_VITIS_LOOP_4722_7'
INFO: [v++ 204-61] Pipelining loop 'VITIS_LOOP_4825_1'.
INFO: [v++ 200-1470] Pipelining result : Target II = 2, Final II = 2, Depth = 40, loop 'VITIS_LOOP_4825_1'
INFO: [v++ 204-61] Pipelining loop 'VITIS_LOOP_4560_1'.
INFO: [v++ 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 3, loop 'VITIS_LOOP_4560_1'
INFO: [v++ 204-61] Pipelining loop 'LOOP_5_LOOP_6'.
INFO: [v++ 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 42, loop 'LOOP_5_LOOP_6'
INFO: [v++ 204-61] Pipelining loop 'VITIS_LOOP_5459_2_VITIS_LOOP_5460_3'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 31, loop 'VITIS_LOOP_5459_2_VITIS_LOOP_5460_3'
INFO: [v++ 204-61] Pipelining loop 'VITIS_LOOP_5279_2'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 4, loop 'VITIS_LOOP_5279_2'
INFO: [v++ 204-61] Pipelining loop 'VITIS_LOOP_5519_2_VITIS_LOOP_5520_3'.
INFO: [v++ 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 40, loop 'VITIS_LOOP_5519_2_VITIS_LOOP_5520_3'
INFO: [v++ 200-790] **** Loop Constraint Status: All loop constraints were satisfied.
INFO: [v++ 200-789] **** Estimated Fmax: 258.90 MHz
INFO: [v++ 60-594] Finished kernel compilation
INFO: [v++ 60-244] Generating system estimate report...
INFO: [v++ 60-1092] Generated system estimate report: /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/reports/_x.hw.xilinx_u280_xdma_201920_3/JxlEnc_lossy_enc_compute/system_estimate_JxlEnc_lossy_enc_compute.xtxt
INFO: [v++ 60-586] Created _x_temp.hw.xilinx_u280_xdma_201920_3/JxlEnc_lossy_enc_compute.xo
INFO: [v++ 60-2343] Use the vitis_analyzer tool to visualize and navigate the relevant reports. Run the following command. 
    vitis_analyzer /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/JxlEnc_lossy_enc_compute.xo.compile_summary 
INFO: [v++ 60-791] Total elapsed time: 0h 8m 26s
INFO: [v++ 60-1653] Closing dispatch client.
mkdir -p build_dir.hw.xilinx_u280_xdma_201920_3
v++ -l -t hw --platform /opt/xilinx/platforms/xilinx_u280_xdma_201920_3/xilinx_u280_xdma_201920_3.xpfm --save-temps   -I /home/janethamrani/Vitis_Libraries/codec/../utils/L1/include/ -I /home/janethamrani/Vitis_Libraries/codec/L2/include/hw/jxlEnc --temp_dir _x_temp.hw.xilinx_u280_xdma_201920_3 --report_dir /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/reports/_build.hw.xilinx_u280_xdma_201920_3/jxlEnc --optimize 2 -R 2   --kernel_frequency 300 -g --advanced.param compiler.userPostSysLinkOverlayTcl=postSysLink.tcl    -o build_dir.hw.xilinx_u280_xdma_201920_3/jxlEnc.xclbin _x_temp.hw.xilinx_u280_xdma_201920_3/JxlEnc_lossy_enc_compute.xo
Option Map File Used: '/tools/Xilinx/Vitis/2021.2/data/vitis/vpp/optMap.xml'

****** v++ v2021.2 (64-bit)
  **** SW Build 3363252 on 2021-10-14-04:41:01
    ** Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.

INFO: [v++ 60-1306] Additional information associated with this v++ link can be found at:
	Reports: /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/reports/_build.hw.xilinx_u280_xdma_201920_3/jxlEnc/link
	Log files: /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/logs/link
Running Dispatch Server on port: 33539
INFO: [v++ 60-1548] Creating build summary session with primary output /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/build_dir.hw.xilinx_u280_xdma_201920_3/jxlEnc.xclbin.link_summary, at Sat Feb  4 16:16:43 2023
INFO: [v++ 60-1316] Initiating connection to rulecheck server, at Sat Feb  4 16:16:43 2023
INFO: [v++ 60-1315] Creating rulecheck session with output '/home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/reports/_build.hw.xilinx_u280_xdma_201920_3/jxlEnc/link/v++_link_jxlEnc_guidance.html', at Sat Feb  4 16:16:44 2023
INFO: [v++ 60-895]   Target platform: /opt/xilinx/platforms/xilinx_u280_xdma_201920_3/xilinx_u280_xdma_201920_3.xpfm
INFO: [v++ 60-1578]   This platform contains Xilinx Shell Archive '/opt/xilinx/platforms/xilinx_u280_xdma_201920_3/hw/xilinx_u280_xdma_201920_3.xsa'
INFO: [v++ 74-78] Compiler Version string: 2021.2
INFO: [v++ 60-1302] Platform 'xilinx_u280_xdma_201920_3.xpfm' has been explicitly enabled for this release.
INFO: [v++ 60-629] Linking for hardware target
INFO: [v++ 60-423]   Target device: xilinx_u280_xdma_201920_3
WARNING: [v++ 60-889] User-specified kernel frequency for ID 0 is the same as the default frequency 300 MHz, so it will be ignored
INFO: [v++ 60-1332] Run 'run_link' status: Not started
INFO: [v++ 60-1443] [16:16:52] Run run_link: Step system_link: Started
INFO: [v++ 60-1453] Command Line: system_link --xo /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/JxlEnc_lossy_enc_compute.xo -keep --xpfm /opt/xilinx/platforms/xilinx_u280_xdma_201920_3/xilinx_u280_xdma_201920_3.xpfm --target hw --output_dir /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/int --temp_dir /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/sys_link
INFO: [v++ 60-1454] Run Directory: /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/run_link
INFO: [SYSTEM_LINK 60-1316] Initiating connection to rulecheck server, at Sat Feb  4 16:16:54 2023
INFO: [SYSTEM_LINK 82-70] Extracting xo v3 file /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/JxlEnc_lossy_enc_compute.xo
INFO: [SYSTEM_LINK 82-53] Creating IP database /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/sys_link/_sysl/.cdb/xd_ip_db.xml
INFO: [SYSTEM_LINK 82-38] [16:16:54] build_xd_ip_db started: /tools/Xilinx/Vitis/2021.2/bin/build_xd_ip_db -ip_search 0  -sds-pf /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/sys_link/xilinx_u280_xdma_201920_3.hpfm -clkid 0 -ip /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/sys_link/iprepo/xilinx_com_hls_JxlEnc_lossy_enc_compute_1_0,JxlEnc_lossy_enc_compute -o /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/sys_link/_sysl/.cdb/xd_ip_db.xml
INFO: [SYSTEM_LINK 82-37] [16:16:57] build_xd_ip_db finished successfully
Time (s): cpu = 00:00:04 ; elapsed = 00:00:03 . Memory (MB): peak = 2179.574 ; gain = 0.000 ; free physical = 45657 ; free virtual = 60920
INFO: [SYSTEM_LINK 82-51] Create system connectivity graph
INFO: [SYSTEM_LINK 82-102] Applying explicit connections to the system connectivity graph: /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/sys_link/cfgraph/cfgen_cfgraph.xml
INFO: [SYSTEM_LINK 82-38] [16:16:57] cfgen started: /tools/Xilinx/Vitis/2021.2/bin/cfgen -dmclkid 0 -r /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/sys_link/_sysl/.cdb/xd_ip_db.xml -o /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/sys_link/cfgraph/cfgen_cfgraph.xml
INFO: [CFGEN 83-0] Kernel Specs: 
INFO: [CFGEN 83-0]   kernel: JxlEnc_lossy_enc_compute, num: 1  {JxlEnc_lossy_enc_compute_1}
INFO: [CFGEN 83-2226] Inferring mapping for argument JxlEnc_lossy_enc_compute_1.config to HBM[0]
INFO: [CFGEN 83-2226] Inferring mapping for argument JxlEnc_lossy_enc_compute_1.config_fl to HBM[0]
INFO: [CFGEN 83-2226] Inferring mapping for argument JxlEnc_lossy_enc_compute_1.hls_opsin_1 to HBM[0]
INFO: [CFGEN 83-2226] Inferring mapping for argument JxlEnc_lossy_enc_compute_1.hls_opsin_2 to HBM[0]
INFO: [CFGEN 83-2226] Inferring mapping for argument JxlEnc_lossy_enc_compute_1.hls_opsin_3 to HBM[0]
INFO: [CFGEN 83-2226] Inferring mapping for argument JxlEnc_lossy_enc_compute_1.quant_field_row to HBM[0]
INFO: [CFGEN 83-2226] Inferring mapping for argument JxlEnc_lossy_enc_compute_1.masking_field_row to HBM[0]
INFO: [CFGEN 83-2226] Inferring mapping for argument JxlEnc_lossy_enc_compute_1.aq_map_f to HBM[0]
INFO: [CFGEN 83-2226] Inferring mapping for argument JxlEnc_lossy_enc_compute_1.cmap_axi to HBM[0]
INFO: [CFGEN 83-2226] Inferring mapping for argument JxlEnc_lossy_enc_compute_1.ac_coef_axiout to HBM[0]
INFO: [CFGEN 83-2226] Inferring mapping for argument JxlEnc_lossy_enc_compute_1.strategy_all to HBM[0]
INFO: [CFGEN 83-2226] Inferring mapping for argument JxlEnc_lossy_enc_compute_1.raw_quant_field_i to HBM[0]
INFO: [CFGEN 83-2226] Inferring mapping for argument JxlEnc_lossy_enc_compute_1.hls_order to HBM[0]
INFO: [CFGEN 83-2226] Inferring mapping for argument JxlEnc_lossy_enc_compute_1.hls_dc8x8 to HBM[0]
INFO: [CFGEN 83-2226] Inferring mapping for argument JxlEnc_lossy_enc_compute_1.hls_dc16x16 to HBM[0]
INFO: [CFGEN 83-2226] Inferring mapping for argument JxlEnc_lossy_enc_compute_1.hls_dc32x32 to HBM[0]
INFO: [SYSTEM_LINK 82-37] [16:17:04] cfgen finished successfully
Time (s): cpu = 00:00:06 ; elapsed = 00:00:06 . Memory (MB): peak = 2179.574 ; gain = 0.000 ; free physical = 45655 ; free virtual = 60918
INFO: [SYSTEM_LINK 82-52] Create top-level block diagram
INFO: [SYSTEM_LINK 82-38] [16:17:04] cf2bd started: /tools/Xilinx/Vitis/2021.2/bin/cf2bd  --linux --trace_buffer 1024 --input_file /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/sys_link/cfgraph/cfgen_cfgraph.xml --ip_db /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/sys_link/_sysl/.cdb/xd_ip_db.xml --cf_name dr --working_dir /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/sys_link/_sysl/.xsd --temp_dir /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/sys_link --output_dir /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/int --target_bd pfm_dynamic.bd
INFO: [CF2BD 82-31] Launching cf2xd: cf2xd -linux -trace-buffer 1024 -i /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/sys_link/cfgraph/cfgen_cfgraph.xml -r /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/sys_link/_sysl/.cdb/xd_ip_db.xml -o dr.xml
INFO: [CF2BD 82-28] cf2xd finished successfully
INFO: [CF2BD 82-31] Launching cf_xsd: cf_xsd -disable-address-gen -bd pfm_dynamic.bd -dn dr -dp /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/sys_link/_sysl/.xsd
INFO: [CF2BD 82-28] cf_xsd finished successfully
INFO: [SYSTEM_LINK 82-37] [16:17:06] cf2bd finished successfully
Time (s): cpu = 00:00:02 ; elapsed = 00:00:02 . Memory (MB): peak = 2179.574 ; gain = 0.000 ; free physical = 45648 ; free virtual = 60915
INFO: [v++ 60-1441] [16:17:06] Run run_link: Step system_link: Completed
Time (s): cpu = 00:00:15 ; elapsed = 00:00:14 . Memory (MB): peak = 2074.953 ; gain = 0.000 ; free physical = 45709 ; free virtual = 60976
INFO: [v++ 60-1443] [16:17:06] Run run_link: Step cf2sw: Started
INFO: [v++ 60-1453] Command Line: cf2sw -sdsl /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/int/sdsl.dat -rtd /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/int/cf2sw.rtd -nofilter /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/int/cf2sw_full.rtd -xclbin /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/int/xclbin_orig.xml -o /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/int/xclbin_orig.1.xml
INFO: [v++ 60-1454] Run Directory: /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/run_link
INFO: [v++ 60-1441] [16:17:10] Run run_link: Step cf2sw: Completed
Time (s): cpu = 00:00:03 ; elapsed = 00:00:03 . Memory (MB): peak = 2074.953 ; gain = 0.000 ; free physical = 45712 ; free virtual = 60980
INFO: [v++ 60-1443] [16:17:10] Run run_link: Step rtd2_system_diagram: Started
INFO: [v++ 60-1453] Command Line: rtd2SystemDiagram
INFO: [v++ 60-1454] Run Directory: /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/run_link
INFO: [v++ 60-1441] [16:17:10] Run run_link: Step rtd2_system_diagram: Completed
Time (s): cpu = 00:00:00 ; elapsed = 00:00:00.45 . Memory (MB): peak = 2074.953 ; gain = 0.000 ; free physical = 45694 ; free virtual = 60962
INFO: [v++ 60-1443] [16:17:10] Run run_link: Step vpl: Started
INFO: [v++ 60-1453] Command Line: vpl -t hw -f /opt/xilinx/platforms/xilinx_u280_xdma_201920_3/xilinx_u280_xdma_201920_3.xpfm -g --kernel_frequency 300 --remote_ip_cache /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/.ipcache -s --output_dir /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/int --log_dir /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/logs/link --report_dir /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/reports/_build.hw.xilinx_u280_xdma_201920_3/jxlEnc/link --config /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/int/vplConfig.ini -k /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/int/kernel_info.dat --webtalk_flag Vitis --temp_dir /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link --no-info --iprepo /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/int/xo/ip_repo/xilinx_com_hls_JxlEnc_lossy_enc_compute_1_0 --messageDb /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/run_link/vpl.pb /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/int/dr.bd.tcl
INFO: [v++ 60-1454] Run Directory: /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/run_link

****** vpl v2021.2 (64-bit)
  **** SW Build 3363252 on 2021-10-14-04:41:01
    ** Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.

INFO: [VPL 60-839] Read in kernel information from file '/home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/int/kernel_info.dat'.
INFO: [VPL 74-78] Compiler Version string: 2021.2
INFO: [VPL 60-423]   Target device: xilinx_u280_xdma_201920_3
WARNING: [VPL 60-889] User-specified kernel frequency for ID 0 is the same as the default frequency 300 MHz, so it will be ignored
INFO: [VPL 60-1032] Extracting hardware platform to /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/vivado/vpl/.local/hw_platform
[16:17:28] Run vpl: Step create_project: Started
Creating Vivado project.
[16:17:32] Run vpl: Step create_project: Completed
[16:17:32] Run vpl: Step create_bd: Started
[16:18:06] Run vpl: Step create_bd: Completed
[16:18:06] Run vpl: Step update_bd: Started
[16:18:06] Run vpl: Step update_bd: Completed
[16:18:06] Run vpl: Step generate_target: Started
[16:19:14] Run vpl: Step generate_target: Completed
[16:19:14] Run vpl: Step config_hw_runs: Started
[16:19:22] Run vpl: Step config_hw_runs: Completed
[16:19:22] Run vpl: Step synth: Started
[16:19:53] Block-level synthesis in progress, 0 of 67 jobs complete, 8 jobs running.
[16:20:23] Block-level synthesis in progress, 7 of 67 jobs complete, 1 job running.
[16:20:53] Block-level synthesis in progress, 9 of 67 jobs complete, 8 jobs running.
[16:21:23] Block-level synthesis in progress, 11 of 67 jobs complete, 7 jobs running.
[16:21:53] Block-level synthesis in progress, 16 of 67 jobs complete, 5 jobs running.
[16:22:24] Block-level synthesis in progress, 23 of 67 jobs complete, 5 jobs running.
[16:22:54] Block-level synthesis in progress, 27 of 67 jobs complete, 8 jobs running.
[16:23:24] Block-level synthesis in progress, 29 of 67 jobs complete, 7 jobs running.
[16:23:54] Block-level synthesis in progress, 33 of 67 jobs complete, 7 jobs running.
[16:24:24] Block-level synthesis in progress, 41 of 67 jobs complete, 5 jobs running.
[16:24:55] Block-level synthesis in progress, 43 of 67 jobs complete, 8 jobs running.
[16:25:25] Block-level synthesis in progress, 48 of 67 jobs complete, 5 jobs running.
[16:25:55] Block-level synthesis in progress, 54 of 67 jobs complete, 4 jobs running.
[16:26:25] Block-level synthesis in progress, 59 of 67 jobs complete, 6 jobs running.
[16:26:56] Block-level synthesis in progress, 62 of 67 jobs complete, 3 jobs running.
[16:27:26] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:27:56] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:28:26] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:28:57] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:29:27] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:29:57] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:30:27] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:30:57] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:31:28] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:31:58] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:32:28] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:32:58] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:33:29] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:33:59] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:34:29] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:34:59] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:35:29] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:36:00] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:36:30] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:37:00] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:37:30] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:38:01] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:38:31] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:39:01] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:39:31] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:40:02] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:40:32] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:41:02] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:41:32] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:42:02] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:42:33] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:43:03] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:43:33] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:44:03] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:44:34] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:45:04] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:45:34] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:46:04] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:46:35] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:47:05] Block-level synthesis in progress, 66 of 67 jobs complete, 1 job running.
[16:47:35] Block-level synthesis in progress, 67 of 67 jobs complete, 0 jobs running.
[16:48:05] Top-level synthesis in progress.
[16:48:39] Run vpl: Step synth: Completed
[16:48:39] Run vpl: Step impl: Started
[17:01:46] Finished 2nd of 6 tasks (FPGA linking synthesized kernels to platform). Elapsed time: 00h 44m 35s 

[17:01:46] Starting logic optimization..
[17:02:16] Phase 1 Retarget
[17:02:47] Phase 2 Constant propagation
[17:02:47] Phase 3 Sweep
[17:03:47] Phase 4 BUFG optimization
[17:04:18] Phase 5 Shift Register Optimization
[17:04:18] Phase 6 Post Processing Netlist
[17:10:52] Finished 3rd of 6 tasks (FPGA logic optimization). Elapsed time: 00h 09m 05s 

[17:10:52] Starting logic placement..
[17:11:52] Phase 1 Placer Initialization
[17:11:52] Phase 1.1 Placer Initialization Netlist Sorting
[17:14:54] Phase 1.2 IO Placement/ Clock Placement/ Build Placer Device
[17:15:54] Phase 1.3 Build Placer Netlist Model
[17:17:25] Phase 1.4 Constrain Clocks/Macros
[17:17:55] Phase 2 Global Placement
[17:17:55] Phase 2.1 Floorplanning
[17:18:26] Phase 2.1.1 Partition Driven Placement
[17:18:26] Phase 2.1.1.1 PBP: Partition Driven Placement
[17:19:26] Phase 2.1.1.2 PBP: Clock Region Placement
[17:20:27] Phase 2.1.1.3 PBP: Discrete Incremental
[17:20:27] Phase 2.1.1.4 PBP: Compute Congestion
[17:20:27] Phase 2.1.1.5 PBP: Macro Placement
[17:20:27] Phase 2.1.1.6 PBP: UpdateTiming
[17:20:57] Phase 2.1.1.7 PBP: Add part constraints
[17:20:57] Phase 2.2 Physical Synthesis After Floorplan
[17:21:28] Phase 2.3 Update Timing before SLR Path Opt
[17:21:28] Phase 2.4 Post-Processing in Floorplanning
[17:21:58] Phase 2.5 Global Placement Core
[17:29:03] Phase 2.5.1 Physical Synthesis In Placer
[17:32:36] Phase 3 Detail Placement
[17:32:36] Phase 3.1 Commit Multi Column Macros
[17:33:07] Phase 3.2 Commit Most Macros & LUTRAMs
[17:34:07] Phase 3.3 Small Shape DP
[17:34:07] Phase 3.3.1 Small Shape Clustering
[17:34:38] Phase 3.3.2 Flow Legalize Slice Clusters
[17:34:38] Phase 3.3.3 Slice Area Swap
[17:35:38] Phase 3.4 Place Remaining
[17:35:38] Phase 3.5 Re-assign LUT pins
[17:35:38] Phase 3.6 Pipeline Register Optimization
[17:35:38] Phase 3.7 Fast Optimization
[17:37:09] Phase 4 Post Placement Optimization and Clean-Up
[17:37:09] Phase 4.1 Post Commit Optimization
[17:38:10] Phase 4.1.1 Post Placement Optimization
[17:38:41] Phase 4.1.1.1 BUFG Insertion
[17:38:41] Phase 1 Physical Synthesis Initialization
[17:38:41] Phase 4.1.1.2 BUFG Replication
[17:38:41] Phase 4.1.1.3 Post Placement Timing Optimization
[17:42:43] Phase 4.1.1.4 Replication
[17:43:44] Phase 4.2 Post Placement Cleanup
[17:43:44] Phase 4.3 Placer Reporting
[17:43:44] Phase 4.3.1 Print Estimated Congestion
[17:43:44] Phase 4.4 Final Placement Cleanup
[17:57:23] Finished 4th of 6 tasks (FPGA logic placement). Elapsed time: 00h 46m 31s 

[17:57:23] Starting logic routing..
[17:58:24] Phase 1 Build RT Design
[18:00:26] Phase 2 Router Initialization
[18:00:26] Phase 2.1 Fix Topology Constraints
[18:00:26] Phase 2.2 Pre Route Cleanup
[18:00:26] Phase 2.3 Global Clock Net Routing
[18:00:56] Phase 2.4 Update Timing
[18:03:28] Phase 2.5 Update Timing for Bus Skew
[18:03:28] Phase 2.5.1 Update Timing
[18:04:28] Phase 3 Initial Routing
[18:04:28] Phase 3.1 Global Routing
[18:05:29] Phase 4 Rip-up And Reroute
[18:05:29] Phase 4.1 Global Iteration 0
[18:16:07] Phase 4.2 Global Iteration 1
[18:18:08] Phase 4.3 Global Iteration 2
[18:19:39] Phase 4.4 Global Iteration 3
[18:20:40] Phase 5 Delay and Skew Optimization
[18:20:40] Phase 5.1 Delay CleanUp
[18:20:40] Phase 5.1.1 Update Timing
[18:21:40] Phase 5.1.2 Update Timing
[18:22:41] Phase 5.2 Clock Skew Optimization
[18:22:41] Phase 6 Post Hold Fix
[18:22:41] Phase 6.1 Hold Fix Iter
[18:22:41] Phase 6.1.1 Update Timing
[18:23:42] Phase 6.1.2 Lut RouteThru Assignment for hold
[18:24:12] Phase 6.2 Additional Hold Fix
[18:26:14] Phase 7 Leaf Clock Prog Delay Opt
[18:28:15] Phase 7.1 Delay CleanUp
[18:28:15] Phase 7.1.1 Update Timing
[18:28:45] Phase 7.1.2 Update Timing
[18:29:46] Phase 7.2 Hold Fix Iter
[18:29:46] Phase 7.2.1 Update Timing
[18:30:47] Phase 7.2.2 Lut RouteThru Assignment for hold
[18:31:17] Phase 7.3 Additional Hold Fix
[18:34:19] Phase 8 Route finalize
[18:34:50] Phase 9 Verifying routed nets
[18:34:50] Phase 10 Depositing Routes
[18:35:20] Phase 11 Resolve XTalk
[18:35:50] Phase 12 Post Router Timing
[18:36:21] Phase 13 Physical Synthesis in Router
[18:36:21] Phase 13.1 Physical Synthesis Initialization
[18:37:52] Phase 13.2 Critical Path Optimization
[18:38:53] Finished 5th of 6 tasks (FPGA routing). Elapsed time: 00h 41m 29s 

[18:38:53] Starting bitstream generation..
[18:57:06] Creating bitmap...
[19:01:09] Writing bitstream ./pfm_top_i_dynamic_region_my_rm_partial.bit...
[19:01:09] Finished 6th of 6 tasks (FPGA bitstream generation). Elapsed time: 00h 22m 16s 
[19:01:57] Run vpl: Step impl: Completed
[19:01:58] Run vpl: FINISHED. Run Status: impl Complete!
INFO: [v++ 60-1441] [19:01:58] Run run_link: Step vpl: Completed
Time (s): cpu = 00:01:37 ; elapsed = 02:44:48 . Memory (MB): peak = 2074.953 ; gain = 0.000 ; free physical = 37008 ; free virtual = 57972
INFO: [v++ 60-1443] [19:01:58] Run run_link: Step rtdgen: Started
INFO: [v++ 60-1453] Command Line: rtdgen
INFO: [v++ 60-1454] Run Directory: /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/run_link
INFO: [v++ 60-991] clock name 'clkwiz_kernel_clk_out1' (clock ID '0') is being mapped to clock name 'DATA_CLK' in the xclbin
INFO: [v++ 60-991] clock name 'clkwiz_kernel2_clk_out1' (clock ID '1') is being mapped to clock name 'KERNEL_CLK' in the xclbin
INFO: [v++ 60-991] clock name 'clk_out1_pfm_top_clkwiz_hbm_aclk_0' (clock ID '') is being mapped to clock name 'clk_out1_pfm_top_clkwiz_hbm_aclk_0' in the xclbin
INFO: [v++ 60-1230] The compiler selected the following frequencies for the runtime controllable kernel clock(s) and scalable system clock(s): System (SYSTEM) clock: clk_out1_pfm_top_clkwiz_hbm_aclk_0 = 450, Kernel (DATA) clock: clkwiz_kernel_clk_out1 = 272, Kernel (KERNEL) clock: clkwiz_kernel2_clk_out1 = 500
INFO: [v++ 60-1453] Command Line: cf2sw -a /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/int/address_map.xml -sdsl /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/int/sdsl.dat -xclbin /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/int/xclbin_orig.xml -rtd /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/int/jxlEnc.rtd -o /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/int/jxlEnc.xml
INFO: [v++ 60-1652] Cf2sw returned exit code: 0
INFO: [v++ 60-1441] [19:02:01] Run run_link: Step rtdgen: Completed
Time (s): cpu = 00:00:03 ; elapsed = 00:00:03 . Memory (MB): peak = 2074.953 ; gain = 0.000 ; free physical = 38007 ; free virtual = 58971
INFO: [v++ 60-1443] [19:02:01] Run run_link: Step xclbinutil: Started
INFO: [v++ 60-1453] Command Line: xclbinutil --add-section DEBUG_IP_LAYOUT:JSON:/home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/int/debug_ip_layout.rtd --add-section BITSTREAM:RAW:/home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/int/partial.bit --force --target hw --key-value SYS:dfx_enable:true --add-section :JSON:/home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/int/jxlEnc.rtd --append-section :JSON:/home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/int/appendSection.rtd --add-section CLOCK_FREQ_TOPOLOGY:JSON:/home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/int/jxlEnc_xml.rtd --add-section BUILD_METADATA:JSON:/home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/int/jxlEnc_build.rtd --add-section EMBEDDED_METADATA:RAW:/home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/int/jxlEnc.xml --add-section SYSTEM_METADATA:RAW:/home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/int/systemDiagramModelSlrBaseAddress.json --output /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/build_dir.hw.xilinx_u280_xdma_201920_3/jxlEnc.xclbin
INFO: [v++ 60-1454] Run Directory: /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/run_link
XRT Build Version: 2.11.634 (2021.1)
       Build Date: 2021-06-08 22:10:49
          Hash ID: 5ad5998d67080f00bca5bf15b3838cf35e0a7b26
Creating a default 'in-memory' xclbin image.

Section: 'DEBUG_IP_LAYOUT'(9) was successfully added.
Size   : 296 bytes
Format : JSON
File   : '/home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/int/debug_ip_layout.rtd'

Section: 'BITSTREAM'(0) was successfully added.
Size   : 52518383 bytes
Format : RAW
File   : '/home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/int/partial.bit'

Section: 'MEM_TOPOLOGY'(6) was successfully added.
Format : JSON
File   : 'mem_topology'

Section: 'IP_LAYOUT'(8) was successfully added.
Format : JSON
File   : 'ip_layout'

Section: 'CONNECTIVITY'(7) was successfully added.
Format : JSON
File   : 'connectivity'

Section: 'CLOCK_FREQ_TOPOLOGY'(11) was successfully added.
Size   : 410 bytes
Format : JSON
File   : '/home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/int/jxlEnc_xml.rtd'

Section: 'BUILD_METADATA'(14) was successfully added.
Size   : 7006 bytes
Format : JSON
File   : '/home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/int/jxlEnc_build.rtd'

Section: 'EMBEDDED_METADATA'(2) was successfully added.
Size   : 165003 bytes
Format : RAW
File   : '/home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/int/jxlEnc.xml'

Section: 'SYSTEM_METADATA'(22) was successfully added.
Size   : 27805 bytes
Format : RAW
File   : '/home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/int/systemDiagramModelSlrBaseAddress.json'

Section: 'IP_LAYOUT'(8) was successfully appended to.
Format : JSON
File   : 'ip_layout'
Successfully wrote (52751301 bytes) to the output file: /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/build_dir.hw.xilinx_u280_xdma_201920_3/jxlEnc.xclbin
Leaving xclbinutil.
INFO: [v++ 60-1441] [19:02:01] Run run_link: Step xclbinutil: Completed
Time (s): cpu = 00:00:00.10 ; elapsed = 00:00:00.15 . Memory (MB): peak = 2074.953 ; gain = 0.000 ; free physical = 38635 ; free virtual = 59650
INFO: [v++ 60-1443] [19:02:01] Run run_link: Step xclbinutilinfo: Started
INFO: [v++ 60-1453] Command Line: xclbinutil --quiet --force --info /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/build_dir.hw.xilinx_u280_xdma_201920_3/jxlEnc.xclbin.info --input /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/build_dir.hw.xilinx_u280_xdma_201920_3/jxlEnc.xclbin
INFO: [v++ 60-1454] Run Directory: /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/run_link
INFO: [v++ 60-1441] [19:02:01] Run run_link: Step xclbinutilinfo: Completed
Time (s): cpu = 00:00:00.39 ; elapsed = 00:00:00.44 . Memory (MB): peak = 2074.953 ; gain = 0.000 ; free physical = 39483 ; free virtual = 60497
INFO: [v++ 60-1443] [19:02:01] Run run_link: Step generate_sc_driver: Started
INFO: [v++ 60-1453] Command Line: 
INFO: [v++ 60-1454] Run Directory: /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/link/run_link
INFO: [v++ 60-1441] [19:02:01] Run run_link: Step generate_sc_driver: Completed
Time (s): cpu = 00:00:00 ; elapsed = 00:00:00 . Memory (MB): peak = 2074.953 ; gain = 0.000 ; free physical = 39483 ; free virtual = 60497
INFO: [v++ 60-244] Generating system estimate report...
INFO: [v++ 60-1092] Generated system estimate report: /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/reports/_build.hw.xilinx_u280_xdma_201920_3/jxlEnc/link/system_estimate_jxlEnc.xtxt
INFO: [v++ 60-586] Created /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/build_dir.hw.xilinx_u280_xdma_201920_3/jxlEnc.ltx
INFO: [v++ 60-586] Created build_dir.hw.xilinx_u280_xdma_201920_3/jxlEnc.xclbin
INFO: [v++ 60-1307] Run completed. Additional information can be found in:
	Guidance: /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/reports/_build.hw.xilinx_u280_xdma_201920_3/jxlEnc/link/v++_link_jxlEnc_guidance.html
	Timing Report: /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/reports/_build.hw.xilinx_u280_xdma_201920_3/jxlEnc/link/imp/impl_1_xilinx_u280_xdma_201920_3_bb_locked_timing_summary_routed.rpt
	Vivado Log: /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/logs/link/vivado.log
	Steps Log File: /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/_x_temp.hw.xilinx_u280_xdma_201920_3/logs/link/link.steps.log

INFO: [v++ 60-2343] Use the vitis_analyzer tool to visualize and navigate the relevant reports. Run the following command. 
    vitis_analyzer /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/build_dir.hw.xilinx_u280_xdma_201920_3/jxlEnc.xclbin.link_summary 
INFO: [v++ 60-791] Total elapsed time: 2h 45m 28s
INFO: [v++ 60-1653] Closing dispatch client.
emconfigutil --platform /opt/xilinx/platforms/xilinx_u280_xdma_201920_3/xilinx_u280_xdma_201920_3.xpfm --od build_dir.hw.xilinx_u280_xdma_201920_3

****** configutil v2021.2 (64-bit)
  **** SW Build 3363252 on 2021-10-14-04:41:01
    ** Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.

INFO: [ConfigUtil 60-895]   Target platform: /opt/xilinx/platforms/xilinx_u280_xdma_201920_3/xilinx_u280_xdma_201920_3.xpfm
INFO: [ConfigUtil 60-1578]   This platform contains Xilinx Shell Archive '/opt/xilinx/platforms/xilinx_u280_xdma_201920_3/hw/xilinx_u280_xdma_201920_3.xsa'
INFO: [ConfigUtil 60-1032] Extracting hardware platform to build_dir.hw.xilinx_u280_xdma_201920_3
emulation configuration file `emconfig.json` is created in build_dir.hw.xilinx_u280_xdma_201920_3 directory 
LD_LIBRARY_PATH=:$LD_LIBRARY_PATH \
build_dir.hw.xilinx_u280_xdma_201920_3/host.exe --xclbin build_dir.hw.xilinx_u280_xdma_201920_3/jxlEnc.xclbin /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/images/small32x32.png small32x32.jxl
JPEG XL encoder v0.5.0 61fb7ee [Scalar]
Read 32x32 image, 4.9 MP/s
Encoding [Container | VarDCT, d1.000, squirrel | 132-byte Exif | 323-byte XMP], 8 threads.
Found Platform
Platform Name: Xilinx
Info: Context created
Info: Command queue created
INFO: Found Device=xilinx_u280_xdma_201920_3
INFO: Importing build_dir.hw.xilinx_u280_xdma_201920_3/jxlEnc.xclbin
Loading: 'build_dir.hw.xilinx_u280_xdma_201920_3/jxlEnc.xclbin'
Info: Program created
Info: Kernel created
INFO: kernel has been created
XRT build version: 2.11.634
Build hash: 5ad5998d67080f00bca5bf15b3838cf35e0a7b26
Build date: 2021-06-08 22:10:49
Git branch: 2021.1
PID: 26601
UID: 1001
[Sun Feb  5 00:02:12 2023 GMT]
HOST: superlu
EXE: /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/build_dir.hw.xilinx_u280_xdma_201920_3/host.exe
[XRT] ERROR: std::bad_alloc
[XRT] ERROR: std::bad_alloc
[XRT] ERROR: std::bad_alloc
[XRT] ERROR: std::bad_alloc
[XRT] ERROR: std::bad_alloc
[XRT] ERROR: std::bad_alloc
[XRT] ERROR: std::bad_alloc
[XRT] ERROR: std::bad_alloc
[XRT] ERROR: std::bad_alloc
[XRT] ERROR: std::bad_alloc
[XRT] ERROR: std::bad_alloc
[XRT] ERROR: std::bad_alloc
[XRT] ERROR: std::bad_alloc
[XRT] ERROR: std::bad_alloc
[XRT] ERROR: std::bad_alloc
Segmentation fault (core dumped)
Makefile:294: recipe for target 'run' failed
make: *** [run] Error 139

```
