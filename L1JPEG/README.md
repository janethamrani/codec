### L1 for JPEG Decoding
#### CSIM
```sh
janethamrani@superlu:~/Vitis_Libraries/codec/L1/tests/jpegdec$ make run DEVICE=/opt/xilinx/platforms/xilinx_u280_xdma_201920_3/xilinx_u280_xdma_201920_3.xpfm CSIM=1
Configured: settings.tcl
----
set XPART xcu280-fsvh2892-2L-e
set CSIM 1
set CSYNTH 0
set COSIM 0
set VIVADO_SYN 0
set VIVADO_IMPL 0
set XF_PROJ_ROOT "/home/janethamrani/Vitis_Libraries/codec"
set CUR_DIR "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec"
----
vitis_hls -f run_hls.tcl;

****** Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.2 (64-bit)
  **** SW Build 3367213 on Tue Oct 19 02:47:39 MDT 2021
  **** IP Build 3369179 on Thu Oct 21 08:25:16 MDT 2021
    ** Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.

source /tools/Xilinx/Vitis_HLS/2021.2/scripts/vitis_hls/hls.tcl -notrace
INFO: Applying HLS Y2K22 patch v1.2 for IP revision
INFO: [HLS 200-10] Running '/tools/Xilinx/Vitis_HLS/2021.2/bin/unwrapped/lnx64.o/vitis_hls'
INFO: [HLS 200-10] For user 'janethamrani' on host 'superlu' (Linux_x86_64 version 5.4.0-137-generic) on Sat Jan 28 10:43:41 EST 2023
INFO: [HLS 200-10] On os Ubuntu 18.04.6 LTS
INFO: [HLS 200-10] In directory '/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec'
Sourcing Tcl script 'run_hls.tcl'
INFO: [HLS 200-1510] Running: open_project -reset test.prj 
INFO: [HLS 200-10] Opening and resetting project '/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj'.
WARNING: [HLS 200-40] No /home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/solution1.aps file found.
INFO: [HLS 200-1510] Running: add_files test_decoder.cpp /home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jfifparser.cpp /home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp -cflags -I/home/janethamrani/Vitis_Libraries/codec/L1/include -std=c++0x -g -O0 
INFO: [HLS 200-10] Adding design file 'test_decoder.cpp' to the project
INFO: [HLS 200-10] Adding design file '/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jfifparser.cpp' to the project
INFO: [HLS 200-10] Adding design file '/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp' to the project
INFO: [HLS 200-1510] Running: add_files -tb test_decoder.cpp -cflags -I/home/janethamrani/Vitis_Libraries/codec/L1/include -std=c++0x 
INFO: [HLS 200-10] Adding test bench file 'test_decoder.cpp' to the project
INFO: [HLS 200-1510] Running: set_top kernel_parser_decoder 
INFO: [HLS 200-1510] Running: open_solution -reset solution1 
INFO: [HLS 200-10] Creating and opening solution '/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1'.
INFO: [HLS 200-10] Cleaning up the solution database.
WARNING: [HLS 200-40] No /home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/solution1.aps file found.
INFO: [HLS 200-1505] Using default flow_target 'vivado'
Resolution: For help on HLS 200-1505 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-1505.html
INFO: [HLS 200-1510] Running: set_part xcu280-fsvh2892-2L-e 
INFO: [HLS 200-1611] Setting target device to 'xcu280-fsvh2892-2L-e'
INFO: [HLS 200-1510] Running: create_clock -period 3.33 
INFO: [SYN 201-201] Setting up clock 'default' with a period of 3.33ns.
INFO: [HLS 200-1510] Running: csim_design -argv -JPEGFile /home/janethamrani/Vitis_Libraries/codec/L1/images/t0.jpg 
INFO: [SIM 211-2] *************** CSIM start ***************
INFO: [SIM 211-4] CSIM will launch GCC as the compiler.
make[1]: Entering directory '/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/csim/build'
   Compiling ../../../../test_decoder.cpp in debug mode
   Compiling ../../../../../../src/XAcc_jfifparser.cpp in debug mode
   Compiling ../../../../../../src/XAcc_jpegdecoder.cpp in debug mode
   Generating csim.exe
make[1]: Leaving directory '/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/csim/build'
In file included from ../../../../../../src/XAcc_jpegdecoder.cpp:25:0:
/tools/Xilinx/Vitis_HLS/2021.2/include/utils/x_hls_utils.h:246:10: warning: ‘hls_preserve’ attribute directive ignored [-Wattributes]
 T reg(T d)
          ^

------------ Test for decode image.jpg  -------------
WARNING: /home/janethamrani/Vitis_Libraries/codec/L1/images/t0.jpg will be opened for binary read.
51193 entries read from /home/janethamrani/Vitis_Libraries/codec/L1/images/t0.jpg
hls_mcuv=33, hls_mcuh=39, hls_mcuc=1287, 
huffman 1 bits codes is :0b0000000000000000
huffman 2 bits codes is :0b0000000000000000
huffman 3 bits codes is :0b0000000000000010
huffman 4 bits codes is :0b0000000000001110
huffman 5 bits codes is :0b0000000000011110
huffman 6 bits codes is :0b0000000000111110
huffman 7 bits codes is :0b0000000001111110
huffman 8 bits codes is :0b0000000011111110
huffman 9 bits codes is :0b0000000111111110
huffman 10 bits codes is :0b0000001111111110
huffman 11 bits codes is :0b0000011111111100
huffman 12 bits codes is :0b0000111111111000
huffman 13 bits codes is :0b0001111111110000
huffman 14 bits codes is :0b0011111111100000
huffman 15 bits codes is :0b0111111111000000
huffman 16 bits codes is :0b1111111110000000
huffman 1 bits start addr is :0
huffman 2 bits start addr is :0
huffman 3 bits start addr is :1
huffman 4 bits start addr is :8
huffman 5 bits start addr is :23
huffman 6 bits start addr is :54
huffman 7 bits start addr is :117
huffman 8 bits start addr is :244
huffman 9 bits start addr is :499
huffman 10 bits start addr is :1010
huffman 11 bits start addr is :2032
huffman 12 bits start addr is :4076
huffman 13 bits start addr is :8164
huffman 14 bits start addr is :16340
huffman 15 bits start addr is :32692
huffman 16 bits start addr is :-140
huffman 1 bits codes is :0b0000000000000000
huffman 2 bits codes is :0b0000000000000000
huffman 3 bits codes is :0b0000000000000100
huffman 4 bits codes is :0b0000000000001010
huffman 5 bits codes is :0b0000000000011010
huffman 6 bits codes is :0b0000000000111010
huffman 7 bits codes is :0b0000000001111000
huffman 8 bits codes is :0b0000000011111000
huffman 9 bits codes is :0b0000000111110110
huffman 10 bits codes is :0b0000001111110110
huffman 11 bits codes is :0b0000011111110110
huffman 12 bits codes is :0b0000111111110100
huffman 13 bits codes is :0b0001111111110000
huffman 14 bits codes is :0b0011111111100000
huffman 15 bits codes is :0b0111111111000000
huffman 16 bits codes is :0b1111111110000010
huffman 1 bits start addr is :0
huffman 2 bits start addr is :0
huffman 3 bits start addr is :2
huffman 4 bits start addr is :7
huffman 5 bits start addr is :20
huffman 6 bits start addr is :49
huffman 7 bits start addr is :109
huffman 8 bits start addr is :233
huffman 9 bits start addr is :484
huffman 10 bits start addr is :991
huffman 11 bits start addr is :2010
huffman 12 bits start addr is :4052
huffman 13 bits start addr is :8140
huffman 14 bits start addr is :16316
huffman 15 bits start addr is :32668
huffman 16 bits start addr is :-163
huffman 1 bits codes is :0b0000000000000000
huffman 2 bits codes is :0b0000000000000000
huffman 3 bits codes is :0b0000000000000110
huffman 4 bits codes is :0b0000000000001110
huffman 5 bits codes is :0b0000000000011110
huffman 6 bits codes is :0b0000000000111110
huffman 7 bits codes is :0b0000000001111110
huffman 8 bits codes is :0b0000000011111110
huffman 9 bits codes is :0b0000000111111110
huffman 10 bits codes is :0b0000001111111110
huffman 11 bits codes is :0b0000011111111110
huffman 12 bits codes is :0b0000111111111110
huffman 13 bits codes is :0b0001111111111100
huffman 14 bits codes is :0b0011111111111000
huffman 15 bits codes is :0b0111111111110000
huffman 16 bits codes is :0b1111111111100000
huffman 1 bits start addr is :0
huffman 2 bits start addr is :0
huffman 3 bits start addr is :3
huffman 4 bits start addr is :10
huffman 5 bits start addr is :25
huffman 6 bits start addr is :56
huffman 7 bits start addr is :119
huffman 8 bits start addr is :246
huffman 9 bits start addr is :501
huffman 10 bits start addr is :1012
huffman 11 bits start addr is :2035
huffman 12 bits start addr is :4082
huffman 13 bits start addr is :8176
huffman 14 bits start addr is :16364
huffman 15 bits start addr is :32740
huffman 16 bits start addr is :-44
huffman 1 bits codes is :0b0000000000000000
huffman 2 bits codes is :0b0000000000000000
huffman 3 bits codes is :0b0000000000000100
huffman 4 bits codes is :0b0000000000001010
huffman 5 bits codes is :0b0000000000011000
huffman 6 bits codes is :0b0000000000111000
huffman 7 bits codes is :0b0000000001111000
huffman 8 bits codes is :0b0000000011110110
huffman 9 bits codes is :0b0000000111110100
huffman 10 bits codes is :0b0000001111110110
huffman 11 bits codes is :0b0000011111110110
huffman 12 bits codes is :0b0000111111110100
huffman 13 bits codes is :0b0001111111110000
huffman 14 bits codes is :0b0011111111100000
huffman 15 bits codes is :0b0111111111000010
huffman 16 bits codes is :0b1111111110001000
huffman 1 bits start addr is :0
huffman 2 bits start addr is :0
huffman 3 bits start addr is :2
huffman 4 bits start addr is :7
huffman 5 bits start addr is :19
huffman 6 bits start addr is :47
huffman 7 bits start addr is :107
huffman 8 bits start addr is :230
huffman 9 bits start addr is :480
huffman 10 bits start addr is :987
huffman 11 bits start addr is :2006
huffman 12 bits start addr is :4048
huffman 13 bits start addr is :8136
huffman 14 bits start addr is :16312
huffman 15 bits start addr is :32665
huffman 16 bits start addr is :-163
****the end 3 blocks before zigzag are : 
 ffffffb6,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000, 
  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000, 
  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000, 
  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000, 
  ffffffe6,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000, 
  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000, 
  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000, 
  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000, 
  0015,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000, 
  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000, 
  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000, 
  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000, 
 Ready for next image!
 INFO: [SIM 211-1] CSim done with 0 errors.
INFO: [SIM 211-3] *************** CSIM finish ***************
INFO: [HLS 200-111] Finished Command csim_design CPU user time: 4.86 seconds. CPU system time: 0.33 seconds. Elapsed time: 4.63 seconds; current allocated memory: -937.109 MB.
INFO: [HLS 200-112] Total CPU user time: 6.77 seconds. Total CPU system time: 0.64 seconds. Total elapsed time: 6.02 seconds; peak allocated memory: 282.043 MB.
INFO: [Common 17-206] Exiting vitis_hls at Sat Jan 28 10:43:47 2023...


```
#### CSYNTH

```sh
janethamrani@superlu:~/Vitis_Libraries/codec/L1/tests/jpegdec$ make run DEVICE=/opt/xilinx/platforms/xilinx_u280_xdma_201920_3/xilinx_u280_xdma_201920_3.xpfm CSYNTH=1
Configured: settings.tcl
----
set XPART xcu280-fsvh2892-2L-e
set CSIM 0
set CSYNTH 1
set COSIM 0
set VIVADO_SYN 0
set VIVADO_IMPL 0
set XF_PROJ_ROOT "/home/janethamrani/Vitis_Libraries/codec"
set CUR_DIR "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec"
----
vitis_hls -f run_hls.tcl;

****** Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.2 (64-bit)
  **** SW Build 3367213 on Tue Oct 19 02:47:39 MDT 2021
  **** IP Build 3369179 on Thu Oct 21 08:25:16 MDT 2021
    ** Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.

source /tools/Xilinx/Vitis_HLS/2021.2/scripts/vitis_hls/hls.tcl -notrace
INFO: Applying HLS Y2K22 patch v1.2 for IP revision
INFO: [HLS 200-10] Running '/tools/Xilinx/Vitis_HLS/2021.2/bin/unwrapped/lnx64.o/vitis_hls'
INFO: [HLS 200-10] For user 'janethamrani' on host 'superlu' (Linux_x86_64 version 5.4.0-137-generic) on Sat Jan 28 10:51:30 EST 2023
INFO: [HLS 200-10] On os Ubuntu 18.04.6 LTS
INFO: [HLS 200-10] In directory '/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec'
Sourcing Tcl script 'run_hls.tcl'
INFO: [HLS 200-1510] Running: open_project -reset test.prj 
INFO: [HLS 200-10] Opening and resetting project '/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj'.
WARNING: [HLS 200-40] No /home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/solution1.aps file found.
INFO: [HLS 200-1510] Running: add_files test_decoder.cpp /home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jfifparser.cpp /home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp -cflags -I/home/janethamrani/Vitis_Libraries/codec/L1/include -std=c++0x -g -O0 
INFO: [HLS 200-10] Adding design file 'test_decoder.cpp' to the project
INFO: [HLS 200-10] Adding design file '/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jfifparser.cpp' to the project
INFO: [HLS 200-10] Adding design file '/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp' to the project
INFO: [HLS 200-1510] Running: add_files -tb test_decoder.cpp -cflags -I/home/janethamrani/Vitis_Libraries/codec/L1/include -std=c++0x 
INFO: [HLS 200-10] Adding test bench file 'test_decoder.cpp' to the project
INFO: [HLS 200-1510] Running: set_top Huffman_decoder 
INFO: [HLS 200-1510] Running: open_solution -reset solution1 
INFO: [HLS 200-10] Creating and opening solution '/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1'.
INFO: [HLS 200-10] Cleaning up the solution database.
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 9.15 seconds. CPU system time: 0.74 seconds. Elapsed time: 9.32 seconds; current allocated memory: 287.129 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 214-284] Auto array partition mode is set into default.
INFO: [HLS 214-291] Loop 'VITIS_LOOP_431_2' is marked as complete unroll implied by the pipeline pragma (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:431:31)
INFO: [HLS 214-291] Loop 'VITIS_LOOP_402_1' is marked as complete unroll implied by the pipeline pragma (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:402:31)
INFO: [HLS 214-186] Unrolling loop 'VITIS_LOOP_431_2' (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:431:31) in function 'xf::codec::details::Huffman_decoder' completely with a factor of 3 (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:185:0)
INFO: [HLS 214-186] Unrolling loop 'VITIS_LOOP_402_1' (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:402:31) in function 'xf::codec::details::Huffman_decoder' completely with a factor of 3 (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:185:0)
INFO: [HLS 214-248] Applying array_partition to 'lastDC': Complete partitioning on dimension 1. (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:190:10)
INFO: [HLS 214-241] Aggregating fifo (hls::stream) variable 'block_strm' with compact=bit mode in 24-bits (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:185:0)
INFO: [HLS 214-241] Aggregating bram variable 'dc_huff_start_code' with compact=bit mode in 14-bits (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:185:0)
INFO: [HLS 214-241] Aggregating bram variable 'ac_huff_start_code' with compact=bit mode in 14-bits (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:185:0)
INFO: [HLS 214-241] Aggregating fifo (hls::stream) variable 'sign_no_huff' with compact=bit mode in 1-bits (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:185:0)
INFO: [HLS 214-241] Aggregating fifo (hls::stream) variable 'huff_sos_strm' with compact=bit mode in 34-bits (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:185:0)
INFO: [HLS 214-270] Starting automatic array partition analysis...
INFO: [HLS 214-131] Inlining function '_llvm.fpga.pack.none.i48.sl_i8i8i16i1s' into '_llvm.fpga.unpack.bits.s_struct.xf::codec::sos_datas.i34.1'
INFO: [HLS 214-131] Inlining function '_llvm.fpga.unpack.bits.s_struct.xf::codec::sos_datas.i34.1' into 'xf::codec::details::Huffman_decoder(hls::stream<xf::codec::sos_data, 0>&, hls::stream<bool, 0>&, unsigned short const (*) [2][512], unsigned char const (*) [165], ap_uint<14> const (*) [6], short const (*) [16], unsigned char const (*) [12], ap_uint<14> const (*) [3], short const (*) [16], ap_uint<12>, unsigned char, unsigned short, unsigned char const*, unsigned int, bool&, hls::stream<ap_uint<24>, 0>&)' (/tools/Xilinx/Vitis_HLS/2021.2/common/technology/autopilot/hls_stream_39.h:144:9)
INFO: [HLS 214-131] Inlining function '_llvm.fpga.pack.bits.i24.s_struct.ap_uint<24>s.1' into 'xf::codec::details::Huffman_decoder(hls::stream<xf::codec::sos_data, 0>&, hls::stream<bool, 0>&, unsigned short const (*) [2][512], unsigned char const (*) [165], ap_uint<14> const (*) [6], short const (*) [16], unsigned char const (*) [12], ap_uint<14> const (*) [3], short const (*) [16], ap_uint<12>, unsigned char, unsigned short, unsigned char const*, unsigned int, bool&, hls::stream<ap_uint<24>, 0>&)' (/tools/Xilinx/Vitis_HLS/2021.2/common/technology/autopilot/hls_stream_39.h:173:9)
INFO: [HLS 214-131] Inlining function '_llvm.fpga.pack.none.i24.s_struct.ap_uint<24>s' into 'xf::codec::details::Huffman_decoder(hls::stream<xf::codec::sos_data, 0>&, hls::stream<bool, 0>&, unsigned short const (*) [2][512], unsigned char const (*) [165], ap_uint<14> const (*) [6], short const (*) [16], unsigned char const (*) [12], ap_uint<14> const (*) [3], short const (*) [16], ap_uint<12>, unsigned char, unsigned short, unsigned char const*, unsigned int, bool&, hls::stream<ap_uint<24>, 0>&)' (/tools/Xilinx/Vitis_HLS/2021.2/common/technology/autopilot/hls_stream_39.h:173:9)
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 2.89 seconds. CPU system time: 0.18 seconds. Elapsed time: 3.08 seconds; current allocated memory: 287.555 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 287.555 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.05 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.05 seconds; current allocated memory: 300.082 MB.
INFO: [HLS 200-10] Checking synthesizability ...
WARNING: [SYNCHK 200-23] /tools/Xilinx/Vitis_HLS/2021.2/common/technology/autopilot/ap_int_ref.h:674: variable-indexed range selection may cause suboptimal QoR.
INFO: [SYNCHK 200-10] 0 error(s), 1 warning(s).
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.1 seconds. CPU system time: 0 seconds. Elapsed time: 0.11 seconds; current allocated memory: 316.180 MB.
INFO: [XFORM 203-510] Pipelining loop 'Loop-2' in function 'xf::codec::details::Huffman_decoder' automatically.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock to (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:324:32) in function 'xf::codec::details::Huffman_decoder'... converting 3 basic blocks.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock to (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:371:17) in function 'xf::codec::details::Huffman_decoder'... converting 3 basic blocks.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (/tools/Xilinx/Vitis_HLS/2021.2/common/technology/autopilot/hls_stream_39.h:144:9) to (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:334:9) in function 'xf::codec::details::Huffman_decoder'... converting 4 basic blocks.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock to (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:411:17) in function 'xf::codec::details::Huffman_decoder'... converting 4 basic blocks.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock to (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:442:17) in function 'xf::codec::details::Huffman_decoder'... converting 3 basic blocks.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock to (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:492:13) in function 'xf::codec::details::Huffman_decoder'... converting 4 basic blocks.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:497:17) to (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:508:17) in function 'xf::codec::details::Huffman_decoder'... converting 8 basic blocks.
INFO: [XFORM 203-11] Balancing expressions in function 'xf::codec::details::Huffman_decoder' (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:135:9)...3 expression(s) balanced.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.2 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.21 seconds; current allocated memory: 353.918 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.13 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.14 seconds; current allocated memory: 389.051 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'Huffman_decoder' ...
WARNING: [SYN 201-103] Legalizing function name 'reg<unsigned short>' to 'reg_unsigned_short_s'.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'Huffman_decoder_Pipeline_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'Loop 1'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 1, loop 'Loop 1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.07 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.07 seconds; current allocated memory: 390.875 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0.01 seconds; current allocated memory: 390.875 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'reg_unsigned_short_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining function 'reg<unsigned short>'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 2, function 'reg<unsigned short>'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.02 seconds; current allocated memory: 390.875 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0.02 seconds; current allocated memory: 390.875 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'Huffman_decoder_Pipeline_DECODE_LOOP' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'DECODE_LOOP'.
WARNING: [HLS 200-885] The II Violation in module 'Huffman_decoder_Pipeline_DECODE_LOOP' (loop 'DECODE_LOOP'): Unable to schedule 'load' operation ('ac_huff_start_code_load_4') on array 'ac_huff_start_code' due to limited memory ports (II = 1). Please consider using a memory core with more ports or partitioning the array 'ac_huff_start_code'.
Resolution: For help on HLS 200-885 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-885.html
WARNING: [HLS 200-885] The II Violation in module 'Huffman_decoder_Pipeline_DECODE_LOOP' (loop 'DECODE_LOOP'): Unable to schedule 'load' operation ('ac_huff_start_code_load_4') on array 'ac_huff_start_code' due to limited memory ports (II = 2). Please consider using a memory core with more ports or partitioning the array 'ac_huff_start_code'.
Resolution: For help on HLS 200-885 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-885.html
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 3, Depth = 4, loop 'DECODE_LOOP'
WARNING: [HLS 200-871] Estimated clock period (4.19445ns) exceeds the target (target clock period: 3.33ns, clock uncertainty: 0.8991ns, effective delay budget: 2.4309ns).
Resolution: For help on HLS 200-871 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-871.html
WARNING: [HLS 200-1016] The critical path in module 'Huffman_decoder_Pipeline_DECODE_LOOP' consists of the following:	'add' operation ('add_ln502', /home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:502) [567]  (0.705 ns)
	'shl' operation ('shl_ln502', /home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:502) [569]  (0 ns)
	'icmp' operation ('icmp_ln502', /home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:502) [570]  (0.859 ns)
	'and' operation ('and_ln502', /home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:502) [576]  (0 ns)
	'select' operation ('select_ln502', /home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:502) [577]  (0 ns)
	'select' operation ('block_tmp', /home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:502) [578]  (0.243 ns)
	'add' operation ('block', /home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:515) [584]  (0.785 ns)
	multiplexor before 'phi' operation ('block') with incoming values : ('block_tmp', /home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:502) ('block', /home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:515) [599]  (0.387 ns)
	'phi' operation ('block') with incoming values : ('block_tmp', /home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:502) ('block', /home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:515) [599]  (0 ns)
	fifo write operation ('block_strm_write_ln173', /tools/Xilinx/Vitis_HLS/2021.2/common/technology/autopilot/hls_stream_39.h:173) on port 'block_strm' (/tools/Xilinx/Vitis_HLS/2021.2/common/technology/autopilot/hls_stream_39.h:173) [605]  (1.22 ns)

Resolution: For help on HLS 200-1016 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-1016.html
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.48 seconds. CPU system time: 0 seconds. Elapsed time: 0.48 seconds; current allocated memory: 402.059 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.25 seconds. CPU system time: 0 seconds. Elapsed time: 0.25 seconds; current allocated memory: 402.059 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'Huffman_decoder_Pipeline_INTER_LOOP' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'INTER_LOOP'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 1, loop 'INTER_LOOP'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.4 seconds. CPU system time: 0 seconds. Elapsed time: 0.4 seconds; current allocated memory: 402.059 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0.01 seconds; current allocated memory: 402.059 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'Huffman_decoder' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 402.059 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.15 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.15 seconds; current allocated memory: 402.059 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'Huffman_decoder_Pipeline_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'Huffman_decoder_Pipeline_1'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.29 seconds. CPU system time: 0 seconds. Elapsed time: 0.29 seconds; current allocated memory: 402.059 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'reg_unsigned_short_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'reg_unsigned_short_s'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 402.059 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'Huffman_decoder_Pipeline_DECODE_LOOP' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'Huffman_decoder_Pipeline_DECODE_LOOP' pipeline 'DECODE_LOOP' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Finished creating RTL model for 'Huffman_decoder_Pipeline_DECODE_LOOP'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.1 seconds. CPU system time: 0 seconds. Elapsed time: 0.1 seconds; current allocated memory: 402.059 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'Huffman_decoder_Pipeline_INTER_LOOP' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'Huffman_decoder_Pipeline_INTER_LOOP'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 1.1 seconds. CPU system time: 0.01 seconds. Elapsed time: 1.1 seconds; current allocated memory: 410.613 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'Huffman_decoder' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/huff_sos_strm' to 'ap_fifo'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/sign_no_huff' to 'ap_fifo'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/dht_tbl1' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/ac_val' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/ac_huff_start_code' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/ac_huff_start_addr' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/dc_val' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/dc_huff_start_code' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/dc_huff_start_addr' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/cyc_cmp' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/hls_cs_cmpc' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/hls_mcuh' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/hls_mbs' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/hls_mcuc' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/rtn2' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/block_strm' to 'ap_fifo'.
INFO: [RTGEN 206-500] Setting interface mode on function 'Huffman_decoder' to 'ap_ctrl_hs'.
WARNING: [RTGEN 206-101] Port 'Huffman_decoder/hls_cs_cmpc' has no fanin or fanout and is left dangling.
               Please use C simulation to confirm this function argument can be read from or written to.
WARNING: [RTGEN 206-101] Port 'Huffman_decoder/hls_mcuh' has no fanin or fanout and is left dangling.
               Please use C simulation to confirm this function argument can be read from or written to.
INFO: [RTGEN 206-100] Generating core module 'mul_10ns_32s_32_2_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'Huffman_decoder'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.05 seconds; current allocated memory: 410.613 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.7 seconds. CPU system time: 0 seconds. Elapsed time: 0.7 seconds; current allocated memory: 415.234 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.62 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.64 seconds; current allocated memory: 418.312 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for Huffman_decoder.
INFO: [VLOG 209-307] Generating Verilog RTL for Huffman_decoder.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 238.41 MHz
INFO: [HLS 200-111] Finished Command csynth_design CPU user time: 16.88 seconds. CPU system time: 1.01 seconds. Elapsed time: 17.32 seconds; current allocated memory: -800.527 MB.
INFO: [HLS 200-112] Total CPU user time: 18.83 seconds. Total CPU system time: 1.37 seconds. Total elapsed time: 18.78 seconds; peak allocated memory: 1.191 GB.
INFO: [Common 17-206] Exiting vitis_hls at Sat Jan 28 10:51:49 2023...


```
#### CSYNTH Report
```sh
================================================================
== Vitis HLS Report for 'Huffman_decoder_Pipeline_DECODE_LOOP'
================================================================
* Date:           Sat Jan 28 11:02:17 2023

* Version:        2021.2 (Build 3367213 on Tue Oct 19 02:47:39 MDT 2021)
* Project:        test.prj
* Solution:       solution1 (Vivado IP Flow Target)
* Product family: virtexuplus
* Target device:  xcu280-fsvh2892-2L-e


================================================================
== Performance Estimates
================================================================
+ Timing:
    * Summary:
    +--------+---------+----------+------------+
    |  Clock |  Target | Estimated| Uncertainty|
    +--------+---------+----------+------------+
    |ap_clk  |  3.33 ns|  4.194 ns|     0.90 ns|
    +--------+---------+----------+------------+

+ Latency:
    * Summary:
    +---------+---------+----------+----------+-------+-------+---------+
    |  Latency (cycles) |  Latency (absolute) |    Interval   | Pipeline|
    |   min   |   max   |    min   |    max   |  min  |  max  |   Type  |
    +---------+---------+----------+----------+-------+-------+---------+
    |    30002|    30002|  0.126 ms|  0.126 ms|  30002|  30002|       no|
    +---------+---------+----------+----------+-------+-------+---------+

    + Detail:
        * Instance:
        +----------------------------------+----------------------+---------+---------+----------+----------+-----+-----+---------+
        |                                  |                      |  Latency (cycles) |  Latency (absolute) |  Interval | Pipeline|
        |             Instance             |        Module        |   min   |   max   |    min   |    max   | min | max |   Type  |
        +----------------------------------+----------------------+---------+---------+----------+----------+-----+-----+---------+
        |grp_reg_unsigned_short_s_fu_2665  |reg_unsigned_short_s  |        1|        1|  4.194 ns|  4.194 ns|    1|    1|      yes|
        +----------------------------------+----------------------+---------+---------+----------+----------+-----+-----+---------+

        * Loop:
        +---------------+---------+---------+----------+-----------+-----------+-------+----------+
        |               |  Latency (cycles) | Iteration|  Initiation Interval  |  Trip |          |
        |   Loop Name   |   min   |   max   |  Latency |  achieved |   target  | Count | Pipelined|
        +---------------+---------+---------+----------+-----------+-----------+-------+----------+
        |- DECODE_LOOP  |    30000|    30000|         3|          3|          1|  10000|       yes|
        +---------------+---------+---------+----------+-----------+-----------+-------+----------+

================================================================
== Utilization Estimates
================================================================
* Summary:
+---------------------+---------+------+---------+---------+-----+
|         Name        | BRAM_18K|  DSP |    FF   |   LUT   | URAM|
+---------------------+---------+------+---------+---------+-----+
|DSP                  |        -|     -|        -|        -|    -|
|Expression           |        -|     -|        0|     2357|    -|
|FIFO                 |        -|     -|        -|        -|    -|
|Instance             |        -|     -|       33|       14|    -|
|Memory               |        -|     -|        -|        -|    -|
|Multiplexer          |        -|     -|        -|      895|    -|
|Register             |        -|     -|      589|        -|    -|
+---------------------+---------+------+---------+---------+-----+
|Total                |        0|     0|      622|     3266|    0|
+---------------------+---------+------+---------+---------+-----+
|Available SLR        |     1344|  3008|   869120|   434560|  320|
+---------------------+---------+------+---------+---------+-----+
|Utilization SLR (%)  |        0|     0|       ~0|       ~0|    0|
+---------------------+---------+------+---------+---------+-----+
|Available            |     4032|  9024|  2607360|  1303680|  960|
+---------------------+---------+------+---------+---------+-----+
|Utilization (%)      |        0|     0|       ~0|       ~0|    0|
+---------------------+---------+------+---------+---------+-----+

+ Detail:
    * Instance:
    +----------------------------------+----------------------+---------+----+----+----+-----+
    |             Instance             |        Module        | BRAM_18K| DSP| FF | LUT| URAM|
    +----------------------------------+----------------------+---------+----+----+----+-----+
    |grp_reg_unsigned_short_s_fu_2665  |reg_unsigned_short_s  |        0|   0|  33|  14|    0|
    +----------------------------------+----------------------+---------+----+----+----+-----+
    |Total                             |                      |        0|   0|  33|  14|    0|
    +----------------------------------+----------------------+---------+----+----+----+-----+

    * DSP:
    N/A

    * Memory:
    N/A

    * FIFO:
    N/A


================================================================
* Summary:
+---------------------------------+-----+-----+------------+--------------------------------------+--------------+
|            RTL Ports            | Dir | Bits|  Protocol  |             Source Object            |    C Type    |
+---------------------------------+-----+-----+------------+--------------------------------------+--------------+
|ap_clk                           |   in|    1|  ap_ctrl_hs|  Huffman_decoder_Pipeline_DECODE_LOOP|  return value|
|ap_rst                           |   in|    1|  ap_ctrl_hs|  Huffman_decoder_Pipeline_DECODE_LOOP|  return value|
|ap_start                         |   in|    1|  ap_ctrl_hs|  Huffman_decoder_Pipeline_DECODE_LOOP|  return value|
|ap_done                          |  out|    1|  ap_ctrl_hs|  Huffman_decoder_Pipeline_DECODE_LOOP|  return value|
|ap_idle                          |  out|    1|  ap_ctrl_hs|  Huffman_decoder_Pipeline_DECODE_LOOP|  return value|
|ap_ready                         |  out|    1|  ap_ctrl_hs|  Huffman_decoder_Pipeline_DECODE_LOOP|  return value|
|huff_sos_strm_dout               |   in|   34|     ap_fifo|                         huff_sos_strm|       pointer|
|huff_sos_strm_empty_n            |   in|    1|     ap_fifo|                         huff_sos_strm|       pointer|
|huff_sos_strm_read               |  out|    1|     ap_fifo|                         huff_sos_strm|       pointer|
|arrayidx121_promoted1192_reload  |   in|   16|     ap_none|       arrayidx121_promoted1192_reload|        scalar|
|arrayidx120_promoted1190_reload  |   in|   16|     ap_none|       arrayidx120_promoted1190_reload|        scalar|
|arrayidx119_promoted1188_reload  |   in|   16|     ap_none|       arrayidx119_promoted1188_reload|        scalar|
|cyc_cmp                          |   in|   12|     ap_none|                               cyc_cmp|        scalar|
|tmp_12                           |   in|    1|     ap_none|                                tmp_12|        scalar|
|dht_tbl1_address0                |  out|   11|   ap_memory|                              dht_tbl1|         array|
|dht_tbl1_ce0                     |  out|    1|   ap_memory|                              dht_tbl1|         array|
|dht_tbl1_q0                      |   in|   16|   ap_memory|                              dht_tbl1|         array|
|ac_huff_start_code_address0      |  out|    4|   ap_memory|                    ac_huff_start_code|         array|
|ac_huff_start_code_ce0           |  out|    1|   ap_memory|                    ac_huff_start_code|         array|
|ac_huff_start_code_q0            |   in|   14|   ap_memory|                    ac_huff_start_code|         array|
|ac_huff_start_code_address1      |  out|    4|   ap_memory|                    ac_huff_start_code|         array|
|ac_huff_start_code_ce1           |  out|    1|   ap_memory|                    ac_huff_start_code|         array|
|ac_huff_start_code_q1            |   in|   14|   ap_memory|                    ac_huff_start_code|         array|
|dc_huff_start_code_address0      |  out|    3|   ap_memory|                    dc_huff_start_code|         array|
|dc_huff_start_code_ce0           |  out|    1|   ap_memory|                    dc_huff_start_code|         array|
|dc_huff_start_code_q0            |   in|   14|   ap_memory|                    dc_huff_start_code|         array|
|dc_huff_start_code_address1      |  out|    3|   ap_memory|                    dc_huff_start_code|         array|
|dc_huff_start_code_ce1           |  out|    1|   ap_memory|                    dc_huff_start_code|         array|
|dc_huff_start_code_q1            |   in|   14|   ap_memory|                    dc_huff_start_code|         array|
|ac_huff_start_addr_address0      |  out|    5|   ap_memory|                    ac_huff_start_addr|         array|
|ac_huff_start_addr_ce0           |  out|    1|   ap_memory|                    ac_huff_start_addr|         array|
|ac_huff_start_addr_q0            |   in|   16|   ap_memory|                    ac_huff_start_addr|         array|
|dc_huff_start_addr_address0      |  out|    5|   ap_memory|                    dc_huff_start_addr|         array|
|dc_huff_start_addr_ce0           |  out|    1|   ap_memory|                    dc_huff_start_addr|         array|
|dc_huff_start_addr_q0            |   in|   16|   ap_memory|                    dc_huff_start_addr|         array|
|ac_val_address0                  |  out|    9|   ap_memory|                                ac_val|         array|
|ac_val_ce0                       |  out|    1|   ap_memory|                                ac_val|         array|
|ac_val_q0                        |   in|    8|   ap_memory|                                ac_val|         array|
|dc_val_address0                  |  out|    5|   ap_memory|                                dc_val|         array|
|dc_val_ce0                       |  out|    1|   ap_memory|                                dc_val|         array|
|dc_val_q0                        |   in|    8|   ap_memory|                                dc_val|         array|
|block_strm_din                   |  out|   24|     ap_fifo|                            block_strm|       pointer|
|block_strm_full_n                |   in|    1|     ap_fifo|                            block_strm|       pointer|
|block_strm_write                 |  out|    1|     ap_fifo|                            block_strm|       pointer|
|mul                              |   in|   32|     ap_none|                                   mul|        scalar|
|e_5_out                          |  out|    1|      ap_vld|                               e_5_out|       pointer|
|e_5_out_ap_vld                   |  out|    1|      ap_vld|                               e_5_out|       pointer|
|test_out                         |  out|   32|      ap_vld|                              test_out|       pointer|
|test_out_ap_vld                  |  out|    1|      ap_vld|                              test_out|       pointer|
+---------------------------------+-----+-----+------------+--------------------------------------+--------------+

```
#### COSIM
```sh
janethamrani@superlu:~/Vitis_Libraries/codec/L1/tests/jpegdec$ make run DEVICE=/opt/xilinx/platforms/xilinx_u280_xdma_201920_3/xilinx_u280_xdma_201920_3.xpfm COSIM=1
INFO: [HLS 200-10] Analyzing design file 'test_decoder.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 9.27 seconds. CPU system time: 0.78 seconds. Elapsed time: 9.5 seconds; current allocated memory: 287.156 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 214-284] Auto array partition mode is set into default.
INFO: [HLS 214-291] Loop 'VITIS_LOOP_431_2' is marked as complete unroll implied by the pipeline pragma (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:431:31)
INFO: [HLS 214-291] Loop 'VITIS_LOOP_402_1' is marked as complete unroll implied by the pipeline pragma (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:402:31)
INFO: [HLS 214-186] Unrolling loop 'VITIS_LOOP_431_2' (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:431:31) in function 'xf::codec::details::Huffman_decoder' completely with a factor of 3 (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:185:0)
INFO: [HLS 214-186] Unrolling loop 'VITIS_LOOP_402_1' (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:402:31) in function 'xf::codec::details::Huffman_decoder' completely with a factor of 3 (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:185:0)
INFO: [HLS 214-248] Applying array_partition to 'lastDC': Complete partitioning on dimension 1. (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:190:10)
INFO: [HLS 214-241] Aggregating fifo (hls::stream) variable 'block_strm' with compact=bit mode in 24-bits (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:185:0)
INFO: [HLS 214-241] Aggregating bram variable 'dc_huff_start_code' with compact=bit mode in 14-bits (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:185:0)
INFO: [HLS 214-241] Aggregating bram variable 'ac_huff_start_code' with compact=bit mode in 14-bits (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:185:0)
INFO: [HLS 214-241] Aggregating fifo (hls::stream) variable 'sign_no_huff' with compact=bit mode in 1-bits (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:185:0)
INFO: [HLS 214-241] Aggregating fifo (hls::stream) variable 'huff_sos_strm' with compact=bit mode in 34-bits (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:185:0)
INFO: [HLS 214-270] Starting automatic array partition analysis...
INFO: [HLS 214-131] Inlining function '_llvm.fpga.pack.none.i48.sl_i8i8i16i1s' into '_llvm.fpga.unpack.bits.s_struct.xf::codec::sos_datas.i34.1'
INFO: [HLS 214-131] Inlining function '_llvm.fpga.unpack.bits.s_struct.xf::codec::sos_datas.i34.1' into 'xf::codec::details::Huffman_decoder(hls::stream<xf::codec::sos_data, 0>&, hls::stream<bool, 0>&, unsigned short const (*) [2][512], unsigned char const (*) [165], ap_uint<14> const (*) [6], short const (*) [16], unsigned char const (*) [12], ap_uint<14> const (*) [3], short const (*) [16], ap_uint<12>, unsigned char, unsigned short, unsigned char const*, unsigned int, bool&, hls::stream<ap_uint<24>, 0>&)' (/tools/Xilinx/Vitis_HLS/2021.2/common/technology/autopilot/hls_stream_39.h:144:9)
INFO: [HLS 214-131] Inlining function '_llvm.fpga.pack.bits.i24.s_struct.ap_uint<24>s.1' into 'xf::codec::details::Huffman_decoder(hls::stream<xf::codec::sos_data, 0>&, hls::stream<bool, 0>&, unsigned short const (*) [2][512], unsigned char const (*) [165], ap_uint<14> const (*) [6], short const (*) [16], unsigned char const (*) [12], ap_uint<14> const (*) [3], short const (*) [16], ap_uint<12>, unsigned char, unsigned short, unsigned char const*, unsigned int, bool&, hls::stream<ap_uint<24>, 0>&)' (/tools/Xilinx/Vitis_HLS/2021.2/common/technology/autopilot/hls_stream_39.h:173:9)
INFO: [HLS 214-131] Inlining function '_llvm.fpga.pack.none.i24.s_struct.ap_uint<24>s' into 'xf::codec::details::Huffman_decoder(hls::stream<xf::codec::sos_data, 0>&, hls::stream<bool, 0>&, unsigned short const (*) [2][512], unsigned char const (*) [165], ap_uint<14> const (*) [6], short const (*) [16], unsigned char const (*) [12], ap_uint<14> const (*) [3], short const (*) [16], ap_uint<12>, unsigned char, unsigned short, unsigned char const*, unsigned int, bool&, hls::stream<ap_uint<24>, 0>&)' (/tools/Xilinx/Vitis_HLS/2021.2/common/technology/autopilot/hls_stream_39.h:173:9)
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 2.93 seconds. CPU system time: 0.18 seconds. Elapsed time: 3.1 seconds; current allocated memory: 287.566 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 287.566 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.06 seconds. CPU system time: 0 seconds. Elapsed time: 0.06 seconds; current allocated memory: 300.098 MB.
INFO: [HLS 200-10] Checking synthesizability ...
WARNING: [SYNCHK 200-23] /tools/Xilinx/Vitis_HLS/2021.2/common/technology/autopilot/ap_int_ref.h:674: variable-indexed range selection may cause suboptimal QoR.
INFO: [SYNCHK 200-10] 0 error(s), 1 warning(s).
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.09 seconds. CPU system time: 0 seconds. Elapsed time: 0.1 seconds; current allocated memory: 316.199 MB.
INFO: [XFORM 203-510] Pipelining loop 'Loop-2' in function 'xf::codec::details::Huffman_decoder' automatically.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock to (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:324:32) in function 'xf::codec::details::Huffman_decoder'... converting 3 basic blocks.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock to (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:371:17) in function 'xf::codec::details::Huffman_decoder'... converting 3 basic blocks.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (/tools/Xilinx/Vitis_HLS/2021.2/common/technology/autopilot/hls_stream_39.h:144:9) to (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:334:9) in function 'xf::codec::details::Huffman_decoder'... converting 4 basic blocks.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock to (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:411:17) in function 'xf::codec::details::Huffman_decoder'... converting 4 basic blocks.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock to (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:442:17) in function 'xf::codec::details::Huffman_decoder'... converting 3 basic blocks.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock to (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:492:13) in function 'xf::codec::details::Huffman_decoder'... converting 4 basic blocks.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:497:17) to (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:508:17) in function 'xf::codec::details::Huffman_decoder'... converting 8 basic blocks.
INFO: [XFORM 203-11] Balancing expressions in function 'xf::codec::details::Huffman_decoder' (/home/janethamrani/Vitis_Libraries/codec/L1/src/XAcc_jpegdecoder.cpp:135:9)...3 expression(s) balanced.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.21 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.21 seconds; current allocated memory: 353.699 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.14 seconds. CPU system time: 0 seconds. Elapsed time: 0.14 seconds; current allocated memory: 389.078 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'Huffman_decoder' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'Huffman_decoder_Pipeline_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'Loop 1'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 1, loop 'Loop 1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.07 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.08 seconds; current allocated memory: 390.930 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0.01 seconds; current allocated memory: 390.930 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'reg_unsigned_short_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining function 'reg<unsigned short>'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 2, function 'reg<unsigned short>'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.02 seconds; current allocated memory: 390.930 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.02 seconds; current allocated memory: 390.930 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'Huffman_decoder_Pipeline_DECODE_LOOP' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'DECODE_LOOP'.
NFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.48 seconds. CPU system time: 0 seconds. Elapsed time: 0.48 seconds; current allocated memory: 402.043 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.24 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.25 seconds; current allocated memory: 402.043 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'Huffman_decoder_Pipeline_INTER_LOOP' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'INTER_LOOP'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 1, loop 'INTER_LOOP'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.41 seconds. CPU system time: 0 seconds. Elapsed time: 0.41 seconds; current allocated memory: 402.043 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0.01 seconds; current allocated memory: 402.043 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'Huffman_decoder' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 402.043 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.16 seconds. CPU system time: 0 seconds. Elapsed time: 0.16 seconds; current allocated memory: 402.043 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'Huffman_decoder_Pipeline_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'Huffman_decoder_Pipeline_1'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.31 seconds. CPU system time: 0 seconds. Elapsed time: 0.31 seconds; current allocated memory: 402.043 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'reg_unsigned_short_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'reg_unsigned_short_s'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 402.043 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'Huffman_decoder_Pipeline_DECODE_LOOP' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'Huffman_decoder_Pipeline_DECODE_LOOP' pipeline 'DECODE_LOOP' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Finished creating RTL model for 'Huffman_decoder_Pipeline_DECODE_LOOP'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.1 seconds. CPU system time: 0 seconds. Elapsed time: 0.1 seconds; current allocated memory: 402.043 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'Huffman_decoder_Pipeline_INTER_LOOP' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'Huffman_decoder_Pipeline_INTER_LOOP'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 1.14 seconds. CPU system time: 0 seconds. Elapsed time: 1.14 seconds; current allocated memory: 410.633 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'Huffman_decoder' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/huff_sos_strm' to 'ap_fifo'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/sign_no_huff' to 'ap_fifo'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/dht_tbl1' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/ac_val' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/ac_huff_start_code' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/ac_huff_start_addr' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/dc_val' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/dc_huff_start_code' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/dc_huff_start_addr' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/cyc_cmp' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/hls_cs_cmpc' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/hls_mcuh' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/hls_mbs' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/hls_mcuc' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/rtn2' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/block_strm' to 'ap_fifo'.
INFO: [RTGEN 206-500] Setting interface mode on function 'Huffman_decoder' to 'ap_ctrl_hs'.
WARNING: [RTGEN 206-101] Port 'Huffman_decoder/hls_cs_cmpc' has no fanin or fanout and is left dangling.
               Please use C simulation to confirm this function argument can be read from or written to.
WARNING: [RTGEN 206-101] Port 'Huffman_decoder/hls_mcuh' has no fanin or fanout and is left dangling.
               Please use C simulation to confirm this function argument can be read from or written to.
INFO: [RTGEN 206-100] Generating core module 'mul_10ns_32s_32_2_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'Huffman_decoder'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.05 seconds; current allocated memory: 410.633 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.71 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.72 seconds; current allocated memory: 415.254 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.66 seconds. CPU system time: 0 seconds. Elapsed time: 0.65 seconds; current allocated memory: 418.312 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for Huffman_decoder.
INFO: [VLOG 209-307] Generating Verilog RTL for Huffman_decoder.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 238.41 MHz
INFO: [HLS 200-111] Finished Command csynth_design CPU user time: 17.19 seconds. CPU system time: 1 seconds. Elapsed time: 17.62 seconds; current allocated memory: -800.457 MB.
INFO: [HLS 200-1510] Running: cosim_design -argv -JPEGFile /home/janethamrani/Vitis_Libraries/codec/L1/images/t0.jpg 
INFO: [COSIM 212-47] Using XSIM for RTL simulation.
INFO: [COSIM 212-14] Instrumenting C test bench ...
make[1]: Entering directory '/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/sim/wrapc'
   Build using "/tools/Xilinx/Vitis_HLS/2021.2/tps/lnx64/gcc-6.2.0/bin/g++"
   Compiling test_decoder.cpp_pre.cpp.tb.cpp
   Compiling apatb_Huffman_decoder_util.cpp
   Compiling XAcc_jfifparser.cpp_pre.cpp.tb.cpp
   Compiling XAcc_jpegdecoder.cpp_pre.cpp.tb.cpp
   Compiling apatb_Huffman_decoder.cpp
   Compiling apatb_Huffman_decoder_ir.ll
   Generating cosim.tv.exe
make[1]: Leaving directory '/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/sim/wrapc'
INFO: [COSIM 212-302] Starting C TB testing ... 

------------ Test for decode image.jpg  -------------
WARNING: /home/janethamrani/Vitis_Libraries/codec/L1/images/t0.jpg will be opened for binary read.
51193 entries read from /home/janethamrani/Vitis_Libraries/codec/L1/images/t0.jpg
hls_mcuv=33, hls_mcuh=39, hls_mcuc=1287, 
huffman 1 bits codes is :0b0000000000000000
huffman 2 bits codes is :0b0000000000000000
huffman 3 bits codes is :0b0000000000000010
huffman 4 bits codes is :0b0000000000001110
huffman 5 bits codes is :0b0000000000011110
huffman 6 bits codes is :0b0000000000111110
huffman 7 bits codes is :0b0000000001111110
huffman 8 bits codes is :0b0000000011111110
huffman 9 bits codes is :0b0000000111111110
huffman 10 bits codes is :0b0000001111111110
huffman 11 bits codes is :0b0000011111111100
huffman 12 bits codes is :0b0000111111111000
huffman 13 bits codes is :0b0001111111110000
huffman 14 bits codes is :0b0011111111100000
huffman 15 bits codes is :0b0111111111000000
huffman 16 bits codes is :0b1111111110000000
huffman 1 bits start addr is :0
huffman 2 bits start addr is :0
huffman 3 bits start addr is :1
huffman 4 bits start addr is :8
huffman 5 bits start addr is :23
huffman 6 bits start addr is :54
huffman 7 bits start addr is :117
huffman 8 bits start addr is :244
huffman 9 bits start addr is :499
huffman 10 bits start addr is :1010
huffman 11 bits start addr is :2032
huffman 12 bits start addr is :4076
huffman 13 bits start addr is :8164
huffman 14 bits start addr is :16340
huffman 15 bits start addr is :32692
huffman 16 bits start addr is :-140
huffman 1 bits codes is :0b0000000000000000
huffman 2 bits codes is :0b0000000000000000
huffman 3 bits codes is :0b0000000000000100
huffman 4 bits codes is :0b0000000000001010
huffman 5 bits codes is :0b0000000000011010
huffman 6 bits codes is :0b0000000000111010
huffman 7 bits codes is :0b0000000001111000
huffman 8 bits codes is :0b0000000011111000
huffman 9 bits codes is :0b0000000111110110
huffman 10 bits codes is :0b0000001111110110
huffman 11 bits codes is :0b0000011111110110
huffman 12 bits codes is :0b0000111111110100
huffman 13 bits codes is :0b0001111111110000
huffman 14 bits codes is :0b0011111111100000
huffman 15 bits codes is :0b0111111111000000
huffman 16 bits codes is :0b1111111110000010
huffman 1 bits start addr is :0
huffman 2 bits start addr is :0
huffman 3 bits start addr is :2
huffman 4 bits start addr is :7
huffman 5 bits start addr is :20
huffman 6 bits start addr is :49
huffman 7 bits start addr is :109
huffman 8 bits start addr is :233
huffman 9 bits start addr is :484
huffman 10 bits start addr is :991
huffman 11 bits start addr is :2010
huffman 12 bits start addr is :4052
huffman 13 bits start addr is :8140
huffman 14 bits start addr is :16316
huffman 15 bits start addr is :32668
huffman 16 bits start addr is :-163
huffman 1 bits codes is :0b0000000000000000
huffman 2 bits codes is :0b0000000000000000
huffman 3 bits codes is :0b0000000000000110
huffman 4 bits codes is :0b0000000000001110
huffman 5 bits codes is :0b0000000000011110
huffman 6 bits codes is :0b0000000000111110
huffman 7 bits codes is :0b0000000001111110
huffman 8 bits codes is :0b0000000011111110
huffman 9 bits codes is :0b0000000111111110
huffman 10 bits codes is :0b0000001111111110
huffman 11 bits codes is :0b0000011111111110
huffman 12 bits codes is :0b0000111111111110
huffman 13 bits codes is :0b0001111111111100
huffman 14 bits codes is :0b0011111111111000
huffman 15 bits codes is :0b0111111111110000
huffman 16 bits codes is :0b1111111111100000
huffman 1 bits start addr is :0
huffman 2 bits start addr is :0
huffman 3 bits start addr is :3
huffman 4 bits start addr is :10
huffman 5 bits start addr is :25
huffman 6 bits start addr is :56
huffman 7 bits start addr is :119
huffman 8 bits start addr is :246
huffman 9 bits start addr is :501
huffman 10 bits start addr is :1012
huffman 11 bits start addr is :2035
huffman 12 bits start addr is :4082
huffman 13 bits start addr is :8176
huffman 14 bits start addr is :16364
huffman 15 bits start addr is :32740
huffman 16 bits start addr is :-44
huffman 1 bits codes is :0b0000000000000000
huffman 2 bits codes is :0b0000000000000000
huffman 3 bits codes is :0b0000000000000100
huffman 4 bits codes is :0b0000000000001010
huffman 5 bits codes is :0b0000000000011000
huffman 6 bits codes is :0b0000000000111000
huffman 7 bits codes is :0b0000000001111000
huffman 8 bits codes is :0b0000000011110110
huffman 9 bits codes is :0b0000000111110100
huffman 10 bits codes is :0b0000001111110110
huffman 11 bits codes is :0b0000011111110110
huffman 12 bits codes is :0b0000111111110100
huffman 13 bits codes is :0b0001111111110000
huffman 14 bits codes is :0b0011111111100000
huffman 15 bits codes is :0b0111111111000010
huffman 16 bits codes is :0b1111111110001000
huffman 1 bits start addr is :0
huffman 2 bits start addr is :0
huffman 3 bits start addr is :2
huffman 4 bits start addr is :7
huffman 5 bits start addr is :19
huffman 6 bits start addr is :47
huffman 7 bits start addr is :107
huffman 8 bits start addr is :230
huffman 9 bits start addr is :480
huffman 10 bits start addr is :987
huffman 11 bits start addr is :2006
huffman 12 bits start addr is :4048
huffman 13 bits start addr is :8136
huffman 14 bits start addr is :16312
huffman 15 bits start addr is :32665
huffman 16 bits start addr is :-163
****the end 3 blocks before zigzag are : 
 ffffffb6,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000, 
  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000, 
  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000, 
  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000, 
  ffffffe6,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000, 
  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000, 
  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000, 
  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000, 
  0015,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000, 
  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000, 
  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000, 
  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000, 
 Ready for next image!
 INFO: [COSIM 212-333] Generating C post check test bench ...
INFO: [COSIM 212-12] Generating RTL test bench ...
INFO: [COSIM 212-1] *** C/RTL co-simulation file generation completed. ***
INFO: [COSIM 212-323] Starting verilog simulation. 
INFO: [COSIM 212-15] Starting XSIM ...
Vivado Simulator v2021.2
Copyright 1986-1999, 2001-2021 Xilinx, Inc. All Rights Reserved.
Running: /tools/Xilinx/Vivado/2021.2/bin/unwrapped/lnx64.o/xelab xil_defaultlib.apatb_Huffman_decoder_top glbl -Oenable_linking_all_libraries -prj Huffman_decoder.prj -L smartconnect_v1_0 -L axi_protocol_checker_v1_1_12 -L axi_protocol_checker_v1_1_13 -L axis_protocol_checker_v1_1_11 -L axis_protocol_checker_v1_1_12 -L xil_defaultlib -L unisims_ver -L xpm -L floating_point_v7_0_19 -L floating_point_v7_1_13 --lib ieee_proposed=./ieee_proposed -s Huffman_decoder 
Multi-threading is on. Using 14 slave threads.
WARNING: [XSIM 43-3431] One or more environment variables have been detected which affect the operation of the C compiler. These are typically not set in standard installations and are not tested by Xilinx, however they may be appropriate for your system, so the flow will attempt to continue.  If errors occur, try running xelab with the "-mt off -v 1" switches to see more information from the C compiler. The following environment variables have been detected:
    LIBRARY_PATH
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/sim/verilog/glbl.v" into library work
INFO: [VRFC 10-311] analyzing module glbl
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/sim/verilog/Huffman_decoder.autotb.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module apatb_Huffman_decoder_top
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/sim/verilog/AESL_autofifo_block_strm.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module AESL_autofifo_block_strm
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/sim/verilog/Huffman_decoder_Huffman_decoder_Pipeline_INTER_LOOP.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module Huffman_decoder_Huffman_decoder_Pipeline_INTER_LOOP
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/sim/verilog/Huffman_decoder_mul_10ns_32s_32_2_1.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module Huffman_decoder_mul_10ns_32s_32_2_1
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/sim/verilog/AESL_automem_dc_huff_start_addr.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module AESL_automem_dc_huff_start_addr
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/sim/verilog/AESL_automem_ac_huff_start_addr.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module AESL_automem_ac_huff_start_addr
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/sim/verilog/Huffman_decoder_Huffman_decoder_Pipeline_1.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module Huffman_decoder_Huffman_decoder_Pipeline_1
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/sim/verilog/AESL_autofifo_huff_sos_strm.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module AESL_autofifo_huff_sos_strm
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/sim/verilog/AESL_automem_dc_huff_start_code.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module AESL_automem_dc_huff_start_code
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/sim/verilog/Huffman_decoder.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module Huffman_decoder
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/sim/verilog/Huffman_decoder_flow_control_loop_pipe_sequential_init.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module Huffman_decoder_flow_control_loop_pipe_sequential_init
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/sim/verilog/AESL_autofifo_sign_no_huff.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module AESL_autofifo_sign_no_huff
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/sim/verilog/AESL_automem_dc_val.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module AESL_automem_dc_val
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/sim/verilog/Huffman_decoder_Huffman_decoder_Pipeline_DECODE_LOOP.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module Huffman_decoder_Huffman_decoder_Pipeline_DECODE_LOOP
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/sim/verilog/AESL_automem_dht_tbl1.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module AESL_automem_dht_tbl1
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/sim/verilog/AESL_automem_ac_huff_start_code.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module AESL_automem_ac_huff_start_code
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/sim/verilog/Huffman_decoder_reg_unsigned_short_s.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module Huffman_decoder_reg_unsigned_short_s
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/sim/verilog/AESL_automem_hls_mbs.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module AESL_automem_hls_mbs
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/sim/verilog/AESL_automem_ac_val.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module AESL_automem_ac_val
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/sim/verilog/dataflow_monitor.sv" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module dataflow_monitor
Starting static elaboration
Pass Through NonSizing Optimizer
Completed static elaboration
Starting simulation data flow analysis
Completed simulation data flow analysis
Time Resolution for simulation is 1ps
Compiling package xil_defaultlib.$unit_dataflow_monitor_sv
Compiling module xil_defaultlib.Huffman_decoder_flow_control_loo...
Compiling module xil_defaultlib.Huffman_decoder_Huffman_decoder_...
Compiling module xil_defaultlib.Huffman_decoder_reg_unsigned_sho...
Compiling module xil_defaultlib.Huffman_decoder_Huffman_decoder_...
Compiling module xil_defaultlib.Huffman_decoder_Huffman_decoder_...
Compiling module xil_defaultlib.Huffman_decoder_mul_10ns_32s_32_...
Compiling module xil_defaultlib.Huffman_decoder
Compiling module xil_defaultlib.AESL_autofifo_huff_sos_strm
Compiling module xil_defaultlib.AESL_autofifo_sign_no_huff
Compiling module xil_defaultlib.AESL_automem_dht_tbl1
Compiling module xil_defaultlib.AESL_automem_ac_val
Compiling module xil_defaultlib.AESL_automem_ac_huff_start_code
Compiling module xil_defaultlib.AESL_automem_ac_huff_start_addr
Compiling module xil_defaultlib.AESL_automem_dc_val
Compiling module xil_defaultlib.AESL_automem_dc_huff_start_code
Compiling module xil_defaultlib.AESL_automem_dc_huff_start_addr
Compiling module xil_defaultlib.AESL_automem_hls_mbs
Compiling module xil_defaultlib.AESL_autofifo_block_strm
Compiling module xil_defaultlib.nodf_module_intf
Compiling module xil_defaultlib.upc_loop_intf(FSM_WIDTH=3)
Compiling module xil_defaultlib.dataflow_monitor_1
Compiling module xil_defaultlib.apatb_Huffman_decoder_top
Compiling module work.glbl
Built simulation snapshot Huffman_decoder

****** xsim v2021.2 (64-bit)
  **** SW Build 3367213 on Tue Oct 19 02:47:39 MDT 2021
  **** IP Build 3369179 on Thu Oct 21 08:25:16 MDT 2021
    ** Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.

source xsim.dir/Huffman_decoder/xsim_script.tcl
# xsim {Huffman_decoder} -autoloadwcfg -tclbatch {Huffman_decoder.tcl}
Time resolution is 1 ps
source Huffman_decoder.tcl
## run all
////////////////////////////////////////////////////////////////////////////////////
// Inter-Transaction Progress: Completed Transaction / Total Transaction
// Intra-Transaction Progress: Measured Latency / Latency Estimation * 100%
//
// RTL Simulation : "Inter-Transaction Progress" ["Intra-Transaction Progress"] @ "Simulation Time"
////////////////////////////////////////////////////////////////////////////////////
// RTL Simulation : 0 / 1 [0.00%] @ "109000"
// RTL Simulation : 1 / 1 [100.00%] @ "796408000"
////////////////////////////////////////////////////////////////////////////////////
$finish called at time : 796428010 ps : File "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/sim/verilog/Huffman_decoder.autotb.v" Line 959
run: Time (s): cpu = 00:00:00.45 ; elapsed = 00:00:08 . Memory (MB): peak = 2714.777 ; gain = 0.000 ; free physical = 53157 ; free virtual = 60690
## quit
INFO: [Common 17-206] Exiting xsim at Sat Jan 28 11:02:52 2023...
INFO: [COSIM 212-316] Starting C post checking ...

------------ Test for decode image.jpg  -------------
WARNING: /home/janethamrani/Vitis_Libraries/codec/L1/images/t0.jpg will be opened for binary read.
51193 entries read from /home/janethamrani/Vitis_Libraries/codec/L1/images/t0.jpg
hls_mcuv=33, hls_mcuh=39, hls_mcuc=1287, 
huffman 1 bits codes is :0b0000000000000000
huffman 2 bits codes is :0b0000000000000000
huffman 3 bits codes is :0b0000000000000010
huffman 4 bits codes is :0b0000000000001110
huffman 5 bits codes is :0b0000000000011110
huffman 6 bits codes is :0b0000000000111110
huffman 7 bits codes is :0b0000000001111110
huffman 8 bits codes is :0b0000000011111110
huffman 9 bits codes is :0b0000000111111110
huffman 10 bits codes is :0b0000001111111110
huffman 11 bits codes is :0b0000011111111100
huffman 12 bits codes is :0b0000111111111000
huffman 13 bits codes is :0b0001111111110000
huffman 14 bits codes is :0b0011111111100000
huffman 15 bits codes is :0b0111111111000000
huffman 16 bits codes is :0b1111111110000000
huffman 1 bits start addr is :0
huffman 2 bits start addr is :0
huffman 3 bits start addr is :1
huffman 4 bits start addr is :8
huffman 5 bits start addr is :23
huffman 6 bits start addr is :54
huffman 7 bits start addr is :117
huffman 8 bits start addr is :244
huffman 9 bits start addr is :499
huffman 10 bits start addr is :1010
huffman 11 bits start addr is :2032
huffman 12 bits start addr is :4076
huffman 13 bits start addr is :8164
huffman 14 bits start addr is :16340
huffman 15 bits start addr is :32692
huffman 16 bits start addr is :-140
huffman 1 bits codes is :0b0000000000000000
huffman 2 bits codes is :0b0000000000000000
huffman 3 bits codes is :0b0000000000000100
huffman 4 bits codes is :0b0000000000001010
huffman 5 bits codes is :0b0000000000011010
huffman 6 bits codes is :0b0000000000111010
huffman 7 bits codes is :0b0000000001111000
huffman 8 bits codes is :0b0000000011111000
huffman 9 bits codes is :0b0000000111110110
huffman 10 bits codes is :0b0000001111110110
huffman 11 bits codes is :0b0000011111110110
huffman 12 bits codes is :0b0000111111110100
huffman 13 bits codes is :0b0001111111110000
huffman 14 bits codes is :0b0011111111100000
huffman 15 bits codes is :0b0111111111000000
huffman 16 bits codes is :0b1111111110000010
huffman 1 bits start addr is :0
huffman 2 bits start addr is :0
huffman 3 bits start addr is :2
huffman 4 bits start addr is :7
huffman 5 bits start addr is :20
huffman 6 bits start addr is :49
huffman 7 bits start addr is :109
huffman 8 bits start addr is :233
huffman 9 bits start addr is :484
huffman 10 bits start addr is :991
huffman 11 bits start addr is :2010
huffman 12 bits start addr is :4052
huffman 13 bits start addr is :8140
huffman 14 bits start addr is :16316
huffman 15 bits start addr is :32668
huffman 16 bits start addr is :-163
huffman 1 bits codes is :0b0000000000000000
huffman 2 bits codes is :0b0000000000000000
huffman 3 bits codes is :0b0000000000000110
huffman 4 bits codes is :0b0000000000001110
huffman 5 bits codes is :0b0000000000011110
huffman 6 bits codes is :0b0000000000111110
huffman 7 bits codes is :0b0000000001111110
huffman 8 bits codes is :0b0000000011111110
huffman 9 bits codes is :0b0000000111111110
huffman 10 bits codes is :0b0000001111111110
huffman 11 bits codes is :0b0000011111111110
huffman 12 bits codes is :0b0000111111111110
huffman 13 bits codes is :0b0001111111111100
huffman 14 bits codes is :0b0011111111111000
huffman 15 bits codes is :0b0111111111110000
huffman 16 bits codes is :0b1111111111100000
huffman 1 bits start addr is :0
huffman 2 bits start addr is :0
huffman 3 bits start addr is :3
huffman 4 bits start addr is :10
huffman 5 bits start addr is :25
huffman 6 bits start addr is :56
huffman 7 bits start addr is :119
huffman 8 bits start addr is :246
huffman 9 bits start addr is :501
huffman 10 bits start addr is :1012
huffman 11 bits start addr is :2035
huffman 12 bits start addr is :4082
huffman 13 bits start addr is :8176
huffman 14 bits start addr is :16364
huffman 15 bits start addr is :32740
huffman 16 bits start addr is :-44
huffman 1 bits codes is :0b0000000000000000
huffman 2 bits codes is :0b0000000000000000
huffman 3 bits codes is :0b0000000000000100
huffman 4 bits codes is :0b0000000000001010
huffman 5 bits codes is :0b0000000000011000
huffman 6 bits codes is :0b0000000000111000
huffman 7 bits codes is :0b0000000001111000
huffman 8 bits codes is :0b0000000011110110
huffman 9 bits codes is :0b0000000111110100
huffman 10 bits codes is :0b0000001111110110
huffman 11 bits codes is :0b0000011111110110
huffman 12 bits codes is :0b0000111111110100
huffman 13 bits codes is :0b0001111111110000
huffman 14 bits codes is :0b0011111111100000
huffman 15 bits codes is :0b0111111111000010
huffman 16 bits codes is :0b1111111110001000
huffman 1 bits start addr is :0
huffman 2 bits start addr is :0
huffman 3 bits start addr is :2
huffman 4 bits start addr is :7
huffman 5 bits start addr is :19
huffman 6 bits start addr is :47
huffman 7 bits start addr is :107
huffman 8 bits start addr is :230
huffman 9 bits start addr is :480
huffman 10 bits start addr is :987
huffman 11 bits start addr is :2006
huffman 12 bits start addr is :4048
huffman 13 bits start addr is :8136
huffman 14 bits start addr is :16312
huffman 15 bits start addr is :32665
huffman 16 bits start addr is :-163
****the end 3 blocks before zigzag are : 
 ffffffb6,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000, 
  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000, 
  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000, 
  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000, 
  ffffffe6,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000, 
  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000, 
  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000, 
  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000, 
  0015,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000, 
  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000, 
  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000, 
  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000,  0000, 
 Ready for next image!
 INFO: [COSIM 212-1000] *** C/RTL co-simulation finished: PASS ***
INFO: [COSIM 212-211] II is measurable only when transaction number is greater than 1 in RTL simulation. Otherwise, they will be marked as all NA. If user wants to calculate them, please make sure there are at least 2 transactions in RTL simulation.
INFO: [HLS 200-111] Finished Command cosim_design CPU user time: 38.52 seconds. CPU system time: 1.66 seconds. Elapsed time: 32.71 seconds; current allocated memory: 13.609 MB.
INFO: [HLS 200-112] Total CPU user time: 57.66 seconds. Total CPU system time: 2.99 seconds. Total elapsed time: 51.77 seconds; peak allocated memory: 1.191 GB.
INFO: [Common 17-206] Exiting vitis_hls at Sat Jan 28 11:02:52 2023...
```
#### Generate IP File with Vivado Implementation
```sh
janethamrani@superlu:~/Vitis_Libraries/codec/L1/tests/jpegdec$ make run DEVICE=/opt/xilinx/platforms/xilinx_u280_xdma_201920_3/xilinx_u280_xdma_201920_3.xpfm VIVADO_IMPL=1
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'Huffman_decoder_Pipeline_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'Loop 1'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 1, loop 'Loop 1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.07 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.07 seconds; current allocated memory: 390.926 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0.01 seconds; current allocated memory: 390.926 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'reg_unsigned_short_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining function 'reg<unsigned short>'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 2, function 'reg<unsigned short>'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.02 seconds; current allocated memory: 390.926 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0.01 seconds; current allocated memory: 390.926 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'Huffman_decoder_Pipeline_DECODE_LOOP' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'DECODE_LOOP'.
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.48 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.48 seconds; current allocated memory: 402.070 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.25 seconds. CPU system time: 0 seconds. Elapsed time: 0.26 seconds; current allocated memory: 402.070 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'Huffman_decoder_Pipeline_INTER_LOOP' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'INTER_LOOP'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 1, loop 'INTER_LOOP'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.38 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.39 seconds; current allocated memory: 402.070 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0.01 seconds; current allocated memory: 402.070 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'Huffman_decoder' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 402.070 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.15 seconds. CPU system time: 0 seconds. Elapsed time: 0.15 seconds; current allocated memory: 402.070 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'Huffman_decoder_Pipeline_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'Huffman_decoder_Pipeline_1'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.29 seconds. CPU system time: 0 seconds. Elapsed time: 0.28 seconds; current allocated memory: 402.070 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'reg_unsigned_short_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'reg_unsigned_short_s'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.03 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.03 seconds; current allocated memory: 402.070 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'Huffman_decoder_Pipeline_DECODE_LOOP' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'Huffman_decoder_Pipeline_DECODE_LOOP' pipeline 'DECODE_LOOP' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Finished creating RTL model for 'Huffman_decoder_Pipeline_DECODE_LOOP'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.11 seconds. CPU system time: 0 seconds. Elapsed time: 0.1 seconds; current allocated memory: 402.070 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'Huffman_decoder_Pipeline_INTER_LOOP' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'Huffman_decoder_Pipeline_INTER_LOOP'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 1.06 seconds. CPU system time: 0.01 seconds. Elapsed time: 1.08 seconds; current allocated memory: 410.625 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'Huffman_decoder' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/huff_sos_strm' to 'ap_fifo'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/sign_no_huff' to 'ap_fifo'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/dht_tbl1' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/ac_val' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/ac_huff_start_code' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/ac_huff_start_addr' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/dc_val' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/dc_huff_start_code' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/dc_huff_start_addr' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/cyc_cmp' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/hls_cs_cmpc' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/hls_mcuh' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/hls_mbs' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/hls_mcuc' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/rtn2' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'Huffman_decoder/block_strm' to 'ap_fifo'.
INFO: [RTGEN 206-500] Setting interface mode on function 'Huffman_decoder' to 'ap_ctrl_hs'.
WARNING: [RTGEN 206-101] Port 'Huffman_decoder/hls_cs_cmpc' has no fanin or fanout and is left dangling.
               Please use C simulation to confirm this function argument can be read from or written to.
WARNING: [RTGEN 206-101] Port 'Huffman_decoder/hls_mcuh' has no fanin or fanout and is left dangling.
               Please use C simulation to confirm this function argument can be read from or written to.
INFO: [RTGEN 206-100] Generating core module 'mul_10ns_32s_32_2_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'Huffman_decoder'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.05 seconds; current allocated memory: 410.625 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.69 seconds. CPU system time: 0 seconds. Elapsed time: 0.69 seconds; current allocated memory: 415.289 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.65 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.67 seconds; current allocated memory: 418.309 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for Huffman_decoder.
INFO: [VLOG 209-307] Generating Verilog RTL for Huffman_decoder.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 238.41 MHz
INFO: [HLS 200-111] Finished Command csynth_design CPU user time: 17.16 seconds. CPU system time: 1.01 seconds. Elapsed time: 17.62 seconds; current allocated memory: -800.461 MB.
INFO: [HLS 200-1510] Running: export_design -flow impl -rtl verilog 
INFO: [IMPL 213-8] Exporting RTL as a Vivado IP.
---------------------------------------------------------------------------------
Starting RTL Elaboration : Time (s): cpu = 00:00:03 ; elapsed = 00:00:03 . Memory (MB): peak = 3528.637 ; gain = 286.793 ; free physical = 49125 ; free virtual = 56973
---------------------------------------------------------------------------------
INFO: [Synth 8-6157] synthesizing module 'bd_0_wrapper' [/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/impl/verilog/project.gen/sources_1/bd/bd_0/hdl/bd_0_wrapper.v:12]
INFO: [Synth 8-6157] synthesizing module 'bd_0' [/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/impl/verilog/project.gen/sources_1/bd/bd_0/synth/bd_0.v:13]
INFO: [Synth 8-6157] synthesizing module 'bd_0_hls_inst_0' [/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/impl/verilog/project.runs/synth_1/.Xil/Vivado-9619-superlu/realtime/bd_0_hls_inst_0_stub.v:6]
INFO: [Synth 8-6155] done synthesizing module 'bd_0_hls_inst_0' (1#1) [/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/impl/verilog/project.runs/synth_1/.Xil/Vivado-9619-superlu/realtime/bd_0_hls_inst_0_stub.v:6]
INFO: [Synth 8-6155] done synthesizing module 'bd_0' (2#1) [/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/impl/verilog/project.gen/sources_1/bd/bd_0/synth/bd_0.v:13]
INFO: [Synth 8-6155] done synthesizing module 'bd_0_wrapper' (3#1) [/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/impl/verilog/project.gen/sources_1/bd/bd_0/hdl/bd_0_wrapper.v:12]
---------------------------------------------------------------------------------
Finished RTL Elaboration : Time (s): cpu = 00:00:03 ; elapsed = 00:00:03 . Memory (MB): peak = 3578.543 ; gain = 336.699 ; free physical = 49043 ; free virtual = 56891
---------------------------------------------------------------------------------
---------------------------------------------------------------------------------
Start Handling Custom Attributes
---------------------------------------------------------------------------------
---------------------------------------------------------------------------------
Finished Handling Custom Attributes : Time (s): cpu = 00:00:04 ; elapsed = 00:00:04 . Memory (MB): peak = 3596.355 ; gain = 354.512 ; free physical = 49905 ; free virtual = 57754
---------------------------------------------------------------------------------
---------------------------------------------------------------------------------
Finished RTL Optimization Phase 1 : Time (s): cpu = 00:00:04 ; elapsed = 00:00:04 . Memory (MB): peak = 3596.355 ; gain = 354.512 ; free physical = 49905 ; free virtual = 57754
---------------------------------------------------------------------------------
Netlist sorting complete. Time (s): cpu = 00:00:00 ; elapsed = 00:00:00 . Memory (MB): peak = 3596.355 ; gain = 0.000 ; free physical = 49899 ; free virtual = 57747
INFO: [Project 1-570] Preparing netlist for logic optimization
Processing XDC Constraints
Initializing timing engine
Parsing XDC File [/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/impl/verilog/project.gen/sources_1/bd/bd_0/ip/bd_0_hls_inst_0/bd_0_hls_inst_0/bd_0_hls_inst_0_in_context.xdc] for cell 'bd_0_i/hls_inst'
Finished Parsing XDC File [/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/impl/verilog/project.gen/sources_1/bd/bd_0/ip/bd_0_hls_inst_0/bd_0_hls_inst_0/bd_0_hls_inst_0_in_context.xdc] for cell 'bd_0_i/hls_inst'
Parsing XDC File [/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/impl/verilog/Huffman_decoder.xdc]
Finished Parsing XDC File [/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/impl/verilog/Huffman_decoder.xdc]
Parsing XDC File [/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/impl/verilog/project.runs/synth_1/dont_touch.xdc]
Finished Parsing XDC File [/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/impl/verilog/project.runs/synth_1/dont_touch.xdc]
Completed Processing XDC Constraints

Netlist sorting complete. Time (s): cpu = 00:00:00 ; elapsed = 00:00:00 . Memory (MB): peak = 3699.043 ; gain = 0.000 ; free physical = 49842 ; free virtual = 57690
INFO: [Project 1-111] Unisim Transformation Summary:
No Unisim elements were transformed.

Constraint Validation Runtime : Time (s): cpu = 00:00:00.01 ; elapsed = 00:00:00.01 . Memory (MB): peak = 3699.043 ; gain = 0.000 ; free physical = 49841 ; free virtual = 57689
---------------------------------------------------------------------------------
Finished Constraint Validation : Time (s): cpu = 00:00:11 ; elapsed = 00:00:11 . Memory (MB): peak = 3699.043 ; gain = 457.199 ; free physical = 49947 ; free virtual = 57796
---------------------------------------------------------------------------------
---------------------------------------------------------------------------------
Start Loading Part and Timing Information
---------------------------------------------------------------------------------
Loading part: xcu280-fsvh2892-2L-e
INFO: [Synth 8-6742] Reading net delay rules and data
---------------------------------------------------------------------------------
Finished Loading Part and Timing Information : Time (s): cpu = 00:00:11 ; elapsed = 00:00:11 . Memory (MB): peak = 3699.043 ; gain = 457.199 ; free physical = 49947 ; free virtual = 57796
---------------------------------------------------------------------------------
---------------------------------------------------------------------------------
Start Applying 'set_property' XDC Constraints
---------------------------------------------------------------------------------
Applied set_property KEEP_HIERARCHY = SOFT for bd_0_i. (constraint file  auto generated constraint).
Applied set_property KEEP_HIERARCHY = SOFT for bd_0_i/hls_inst. (constraint file  auto generated constraint).
---------------------------------------------------------------------------------
Finished applying 'set_property' XDC Constraints : Time (s): cpu = 00:00:11 ; elapsed = 00:00:11 . Memory (MB): peak = 3699.043 ; gain = 457.199 ; free physical = 49951 ; free virtual = 57800
---------------------------------------------------------------------------------
---------------------------------------------------------------------------------
Finished RTL Optimization Phase 2 : Time (s): cpu = 00:00:11 ; elapsed = 00:00:11 . Memory (MB): peak = 3699.043 ; gain = 457.199 ; free physical = 49950 ; free virtual = 57799
---------------------------------------------------------------------------------
---------------------------------------------------------------------------------
Start RTL Component Statistics 
---------------------------------------------------------------------------------
Detailed RTL Component Info : 
---------------------------------------------------------------------------------
Finished RTL Component Statistics 
---------------------------------------------------------------------------------
---------------------------------------------------------------------------------
Start Part Resource Summary
---------------------------------------------------------------------------------
Part Resources:
DSPs: 9024 (col length:94)
BRAMs: 4032 (col length: RAMB18 288 RAMB36 144)
---------------------------------------------------------------------------------
Finished Part Resource Summary
---------------------------------------------------------------------------------
---------------------------------------------------------------------------------
Start Cross Boundary and Area Optimization
---------------------------------------------------------------------------------
WARNING: [Synth 8-7080] Parallel synthesis criteria is not met
---------------------------------------------------------------------------------
Finished Cross Boundary and Area Optimization : Time (s): cpu = 00:00:12 ; elapsed = 00:00:12 . Memory (MB): peak = 3699.043 ; gain = 457.199 ; free physical = 49938 ; free virtual = 57790
---------------------------------------------------------------------------------
---------------------------------------------------------------------------------
Start Applying XDC Timing Constraints
---------------------------------------------------------------------------------
---------------------------------------------------------------------------------
Finished Applying XDC Timing Constraints : Time (s): cpu = 00:00:18 ; elapsed = 00:00:19 . Memory (MB): peak = 4045.965 ; gain = 804.121 ; free physical = 49421 ; free virtual = 57273
---------------------------------------------------------------------------------
---------------------------------------------------------------------------------
Start Timing Optimization
---------------------------------------------------------------------------------
---------------------------------------------------------------------------------
Finished Timing Optimization : Time (s): cpu = 00:00:18 ; elapsed = 00:00:19 . Memory (MB): peak = 4046.965 ; gain = 805.121 ; free physical = 49420 ; free virtual = 57273
---------------------------------------------------------------------------------
---------------------------------------------------------------------------------
Start Technology Mapping
---------------------------------------------------------------------------------
---------------------------------------------------------------------------------
Finished Technology Mapping : Time (s): cpu = 00:00:18 ; elapsed = 00:00:19 . Memory (MB): peak = 4065.996 ; gain = 824.152 ; free physical = 49419 ; free virtual = 57271
---------------------------------------------------------------------------------
---------------------------------------------------------------------------------
Start IO Insertion
---------------------------------------------------------------------------------
---------------------------------------------------------------------------------
Start Flattening Before IO Insertion
---------------------------------------------------------------------------------
---------------------------------------------------------------------------------
Finished Flattening Before IO Insertion
---------------------------------------------------------------------------------
---------------------------------------------------------------------------------
Start Final Netlist Cleanup
---------------------------------------------------------------------------------
---------------------------------------------------------------------------------
Finished Final Netlist Cleanup
---------------------------------------------------------------------------------
---------------------------------------------------------------------------------
Finished IO Insertion : Time (s): cpu = 00:00:21 ; elapsed = 00:00:22 . Memory (MB): peak = 4071.934 ; gain = 830.090 ; free physical = 49418 ; free virtual = 57271
---------------------------------------------------------------------------------
---------------------------------------------------------------------------------
Start Renaming Generated Instances
---------------------------------------------------------------------------------
---------------------------------------------------------------------------------
Finished Renaming Generated Instances : Time (s): cpu = 00:00:21 ; elapsed = 00:00:22 . Memory (MB): peak = 4071.934 ; gain = 830.090 ; free physical = 49418 ; free virtual = 57271
---------------------------------------------------------------------------------
---------------------------------------------------------------------------------
Start Rebuilding User Hierarchy
---------------------------------------------------------------------------------
---------------------------------------------------------------------------------
Finished Rebuilding User Hierarchy : Time (s): cpu = 00:00:21 ; elapsed = 00:00:22 . Memory (MB): peak = 4071.934 ; gain = 830.090 ; free physical = 49418 ; free virtual = 57271
---------------------------------------------------------------------------------
---------------------------------------------------------------------------------
Start Renaming Generated Ports
---------------------------------------------------------------------------------
---------------------------------------------------------------------------------
Finished Renaming Generated Ports : Time (s): cpu = 00:00:21 ; elapsed = 00:00:22 . Memory (MB): peak = 4071.934 ; gain = 830.090 ; free physical = 49418 ; free virtual = 57271
---------------------------------------------------------------------------------
---------------------------------------------------------------------------------
Start Handling Custom Attributes
---------------------------------------------------------------------------------
---------------------------------------------------------------------------------
Finished Handling Custom Attributes : Time (s): cpu = 00:00:21 ; elapsed = 00:00:22 . Memory (MB): peak = 4071.934 ; gain = 830.090 ; free physical = 49418 ; free virtual = 57271
---------------------------------------------------------------------------------
---------------------------------------------------------------------------------
Start Renaming Generated Nets
---------------------------------------------------------------------------------
---------------------------------------------------------------------------------
Finished Renaming Generated Nets : Time (s): cpu = 00:00:21 ; elapsed = 00:00:22 . Memory (MB): peak = 4071.934 ; gain = 830.090 ; free physical = 49418 ; free virtual = 57271
---------------------------------------------------------------------------------
---------------------------------------------------------------------------------
Start Writing Synthesis Report
---------------------------------------------------------------------------------

Report BlackBoxes: 
+------+----------------+----------+
|      |BlackBox name   |Instances |
+------+----------------+----------+
|1     |bd_0_hls_inst_0 |         1|
+------+----------------+----------+

Report Cell Usage: 
+------+--------------+------+
|      |Cell          |Count |
+------+--------------+------+
|1     |bd_0_hls_inst |     1|
+------+--------------+------+
---------------------------------------------------------------------------------
Finished Writing Synthesis Report : Time (s): cpu = 00:00:21 ; elapsed = 00:00:22 . Memory (MB): peak = 4071.934 ; gain = 830.090 ; free physical = 49418 ; free virtual = 57271
---------------------------------------------------------------------------------
Synthesis finished with 0 errors, 0 critical warnings and 1 warnings.
Synthesis Optimization Runtime : Time (s): cpu = 00:00:16 ; elapsed = 00:00:17 . Memory (MB): peak = 4071.934 ; gain = 727.402 ; free physical = 49453 ; free virtual = 57306
Synthesis Optimization Complete : Time (s): cpu = 00:00:21 ; elapsed = 00:00:22 . Memory (MB): peak = 4071.941 ; gain = 830.090 ; free physical = 49453 ; free virtual = 57306
INFO: [Project 1-571] Translating synthesized netlist
Netlist sorting complete. Time (s): cpu = 00:00:00 ; elapsed = 00:00:00 . Memory (MB): peak = 4071.941 ; gain = 0.000 ; free physical = 49448 ; free virtual = 57300
INFO: [Project 1-570] Preparing netlist for logic optimization
INFO: [Opt 31-138] Pushed 0 inverter(s) to 0 load pin(s).
Netlist sorting complete. Time (s): cpu = 00:00:00 ; elapsed = 00:00:00 . Memory (MB): peak = 4148.254 ; gain = 0.000 ; free physical = 49438 ; free virtual = 57291
INFO: [Project 1-111] Unisim Transformation Summary:
No Unisim elements were transformed.
#  +-----------------------------------------------------------------------------------------+
#  | Design Summary                                                                          |
#  | design_1                                                                                |
#  | xcu280-fsvh2892-2L-e                                                                    |
#  +-----------------------------------------------------------+-----------+--------+--------+
#  | Criteria                                                  | Guideline | Actual | Status |
#  +-----------------------------------------------------------+-----------+--------+--------+
#  | LUT                                                       | 70%       | 0.10%  | OK     |
#  | FD                                                        | 50%       | 0.02%  | OK     |
#  | LUTRAM+SRL                                                | 25%       | 0.00%  | OK     |
#  | CARRY8                                                    | 25%       | 0.02%  | OK     |
#  | MUXF7                                                     | 15%       | 0.00%  | OK     |
#  | DSP                                                       | 80%       | 0.02%  | OK     |
#  | RAMB/FIFO                                                 | 80%       | 0.00%  | OK     |
#  | URAM                                                      | 80%       | 0.00%  | OK     |
#  | DSP+RAMB+URAM (Avg)                                       | 70%       | 0.02%  | OK     |
#  | BUFGCE* + BUFGCTRL                                        | 24        | 0      | OK     |
#  | DONT_TOUCH (cells/nets)                                   | 0         | 0      | OK     |
#  | MARK_DEBUG (nets)                                         | 0         | 0      | OK     |
#  | Control Sets                                              | 24444     | 47     | OK     |
#  | Average Fanout for modules > 100k cells                   | 4         | 0      | OK     |
#  | Non-FD high fanout nets > 10k loads                       | 0         | 0      | OK     |
#  +-----------------------------------------------------------+-----------+--------+--------+
#  | TIMING-6 (No common primary clock between related clocks) | 0         | 0      | OK     |
#  | TIMING-7 (No common node between related clocks)          | 0         | 0      | OK     |
#  | TIMING-8 (No common period between related clocks)        | 0         | 0      | OK     |
#  | TIMING-14 (LUT on the clock tree)                         | 0         | 0      | OK     |
#  | TIMING-35 (No common node in paths with the same clock)   | 0         | 0      | OK     |
#  +-----------------------------------------------------------+-----------+--------+--------+
#  | Number of paths above max LUT budgeting (0.300ns)         | 0         | 0      | OK     |
#  | Number of paths above max Net budgeting (0.208ns)         | 0         | 0      | OK     |
#  +-----------------------------------------------------------+-----------+--------+--------+
 -I- Generated file /home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/impl/verilog/report/Huffman_decoder_failfast_synth.rpt
 -I- Number of criteria to review: 0
 -I- This report should be run before placing the design and uses conservative guidelines beyond which runtime and timing closure will likely be more challenging
 -I- report_failfast completed in 2 seconds
TIMESTAMP: HLS-REPORT: synthesis gen_data_dict_vivado: 2023-01-28 11:34:22 EST
TIMESTAMP: HLS-REPORT: synth extract_util_hier: 2023-01-28 11:34:22 EST
TIMESTAMP: HLS-REPORT: synth get_cell_hier_data: 2023-01-28 11:34:22 EST
TIMESTAMP: HLS-REPORT: synth get_timing_paths: 2023-01-28 11:34:22 EST
TIMESTAMP: HLS-REPORT: synth process timing paths: 2023-01-28 11:34:22 EST
TIMESTAMP: HLS-REPORT: synth get_all_vv_rpt_files: 2023-01-28 11:34:22 EST
TIMESTAMP: HLS-REPORT: synthesis write_reports_vivado: 2023-01-28 11:34:22 EST
HLS EXTRACTION: synth area_totals:  0 1303680 2607360 9024 4032 0 960
HLS EXTRACTION: synth area_current: 0 1285 639 2 0 0 0 0 0 0
HLS EXTRACTION: synth resources_dict: AVAIL_LUT 1303680 LUT 1285 AVAIL_FF 2607360 FF 639 AVAIL_DSP 9024 DSP 2 AVAIL_BRAM 4032 BRAM 0 AVAIL_URAM 960 URAM 0 LATCH 0 SRL 0 AVAIL_CLB 0 CLB 0
INFO: HLS-REPORT: generated /home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/impl/verilog/report/vivado_syn.xml
INFO: HLS-REPORT: generated /home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/impl/report/verilog/Huffman_decoder_export.rpt


Implementation tool: Xilinx Vivado v.2021.2
Project:             test.prj
Solution:            solution1
Device target:       xcu280-fsvh2892-2L-e
Report date:         Sat Jan 28 11:34:22 EST 2023

#=== Post-Synthesis Resource usage ===
SLICE:            0
LUT:           1285
FF:             639
DSP:              2
BRAM:             0
URAM:             0
LATCH:            0
SRL:              0
CLB:              0

#=== Final timing ===
CP required:                     3.330
CP achieved post-synthesis:      3.243
Timing met

TIMESTAMP: HLS-REPORT: synthesis end: 2023-01-28 11:34:22 EST
# if { $has_impl } {
#   # launch run impl
#   if { [llength $impl_props] } {
#     set_property -dict $impl_props [get_runs impl_1]
#   }
#   launch_runs impl_1
#   wait_on_run impl_1
#   # impl reports
#   hls_vivado_reports_impl impl_1 $report_options
# }
Time (s): cpu = 00:00:00.04 ; elapsed = 00:00:00.02 . Memory (MB): peak = 2788.371 ; gain = 5.938 ; free physical = 48221 ; free virtual = 56206
INFO: [Device 21-403] Loading part xcu280-fsvh2892-2L-e
Netlist sorting complete. Time (s): cpu = 00:00:00.01 ; elapsed = 00:00:00.01 . Memory (MB): peak = 3237.898 ; gain = 0.000 ; free physical = 47792 ; free virtual = 55777
INFO: [Netlist 29-17] Analyzing 30 Unisim elements for replacement
INFO: [Netlist 29-28] Unisim Transformation completed in 0 CPU seconds
INFO: [Project 1-479] Netlist was created with Vivado 2021.2
INFO: [Project 1-570] Preparing netlist for logic optimization
INFO: [Timing 38-478] Restoring timing data from binary archive.
INFO: [Timing 38-479] Binary timing data restore complete.
INFO: [Project 1-856] Restoring constraints from binary archive.
INFO: [Project 1-853] Binary constraint restore complete.
Netlist sorting complete. Time (s): cpu = 00:00:00 ; elapsed = 00:00:00 . Memory (MB): peak = 3709.465 ; gain = 0.000 ; free physical = 47404 ; free virtual = 55388
INFO: [Project 1-111] Unisim Transformation Summary:
  A total of 2 instances were transformed.
  DSP48E2 => DSP48E2 (DSP_ALU, DSP_A_B_DATA, DSP_C_DATA, DSP_MULTIPLIER, DSP_M_DATA, DSP_OUTPUT, DSP_PREADD, DSP_PREADD_DATA): 2 instances

INFO: [Project 1-604] Checkpoint was created with Vivado v2021.2 (64-bit) build 3367213
open_checkpoint: Time (s): cpu = 00:00:15 ; elapsed = 00:00:16 . Memory (MB): peak = 3709.465 ; gain = 932.969 ; free physical = 47403 ; free virtual = 55387
INFO: [IP_Flow 19-234] Refreshing IP repositories
INFO: [IP_Flow 19-1700] Loaded user IP repository '/home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/impl/ip'.
INFO: [IP_Flow 19-2313] Loaded Vivado IP repository '/tools/Xilinx/Vivado/2021.2/data/ip'.
Command: opt_design
Attempting to get a license for feature 'Implementation' and/or device 'xcu280'
INFO: [Common 17-349] Got license for feature 'Implementation' and/or device 'xcu280'
Running DRC as a precondition to command opt_design

Starting DRC Task
INFO: [DRC 23-27] Running DRC with 8 threads
INFO: [Project 1-461] DRC finished with 0 Errors
INFO: [Project 1-462] Please refer to the DRC report (report_drc) for more information.

Time (s): cpu = 00:00:02 ; elapsed = 00:00:00.90 . Memory (MB): peak = 3809.152 ; gain = 93.750 ; free physical = 47384 ; free virtual = 55369

Starting Cache Timing Information Task
Ending Cache Timing Information Task | Checksum: 12ef28456

Time (s): cpu = 00:00:00.04 ; elapsed = 00:00:00.03 . Memory (MB): peak = 3809.152 ; gain = 0.000 ; free physical = 47377 ; free virtual = 55362
Phase 1 Retarget | Checksum: 112028dc4

Time (s): cpu = 00:00:00.28 ; elapsed = 00:00:00.10 . Memory (MB): peak = 4017.258 ; gain = 24.012 ; free physical = 47193 ; free virtual = 55178
INFO: [Opt 31-389] Phase Retarget created 0 cells and removed 3 cells

Phase 2 Constant propagation
INFO: [Opt 31-138] Pushed 0 inverter(s) to 0 load pin(s).
Phase 2 Constant propagation | Checksum: 169024461

Time (s): cpu = 00:00:00.30 ; elapsed = 00:00:00.12 . Memory (MB): peak = 4017.258 ; gain = 24.012 ; free physical = 47193 ; free virtual = 55178
INFO: [Opt 31-389] Phase Constant propagation created 0 cells and removed 0 cells

Phase 3 Sweep
Phase 3 Sweep | Checksum: 14b8891a1

Time (s): cpu = 00:00:00.32 ; elapsed = 00:00:00.14 . Memory (MB): peak = 4017.258 ; gain = 24.012 ; free physical = 47193 ; free virtual = 55178
INFO: [Opt 31-389] Phase Sweep created 0 cells and removed 0 cells

Phase 4 BUFG optimization
INFO: [Opt 31-1077] Phase BUFG optimization inserted 0 global clock buffer(s) for CLOCK_LOW_FANOUT.
Phase 4 BUFG optimization | Checksum: 14b8891a1

Time (s): cpu = 00:00:00.32 ; elapsed = 00:00:00.14 . Memory (MB): peak = 4017.258 ; gain = 24.012 ; free physical = 47193 ; free virtual = 55178
INFO: [Opt 31-662] Phase BUFG optimization created 0 cells of which 0 are BUFGs and removed 0 cells.

Phase 5 Shift Register Optimization
INFO: [Opt 31-1064] SRL Remap converted 0 SRLs to 0 registers and converted 0 registers of register chains to 0 SRLs
Phase 5 Shift Register Optimization | Checksum: 14b8891a1

Time (s): cpu = 00:00:00.32 ; elapsed = 00:00:00.15 . Memory (MB): peak = 4017.258 ; gain = 24.012 ; free physical = 47193 ; free virtual = 55178
INFO: [Opt 31-389] Phase Shift Register Optimization created 0 cells and removed 0 cells

Phase 6 Post Processing Netlist
Phase 6 Post Processing Netlist | Checksum: 14b8891a1

Time (s): cpu = 00:00:00.33 ; elapsed = 00:00:00.15 . Memory (MB): peak = 4017.258 ; gain = 24.012 ; free physical = 47193 ; free virtual = 55178
INFO: [Opt 31-389] Phase Post Processing Netlist created 0 cells and removed 0 cells
Opt_design Change Summary
=========================


-------------------------------------------------------------------------------------------------------------------------
|  Phase                        |  #Cells created  |  #Cells Removed  |  #Constrained objects preventing optimizations  |
-------------------------------------------------------------------------------------------------------------------------
|  Retarget                     |               0  |               3  |                                              0  |
|  Constant propagation         |               0  |               0  |                                              0  |
|  Sweep                        |               0  |               0  |                                              0  |
|  BUFG optimization            |               0  |               0  |                                              0  |
|  Shift Register Optimization  |               0  |               0  |                                              0  |
|  Post Processing Netlist      |               0  |               0  |                                              0  |
-------------------------------------------------------------------------------------------------------------------------

Phase 1 Placer Initialization

Phase 1.1 Placer Initialization Netlist Sorting
Netlist sorting complete. Time (s): cpu = 00:00:00 ; elapsed = 00:00:00 . Memory (MB): peak = 5239.125 ; gain = 0.000 ; free physical = 46259 ; free virtual = 54249
Phase 1.1 Placer Initialization Netlist Sorting | Checksum: 9f42f6dd

Time (s): cpu = 00:00:00 ; elapsed = 00:00:00.03 . Memory (MB): peak = 5239.125 ; gain = 0.000 ; free physical = 46259 ; free virtual = 54249
Netlist sorting complete. Time (s): cpu = 00:00:00 ; elapsed = 00:00:00 . Memory (MB): peak = 5239.125 ; gain = 0.000 ; free physical = 46259 ; free virtual = 54249

Phase 1.2 IO Placement/ Clock Placement/ Build Placer Device
Phase 1.2 IO Placement/ Clock Placement/ Build Placer Device | Checksum: 882e9500

Time (s): cpu = 00:00:01 ; elapsed = 00:00:01 . Memory (MB): peak = 5239.125 ; gain = 0.000 ; free physical = 46249 ; free virtual = 54240

Phase 1.3 Build Placer Netlist Model
Phase 1.3 Build Placer Netlist Model | Checksum: 167d8849c

Time (s): cpu = 00:00:05 ; elapsed = 00:00:04 . Memory (MB): peak = 5674.184 ; gain = 435.059 ; free physical = 46149 ; free virtual = 54140

Phase 1.4 Constrain Clocks/Macros
Phase 1.4 Constrain Clocks/Macros | Checksum: 167d8849c

Time (s): cpu = 00:00:05 ; elapsed = 00:00:04 . Memory (MB): peak = 5674.184 ; gain = 435.059 ; free physical = 46149 ; free virtual = 54140
Phase 1 Placer Initialization | Checksum: 167d8849c

Time (s): cpu = 00:00:05 ; elapsed = 00:00:04 . Memory (MB): peak = 5674.184 ; gain = 435.059 ; free physical = 46130 ; free virtual = 54121

Phase 2 Global Placement

Phase 2.1 Floorplanning

Phase 2.1.1 Partition Driven Placement

Phase 2.1.1.1 PBP: Partition Driven Placement
Phase 2.1.1.1 PBP: Partition Driven Placement | Checksum: 8b496d60

Time (s): cpu = 00:00:07 ; elapsed = 00:00:04 . Memory (MB): peak = 5674.184 ; gain = 435.059 ; free physical = 46114 ; free virtual = 54107

Phase 2.1.1.2 PBP: Clock Region Placement
Phase 2.1.1.2 PBP: Clock Region Placement | Checksum: 8b496d60

Time (s): cpu = 00:00:07 ; elapsed = 00:00:04 . Memory (MB): peak = 5674.184 ; gain = 435.059 ; free physical = 46115 ; free virtual = 54108

Phase 2.1.1.3 PBP: Compute Congestion
Phase 2.1.1.3 PBP: Compute Congestion | Checksum: 8b496d60

Time (s): cpu = 00:00:14 ; elapsed = 00:00:11 . Memory (MB): peak = 6104.453 ; gain = 865.328 ; free physical = 45783 ; free virtual = 53828

Phase 2.1.1.4 PBP: UpdateTiming
Phase 2.1.1.4 PBP: UpdateTiming | Checksum: f161f115

Time (s): cpu = 00:00:14 ; elapsed = 00:00:11 . Memory (MB): peak = 6136.469 ; gain = 897.344 ; free physical = 45782 ; free virtual = 53827

Phase 2.1.1.5 PBP: Add part constraints
Phase 2.1.1.5 PBP: Add part constraints | Checksum: f161f115

Time (s): cpu = 00:00:14 ; elapsed = 00:00:11 . Memory (MB): peak = 6136.469 ; gain = 897.344 ; free physical = 45782 ; free virtual = 53827
Phase 2.1.1 Partition Driven Placement | Checksum: f161f115

Time (s): cpu = 00:00:14 ; elapsed = 00:00:11 . Memory (MB): peak = 6136.469 ; gain = 897.344 ; free physical = 45786 ; free virtual = 53832
Phase 2.1 Floorplanning | Checksum: 1139ccfa5

Time (s): cpu = 00:00:14 ; elapsed = 00:00:11 . Memory (MB): peak = 6136.469 ; gain = 897.344 ; free physical = 45786 ; free virtual = 53832

Phase 2.2 Physical Synthesis After Floorplan
INFO: [Physopt 32-775] End 1 Pass. Optimized 0 net or cell. Created 0 new cell, deleted 0 existing cell and moved 0 existing cell
Netlist sorting complete. Time (s): cpu = 00:00:00 ; elapsed = 00:00:00 . Memory (MB): peak = 6136.469 ; gain = 0.000 ; free physical = 45783 ; free virtual = 53831

Summary of Physical Synthesis Optimizations
============================================


-----------------------------------------------------------------------------------------------------------------------------------------------
|  Optimization                         |  Added Cells  |  Removed Cells  |  Optimized Cells/Nets  |  Dont Touch  |  Iterations  |  Elapsed   |
-----------------------------------------------------------------------------------------------------------------------------------------------
|  PSIP Post Floorplan SLR Replication  |            0  |              0  |                     0  |           0  |           1  |  00:00:00  |
|  Total                                |            0  |              0  |                     0  |           0  |           1  |  00:00:00  |
-----------------------------------------------------------------------------------------------------------------------------------------------


Phase 2.2 Physical Synthesis After Floorplan | Checksum: 1139ccfa5

Time (s): cpu = 00:00:14 ; elapsed = 00:00:11 . Memory (MB): peak = 6136.469 ; gain = 897.344 ; free physical = 45783 ; free virtual = 53831

Phase 2.3 Update Timing before SLR Path Opt
Phase 2.3 Update Timing before SLR Path Opt | Checksum: 1139ccfa5

Time (s): cpu = 00:00:14 ; elapsed = 00:00:11 . Memory (MB): peak = 6136.469 ; gain = 897.344 ; free physical = 45783 ; free virtual = 53831

Phase 2.4 Post-Processing in Floorplanning
Phase 2.4 Post-Processing in Floorplanning | Checksum: 1139ccfa5

Time (s): cpu = 00:00:14 ; elapsed = 00:00:11 . Memory (MB): peak = 6136.469 ; gain = 897.344 ; free physical = 45783 ; free virtual = 53831

Phase 2.5 Global Placement Core

Phase 2.5.1 Physical Synthesis In Placer
INFO: [Physopt 32-1035] Found 0 LUTNM shape to break, 68 LUT instances to create LUTNM shape
INFO: [Physopt 32-1044] Break lutnm for timing: one critical 0, two critical 0, total 0, new lutff created 0
INFO: [Physopt 32-1138] End 1 Pass. Optimized 21 nets or LUTs. Breaked 0 LUT, combined 21 existing LUTs and moved 0 existing LUT
INFO: [Physopt 32-69] No nets found for rewiring optimization.
INFO: [Physopt 32-661] Optimized 0 net.  Re-placed 0 instance.
INFO: [Physopt 32-775] End 1 Pass. Optimized 0 net or cell. Created 0 new cell, deleted 0 existing cell and moved 0 existing cell
INFO: [Physopt 32-65] No nets found for high-fanout optimization.
INFO: [Physopt 32-232] Optimized 0 net. Created 0 new instance.
INFO: [Physopt 32-775] End 1 Pass. Optimized 0 net or cell. Created 0 new cell, deleted 0 existing cell and moved 0 existing cell
INFO: [Physopt 32-456] No candidate cells for DSP register optimization found in the design.
INFO: [Physopt 32-775] End 2 Pass. Optimized 0 net or cell. Created 0 new cell, deleted 0 existing cell and moved 0 existing cell
INFO: [Physopt 32-1123] No candidate cells found for Shift Register to Pipeline optimization
INFO: [Physopt 32-775] End 1 Pass. Optimized 0 net or cell. Created 0 new cell, deleted 0 existing cell and moved 0 existing cell
INFO: [Physopt 32-677] No candidate cells for Shift Register optimization found in the design
INFO: [Physopt 32-775] End 1 Pass. Optimized 0 net or cell. Created 0 new cell, deleted 0 existing cell and moved 0 existing cell
INFO: [Physopt 32-526] No candidate cells for BRAM register optimization found in the design
INFO: [Physopt 32-775] End 1 Pass. Optimized 0 net or cell. Created 0 new cell, deleted 0 existing cell and moved 0 existing cell
INFO: [Physopt 32-846] No candidate cells for URAM register optimization found in the design
INFO: [Physopt 32-775] End 2 Pass. Optimized 0 net or cell. Created 0 new cell, deleted 0 existing cell and moved 0 existing cell
INFO: [Physopt 32-949] No candidate nets found for dynamic/static region interface net replication
INFO: [Physopt 32-775] End 1 Pass. Optimized 0 net or cell. Created 0 new cell, deleted 0 existing cell and moved 0 existing cell
Netlist sorting complete. Time (s): cpu = 00:00:00 ; elapsed = 00:00:00 . Memory (MB): peak = 6744.793 ; gain = 0.000 ; free physical = 45763 ; free virtual = 53814

Summary of Physical Synthesis Optimizations
============================================


-----------------------------------------------------------------------------------------------------------------------------------------------------------
|  Optimization                                     |  Added Cells  |  Removed Cells  |  Optimized Cells/Nets  |  Dont Touch  |  Iterations  |  Elapsed   |
-----------------------------------------------------------------------------------------------------------------------------------------------------------
|  LUT Combining                                    |            0  |             21  |                    21  |           0  |           1  |  00:00:00  |
|  Retime                                           |            0  |              0  |                     0  |           0  |           1  |  00:00:00  |
|  Equivalent Driver Rewiring                       |            0  |              0  |                     0  |           0  |           1  |  00:00:00  |
|  Very High Fanout                                 |            0  |              0  |                     0  |           0  |           1  |  00:00:00  |
|  DSP Register                                     |            0  |              0  |                     0  |           0  |           1  |  00:00:00  |
|  Shift Register to Pipeline                       |            0  |              0  |                     0  |           0  |           1  |  00:00:00  |
|  Shift Register                                   |            0  |              0  |                     0  |           0  |           1  |  00:00:00  |
|  BRAM Register                                    |            0  |              0  |                     0  |           0  |           1  |  00:00:00  |
|  URAM Register                                    |            0  |              0  |                     0  |           0  |           1  |  00:00:00  |
|  Dynamic/Static Region Interface Net Replication  |            0  |              0  |                     0  |           0  |           1  |  00:00:00  |
|  Total                                            |            0  |             21  |                    21  |           0  |          10  |  00:00:00  |
-----------------------------------------------------------------------------------------------------------------------------------------------------------


Phase 2.5.1 Physical Synthesis In Placer | Checksum: 13a1145fe

Time (s): cpu = 00:00:44 ; elapsed = 00:00:30 . Memory (MB): peak = 6744.793 ; gain = 1505.668 ; free physical = 45764 ; free virtual = 53815
Phase 2.5 Global Placement Core | Checksum: 15e4d4f74

Time (s): cpu = 00:00:59 ; elapsed = 00:00:43 . Memory (MB): peak = 6744.793 ; gain = 1505.668 ; free physical = 45759 ; free virtual = 53811
Phase 2 Global Placement | Checksum: 15e4d4f74

Time (s): cpu = 00:00:59 ; elapsed = 00:00:43 . Memory (MB): peak = 6744.793 ; gain = 1505.668 ; free physical = 45769 ; free virtual = 53821

Phase 3 Detail Placement

Phase 3.1 Commit Multi Column Macros
Phase 3.1 Commit Multi Column Macros | Checksum: 1c8e8286d

Time (s): cpu = 00:01:06 ; elapsed = 00:00:50 . Memory (MB): peak = 6744.793 ; gain = 1505.668 ; free physical = 45690 ; free virtual = 53742

Phase 3.2 Commit Most Macros & LUTRAMs
Phase 3.2 Commit Most Macros & LUTRAMs | Checksum: 13900c6c6

Time (s): cpu = 00:01:07 ; elapsed = 00:00:50 . Memory (MB): peak = 6744.793 ; gain = 1505.668 ; free physical = 45583 ; free virtual = 53636

Phase 3.3 Small Shape DP

Phase 3.3.1 Small Shape Clustering
Phase 3.3.1 Small Shape Clustering | Checksum: a51c425e

Time (s): cpu = 00:01:08 ; elapsed = 00:00:51 . Memory (MB): peak = 6744.793 ; gain = 1505.668 ; free physical = 45518 ; free virtual = 53570

Phase 3.3.2 Flow Legalize Slice Clusters
Phase 3.3.2 Flow Legalize Slice Clusters | Checksum: 19509f19c

Time (s): cpu = 00:01:09 ; elapsed = 00:00:51 . Memory (MB): peak = 6744.793 ; gain = 1505.668 ; free physical = 45508 ; free virtual = 53560

Phase 3.3.3 Slice Area Swap
Phase 3.3.3 Slice Area Swap | Checksum: e24c32c6

Time (s): cpu = 00:01:10 ; elapsed = 00:00:52 . Memory (MB): peak = 6744.793 ; gain = 1505.668 ; free physical = 45441 ; free virtual = 53493
Phase 3.3 Small Shape DP | Checksum: e1f669a5

Time (s): cpu = 00:01:11 ; elapsed = 00:00:53 . Memory (MB): peak = 6744.793 ; gain = 1505.668 ; free physical = 45548 ; free virtual = 53600

Phase 3.4 Re-assign LUT pins
Phase 3.4 Re-assign LUT pins | Checksum: 126e8b613

Time (s): cpu = 00:01:11 ; elapsed = 00:00:53 . Memory (MB): peak = 6744.793 ; gain = 1505.668 ; free physical = 45539 ; free virtual = 53591

Phase 3.5 Pipeline Register Optimization
Phase 3.5 Pipeline Register Optimization | Checksum: 9c37007a

Time (s): cpu = 00:01:11 ; elapsed = 00:00:53 . Memory (MB): peak = 6744.793 ; gain = 1505.668 ; free physical = 45539 ; free virtual = 53591

Phase 3.6 Fast Optimization
Phase 3.6 Fast Optimization | Checksum: 8463eab2

Time (s): cpu = 00:01:12 ; elapsed = 00:00:53 . Memory (MB): peak = 6744.793 ; gain = 1505.668 ; free physical = 45537 ; free virtual = 53590
Phase 3 Detail Placement | Checksum: 8463eab2

Time (s): cpu = 00:01:12 ; elapsed = 00:00:53 . Memory (MB): peak = 6744.793 ; gain = 1505.668 ; free physical = 45537 ; free virtual = 53590

Phase 4 Post Placement Optimization and Clean-Up

Phase 4.1 Post Commit Optimization
INFO: [Timing 38-35] Done setting XDC timing constraints.

Phase 4.1.1 Post Placement Optimization
Post Placement Optimization Initialization | Checksum: 12ab4804c

Phase 4.1.1.1 BUFG Insertion

Starting Physical Synthesis Task

Phase 1 Physical Synthesis Initialization
INFO: [Physopt 32-721] Multithreading enabled for phys_opt_design using a maximum of 8 CPUs
INFO: [Physopt 32-619] Estimated Timing Summary | WNS=0.084 | TNS=0.000 |
Phase 1 Physical Synthesis Initialization | Checksum: 15af3f973

Time (s): cpu = 00:00:00.16 ; elapsed = 00:00:00.09 . Memory (MB): peak = 6744.793 ; gain = 0.000 ; free physical = 45621 ; free virtual = 53673
INFO: [Place 46-56] BUFG insertion identified 0 candidate nets. Inserted BUFG: 0, Replicated BUFG Driver: 0, Skipped due to Placement/Routing Conflicts: 0, Skipped due to Timing Degradation: 0, Skipped due to Illegal Netlist: 0.
Ending Physical Synthesis Task | Checksum: 164d6d773

Time (s): cpu = 00:00:00.19 ; elapsed = 00:00:00.13 . Memory (MB): peak = 6744.793 ; gain = 0.000 ; free physical = 45621 ; free virtual = 53673
Phase 4.1.1.1 BUFG Insertion | Checksum: 12ab4804c

Time (s): cpu = 00:01:20 ; elapsed = 00:01:01 . Memory (MB): peak = 6744.793 ; gain = 1505.668 ; free physical = 45628 ; free virtual = 53681

Phase 4.1.1.2 BUFG Replication
INFO: [Place 46-63] BUFG replication identified 0 candidate nets: Replicated nets: 0, Replicated BUFGs: 0, Replicated BUFG Driver: 0, Skipped due to Placement / Routing Conflict: 0, Skipped due to Timing: 0, Skipped due to constraints: 0
Phase 4.1.1.2 BUFG Replication | Checksum: 12ab4804c

Time (s): cpu = 00:01:20 ; elapsed = 00:01:01 . Memory (MB): peak = 6744.793 ; gain = 1505.668 ; free physical = 45628 ; free virtual = 53681

Phase 4.1.1.3 Post Placement Timing Optimization
INFO: [Place 30-746] Post Placement Timing Summary WNS=0.509. For the most accurate timing information please run report_timing.
Phase 4.1.1.3 Post Placement Timing Optimization | Checksum: 1d32a3438

Time (s): cpu = 00:01:25 ; elapsed = 00:01:05 . Memory (MB): peak = 6744.793 ; gain = 1505.668 ; free physical = 45628 ; free virtual = 53680

Phase 4.1.1.4 Replication
INFO: [Place 46-19] Post Replication Timing Summary WNS=0.509. For the most accurate timing information please run report_timing.
Phase 4.1.1.4 Replication | Checksum: 1d32a3438

Time (s): cpu = 00:01:25 ; elapsed = 00:01:05 . Memory (MB): peak = 6744.793 ; gain = 1505.668 ; free physical = 45626 ; free virtual = 53679

Time (s): cpu = 00:01:25 ; elapsed = 00:01:05 . Memory (MB): peak = 6744.793 ; gain = 1505.668 ; free physical = 45631 ; free virtual = 53684
Phase 4.1 Post Commit Optimization | Checksum: 1d32a3438

Time (s): cpu = 00:01:25 ; elapsed = 00:01:05 . Memory (MB): peak = 6744.793 ; gain = 1505.668 ; free physical = 45631 ; free virtual = 53684

Phase 4.2 Post Placement Cleanup
Phase 4.2 Post Placement Cleanup | Checksum: 1d32a3438

Time (s): cpu = 00:01:52 ; elapsed = 00:01:31 . Memory (MB): peak = 6744.793 ; gain = 1505.668 ; free physical = 45686 ; free virtual = 53739

Phase 4.3 Placer Reporting

Phase 4.3.1 Print Estimated Congestion
INFO: [Place 30-612] Post-Placement Estimated Congestion 
 ________________________________________________________________________
|           | Global Congestion | Long Congestion   | Short Congestion  |
| Direction | Region Size       | Region Size       | Region Size       |
|___________|___________________|___________________|___________________|
|      North|                1x1|                1x1|                1x1|
|___________|___________________|___________________|___________________|
|      South|                1x1|                1x1|                1x1|
|___________|___________________|___________________|___________________|
|       East|                1x1|                1x1|                1x1|
|___________|___________________|___________________|___________________|
|       West|                1x1|                1x1|                1x1|
|___________|___________________|___________________|___________________|

Phase 4.3.1 Print Estimated Congestion | Checksum: 1d32a3438

Time (s): cpu = 00:01:52 ; elapsed = 00:01:31 . Memory (MB): peak = 6744.793 ; gain = 1505.668 ; free physical = 45686 ; free virtual = 53739
Phase 4.3 Placer Reporting | Checksum: 1d32a3438

Time (s): cpu = 00:01:52 ; elapsed = 00:01:31 . Memory (MB): peak = 6744.793 ; gain = 1505.668 ; free physical = 45686 ; free virtual = 53739

Phase 4.4 Final Placement Cleanup
Netlist sorting complete. Time (s): cpu = 00:00:00 ; elapsed = 00:00:00 . Memory (MB): peak = 6744.793 ; gain = 0.000 ; free physical = 45686 ; free virtual = 53739

Time (s): cpu = 00:01:52 ; elapsed = 00:01:31 . Memory (MB): peak = 6744.793 ; gain = 1505.668 ; free physical = 45686 ; free virtual = 53739
Phase 4 Post Placement Optimization and Clean-Up | Checksum: 1a188ae14

Time (s): cpu = 00:01:52 ; elapsed = 00:01:31 . Memory (MB): peak = 6744.793 ; gain = 1505.668 ; free physical = 45686 ; free virtual = 53739
Ending Placer Task | Checksum: fd26ab65

Time (s): cpu = 00:01:52 ; elapsed = 00:01:31 . Memory (MB): peak = 6744.793 ; gain = 1505.668 ; free physical = 45686 ; free virtual = 53739
INFO: [Common 17-83] Releasing license: Implementation
80 Infos, 1 Warnings, 0 Critical Warnings and 0 Errors encountered.
place_design completed successfully
place_design: Time (s): cpu = 00:01:55 ; elapsed = 00:01:32 . Memory (MB): peak = 6744.793 ; gain = 1505.668 ; free physical = 46304 ; free virtual = 54357
TIMESTAMP: HLS-REPORT: implementation generate_reports_vivado: 2023-01-28 11:37:37 EST
INFO: HLS-REPORT: Running report: report_utilization -file ./report/Huffman_decoder_utilization_routed.rpt
INFO: HLS-REPORT: Running report: report_utilization -hierarchical -hierarchical_depth 6 -file ./report/Huffman_decoder_utilization_hierarchical_routed.rpt
INFO: HLS-REPORT: Running report: report_timing_summary -file ./report/Huffman_decoder_timing_routed.rpt
INFO: [Timing 38-91] UpdateTimingParams: Speed grade: -2L, Temperature grade: E, Delay Type: min_max.
INFO: [Timing 38-191] Multithreading enabled for timing update using a maximum of 8 CPUs
WARNING: [Timing 38-242] The property HD.CLK_SRC of clock port "ap_clk" is not set. In out-of-context mode, this prevents timing estimation for clock delay/skew
Resolution: Set the HD.CLK_SRC property of the out-of-context port to the location of the clock buffer instance in the top-level design
INFO: HLS-REPORT: Running report: report_route_status -file ./report/Huffman_decoder_status_routed.rpt
INFO: HLS-REPORT: Running report: report_timing -max_paths 10 -file ./report/Huffman_decoder_timing_paths_routed.rpt
INFO: [Timing 38-91] UpdateTimingParams: Speed grade: -2L, Temperature grade: E, Delay Type: max.
INFO: [Timing 38-191] Multithreading enabled for timing update using a maximum of 8 CPUs
INFO: [Timing 38-78] ReportTimingParams: -max_paths 10 -nworst 1 -delay_type max -sort_by slack.
INFO: HLS-REPORT: Running report: report_design_analysis -file ./report/Huffman_decoder_design_analysis_routed.rpt
INFO: HLS-REPORT: Running report: ::tclapp::xilinx::designutils::report_failfast -detailed_report impl -file ./report/Huffman_decoder_failfast_routed.rpt
 -I- design metrics completed in 0 seconds
 -I- DONT_TOUCH metric completed in 0 seconds
 -I- MARK_DEBUG metric completed in 0 seconds
 -I- utilization metrics completed in 1 seconds
 -I- control set metrics completed in 0 seconds
 -I- methodology check metrics completed in 1 seconds
 -I- average fanout metrics completed in 0 seconds (0 modules)
 -I- non-FD high fanout nets completed in 0 seconds
 -I- path budgeting metrics completed in 1 seconds
 -I- Generated file /home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/impl/verilog/report/impl.timing_budget_Net.rpt
 -I- Generated file /home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/impl/verilog/report/impl.timing_budget_Net.csv
 -I- Generated interactive report /home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/impl/verilog/report/impl.timing_budget_Net.rpx
#  +-----------------------------------------------------------------------------------------+
#  | Design Summary                                                                          |
#  | impl_1                                                                                  |
#  | xcu280-fsvh2892-2L-e                                                                    |
#  +-----------------------------------------------------------+-----------+--------+--------+
#  | Criteria                                                  | Guideline | Actual | Status |
#  +-----------------------------------------------------------+-----------+--------+--------+
#  | LUT                                                       | 70%       | 0.10%  | OK     |
#  | FD                                                        | 50%       | 0.02%  | OK     |
#  | LUTRAM+SRL                                                | 25%       | 0.00%  | OK     |
#  | CARRY8                                                    | 25%       | 0.02%  | OK     |
#  | MUXF7                                                     | 15%       | 0.00%  | OK     |
#  | DSP                                                       | 80%       | 0.02%  | OK     |
#  | RAMB/FIFO                                                 | 80%       | 0.00%  | OK     |
#  | URAM                                                      | 80%       | 0.00%  | OK     |
#  | DSP+RAMB+URAM (Avg)                                       | 70%       | 0.02%  | OK     |
#  | BUFGCE* + BUFGCTRL                                        | 24        | 0      | OK     |
#  | DONT_TOUCH (cells/nets)                                   | 0         | 0      | OK     |
#  | MARK_DEBUG (nets)                                         | 0         | 0      | OK     |
#  | Control Sets                                              | 24444     | 47     | OK     |
#  | Average Fanout for modules > 100k cells                   | 4         | 0      | OK     |
#  | Non-FD high fanout nets > 10k loads                       | 0         | 0      | OK     |
#  +-----------------------------------------------------------+-----------+--------+--------+
#  | TIMING-6 (No common primary clock between related clocks) | 0         | 0      | OK     |
#  | TIMING-7 (No common node between related clocks)          | 0         | 0      | OK     |
#  | TIMING-8 (No common period between related clocks)        | 0         | 0      | OK     |
#  | TIMING-14 (LUT on the clock tree)                         | 0         | 0      | OK     |
#  | TIMING-35 (No common node in paths with the same clock)   | 0         | 0      | OK     |
#  +-----------------------------------------------------------+-----------+--------+--------+
#  | Number of paths above max LUT budgeting (0.300ns)         | 0         | 0      | OK     |
#  | Number of paths above max Net budgeting (0.208ns)         | 0         | 7      | REVIEW |
#  +-----------------------------------------------------------+-----------+--------+--------+
 -I- Generated file /home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/impl/verilog/report/Huffman_decoder_failfast_routed.rpt
 -I- Number of criteria to review: 1
 -I- This report should be run before placing the design and uses conservative guidelines beyond which runtime and timing closure will likely be more challenging
 -I- report_failfast completed in 3 seconds
TIMESTAMP: HLS-REPORT: implementation gen_data_dict_vivado: 2023-01-28 11:37:42 EST
TIMESTAMP: HLS-REPORT: impl extract_util_hier: 2023-01-28 11:37:42 EST
TIMESTAMP: HLS-REPORT: impl get_cell_hier_data: 2023-01-28 11:37:42 EST
TIMESTAMP: HLS-REPORT: impl get_timing_paths: 2023-01-28 11:37:42 EST
TIMESTAMP: HLS-REPORT: impl process timing paths: 2023-01-28 11:37:42 EST
TIMESTAMP: HLS-REPORT: impl get_all_vv_rpt_files: 2023-01-28 11:37:42 EST
TIMESTAMP: HLS-REPORT: implementation write_reports_vivado: 2023-01-28 11:37:42 EST
HLS EXTRACTION: impl area_totals:  0 1303680 2607360 9024 4032 162960 960
HLS EXTRACTION: impl area_current: 0 1260 639 2 0 0 0 230 0 0
HLS EXTRACTION: impl resources_dict: AVAIL_LUT 1303680 LUT 1260 AVAIL_FF 2607360 FF 639 AVAIL_DSP 9024 DSP 2 AVAIL_BRAM 4032 BRAM 0 AVAIL_URAM 960 URAM 0 LATCH 0 SRL 0 AVAIL_CLB 162960 CLB 230
INFO: HLS-REPORT: generated /home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/impl/verilog/report/vivado_impl.xml
INFO: HLS-REPORT: generated /home/janethamrani/Vitis_Libraries/codec/L1/tests/jpegdec/test.prj/solution1/impl/report/verilog/Huffman_decoder_export.rpt


Implementation tool: Xilinx Vivado v.2021.2
Project:             test.prj
Solution:            solution1
Device target:       xcu280-fsvh2892-2L-e
Report date:         Sat Jan 28 11:37:42 EST 2023

#=== Post-Implementation Resource usage ===
SLICE:            0
LUT:           1260
FF:             639
DSP:              2
BRAM:             0
URAM:             0
LATCH:            0
SRL:              0
CLB:            230

#=== Final timing ===
CP required:                     3.330
CP achieved post-synthesis:      3.243
CP achieved post-implementation: 2.979
Timing met

TIMESTAMP: HLS-REPORT: implementation end: 2023-01-28 11:37:42 EST
INFO: HLS-REPORT: impl run complete: worst setup slack (WNS)=0.350645, worst hold slack (WHS)=0.049000, total pulse width slack(TPWS)=0.000000, number of unrouted nets=0
# hls_vivado_reports_finalize $report_options
TIMESTAMP: HLS-REPORT: all reports complete: 2023-01-28 11:37:42 EST
INFO: [Common 17-206] Exiting Vivado at Sat Jan 28 11:37:42 2023...
INFO: [HLS 200-802] Generated output file test.prj/solution1/impl/export.zip
INFO: [HLS 200-111] Finished Command export_design CPU user time: 189.29 seconds. CPU system time: 12.92 seconds. Elapsed time: 383.99 seconds; current allocated memory: 8.656 MB.
INFO: [HLS 200-112] Total CPU user time: 208.41 seconds. Total CPU system time: 14.3 seconds. Total elapsed time: 403.07 seconds; peak allocated memory: 1.191 GB.
INFO: [Common 17-206] Exiting vitis_hls at Sat Jan 28 11:37:46 2023...

```
