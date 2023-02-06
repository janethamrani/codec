# JPEGXL Encoding
### Background
JPEG XL (JXL) - new file standard that is more compact than JPEG, with a compression ratio of typically 20:1 to 50:1 and supports both lossy and lossless compression
### L1 Tests
``` sh
janethamrani@superlu:~/Vitis_Libraries/codec/L1/tests/jxlEnc$ cd order_tokenize/janethamrani@superlu:~/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize$ make run CSIM=1
Configured: settings.tcl
----
set XPART xcu280-fsvh2892-2L-e
set CSIM 1
set CSYNTH 0
set COSIM 0
set VIVADO_SYN 0
set VIVADO_IMPL 0
set XF_PROJ_ROOT "/home/janethamrani/Vitis_Libraries/codec"
set CUR_DIR "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize"
----
vitis_hls -f run_hls.tcl;

****** Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.2 (64-bit)
  **** SW Build 3367213 on Tue Oct 19 02:47:39 MDT 2021
  **** IP Build 3369179 on Thu Oct 21 08:25:16 MDT 2021
    ** Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.

source /tools/Xilinx/Vitis_HLS/2021.2/scripts/vitis_hls/hls.tcl -notrace
INFO: Applying HLS Y2K22 patch v1.2 for IP revision
INFO: [HLS 200-10] Running '/tools/Xilinx/Vitis_HLS/2021.2/bin/unwrapped/lnx64.o/vitis_hls'
INFO: [HLS 200-10] For user 'janethamrani' on host 'superlu' (Linux_x86_64 version 5.4.0-137-generic) on Sat Feb 04 13:33:50 EST 2023
INFO: [HLS 200-10] On os Ubuntu 18.04.6 LTS
INFO: [HLS 200-10] In directory '/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize'
Sourcing Tcl script 'run_hls.tcl'
INFO: [HLS 200-1510] Running: open_project -reset tokenize.prj 
INFO: [HLS 200-10] Creating and opening project '/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj'.
INFO: [HLS 200-1510] Running: add_files kernel/topOrderTokenize.cpp -cflags -I/home/janethamrani/Vitis_Libraries/codec/L1/include -I/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/kernel 
INFO: [HLS 200-10] Adding design file 'kernel/topOrderTokenize.cpp' to the project
INFO: [HLS 200-1510] Running: add_files -tb host/test_orderTokenize.cpp -cflags -I/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/kernel 
INFO: [HLS 200-10] Adding test bench file 'host/test_orderTokenize.cpp' to the project
INFO: [HLS 200-1510] Running: set_top top_order_tokenize 
INFO: [HLS 200-1510] Running: open_solution -reset solution1 
INFO: [HLS 200-10] Creating and opening solution '/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1'.
INFO: [HLS 200-10] Cleaning up the solution database.
WARNING: [HLS 200-40] No /home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/solution1.aps file found.
INFO: [HLS 200-1505] Using default flow_target 'vivado'
Resolution: For help on HLS 200-1505 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-1505.html
INFO: [HLS 200-1510] Running: set_part xcu280-fsvh2892-2L-e 
INFO: [HLS 200-1611] Setting target device to 'xcu280-fsvh2892-2L-e'
INFO: [HLS 200-1510] Running: create_clock -period 3.33 
INFO: [SYN 201-201] Setting up clock 'default' with a period of 3.33ns.
INFO: [HLS 200-1510] Running: csim_design -ldflags -pthread -std=c++11 -argv -i /home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/data/orders.txt -g /home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/data/goldens.txt 
INFO: [SIM 211-2] *************** CSIM start ***************
INFO: [SIM 211-4] CSIM will launch GCC as the compiler.
make[1]: Entering directory '/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/csim/build'
   Compiling ../../../../host/test_orderTokenize.cpp in debug mode
   Compiling ../../../../kernel/topOrderTokenize.cpp in debug mode
   Generating csim.exe
make[1]: Leaving directory '/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/csim/build'

-----------------Order Tokenize----------------
INFO: num_orders is 960 
INFO: Tokenize CSim Pass!
INFO: [SIM 211-1] CSim done with 0 errors.
INFO: [SIM 211-3] *************** CSIM finish ***************
INFO: [HLS 200-111] Finished Command csim_design CPU user time: 3.13 seconds. CPU system time: 0.27 seconds. Elapsed time: 2.91 seconds; current allocated memory: -937.109 MB.
INFO: [HLS 200-112] Total CPU user time: 5.13 seconds. Total CPU system time: 0.68 seconds. Total elapsed time: 4.53 seconds; peak allocated memory: 282.062 MB.
INFO: [Common 17-206] Exiting vitis_hls at Sat Feb  4 13:33:55 2023...
janethamrani@superlu:~/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize$ make run CSYNTH=1
Configured: settings.tcl
----
set XPART xcu280-fsvh2892-2L-e
set CSIM 0
set CSYNTH 1
set COSIM 0
set VIVADO_SYN 0
set VIVADO_IMPL 0
set XF_PROJ_ROOT "/home/janethamrani/Vitis_Libraries/codec"
set CUR_DIR "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize"
----
vitis_hls -f run_hls.tcl;

****** Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.2 (64-bit)
  **** SW Build 3367213 on Tue Oct 19 02:47:39 MDT 2021
  **** IP Build 3369179 on Thu Oct 21 08:25:16 MDT 2021
    ** Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.

source /tools/Xilinx/Vitis_HLS/2021.2/scripts/vitis_hls/hls.tcl -notrace
INFO: Applying HLS Y2K22 patch v1.2 for IP revision
INFO: [HLS 200-10] Running '/tools/Xilinx/Vitis_HLS/2021.2/bin/unwrapped/lnx64.o/vitis_hls'
INFO: [HLS 200-10] For user 'janethamrani' on host 'superlu' (Linux_x86_64 version 5.4.0-137-generic) on Sat Feb 04 13:36:51 EST 2023
INFO: [HLS 200-10] On os Ubuntu 18.04.6 LTS
INFO: [HLS 200-10] In directory '/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize'
Sourcing Tcl script 'run_hls.tcl'
INFO: [HLS 200-1510] Running: open_project -reset tokenize.prj 
INFO: [HLS 200-10] Opening and resetting project '/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj'.
WARNING: [HLS 200-40] No /home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/solution1.aps file found.
INFO: [HLS 200-1510] Running: add_files kernel/topOrderTokenize.cpp -cflags -I/home/janethamrani/Vitis_Libraries/codec/L1/include -I/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/kernel 
INFO: [HLS 200-10] Adding design file 'kernel/topOrderTokenize.cpp' to the project
INFO: [HLS 200-1510] Running: add_files -tb host/test_orderTokenize.cpp -cflags -I/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/kernel 
INFO: [HLS 200-10] Adding test bench file 'host/test_orderTokenize.cpp' to the project
INFO: [HLS 200-1510] Running: set_top top_order_tokenize 
INFO: [HLS 200-1510] Running: open_solution -reset solution1 
INFO: [HLS 200-10] Creating and opening solution '/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1'.
INFO: [HLS 200-10] Cleaning up the solution database.
WARNING: [HLS 200-40] No /home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/solution1.aps file found.
INFO: [HLS 200-1505] Using default flow_target 'vivado'
Resolution: For help on HLS 200-1505 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-1505.html
INFO: [HLS 200-1510] Running: set_part xcu280-fsvh2892-2L-e 
INFO: [HLS 200-1611] Setting target device to 'xcu280-fsvh2892-2L-e'
INFO: [HLS 200-1510] Running: create_clock -period 3.33 
INFO: [SYN 201-201] Setting up clock 'default' with a period of 3.33ns.
INFO: [HLS 200-1510] Running: csynth_design 
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 1.191 GB.
INFO: [HLS 200-10] Analyzing design file 'kernel/topOrderTokenize.cpp' ... 
WARNING: [HLS 207-5523] 'Resource pragma' is deprecated, use 'bind_op/bind_storage pragma' instead (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:365:9)
WARNING: [HLS 207-5523] 'Resource pragma' is deprecated, use 'bind_op/bind_storage pragma' instead (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:448:9)
WARNING: [HLS 207-5523] 'Resource pragma' is deprecated, use 'bind_op/bind_storage pragma' instead (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:454:9)
WARNING: [HLS 207-5523] 'Resource pragma' is deprecated, use 'bind_op/bind_storage pragma' instead (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:460:9)
WARNING: [HLS 207-5523] 'Resource pragma' is deprecated, use 'bind_op/bind_storage pragma' instead (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:466:9)
WARNING: [HLS 207-5523] 'Resource pragma' is deprecated, use 'bind_op/bind_storage pragma' instead (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:472:9)
WARNING: [HLS 214-113] Either use an argument of the function or declare the variable inside the dataflow loop body (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:476:28)
Resolution: For help on HLS 214-113 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=214-113.html
WARNING: [HLS 200-471] Dataflow form checks found 1 issue(s) in file kernel/topOrderTokenize.cpp
Resolution: For help on HLS 200-471 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-471.html
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 4.38 seconds. CPU system time: 0.31 seconds. Elapsed time: 4.18 seconds; current allocated memory: 283.941 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 214-284] Auto array partition mode is set into default.
WARNING: [HLS 214-172] Cannot apply disaggregate pragma/directive on stream object 'lehmerStrm' as it needs to be read/written in its entirety
WARNING: [HLS 214-172] Cannot apply disaggregate pragma/directive on stream object 'endStrm' as it needs to be read/written in its entirety
WARNING: [HLS 214-172] Cannot apply disaggregate pragma/directive on stream object 'zigzagStrm' as it needs to be read/written in its entirety
WARNING: [HLS 214-172] Cannot apply disaggregate pragma/directive on stream object 'strategyStrm' as it needs to be read/written in its entirety
INFO: [HLS 214-178] Inlining function 'xf::codec::internal::HybridUint::HybridUint(ap_uint<32>, ap_uint<32>, ap_uint<32>)' into 'xf::codec::internal::hls_CoeffOrderContext(ap_uint<32>)' (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:204:0)
INFO: [HLS 214-178] Inlining function 'xf::codec::internal::hls_Encode(xf::codec::internal::HybridUint&, ap_uint<32>, ap_uint<32>&, ap_uint<32>&, ap_uint<32>&)' into 'xf::codec::internal::hls_CoeffOrderContext(ap_uint<32>)' (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:204:0)
INFO: [HLS 214-248] Applying array_partition to 'temp': Complete partitioning on dimension 1. (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:364:17)
INFO: [HLS 214-248] Applying array_partition to 'skipStrm': Complete partitioning on dimension 1. (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:457:28)
INFO: [HLS 214-241] Aggregating fifo (hls::stream) variable 'skipStrm_0' with compact=bit mode in 32-bits (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:457:28)
INFO: [HLS 214-241] Aggregating fifo (hls::stream) variable 'skipStrm_1' with compact=bit mode in 32-bits (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:457:28)
INFO: [HLS 214-241] Aggregating fifo (hls::stream) variable 'skipStrm_2' with compact=bit mode in 32-bits (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:457:28)
INFO: [HLS 214-241] Aggregating fifo (hls::stream) variable 'e_tokenStrm' with compact=bit mode in 1-bits (kernel/topOrderTokenize.cpp:22:0)
INFO: [HLS 214-241] Aggregating fifo (hls::stream) variable 'tokenStrm' with compact=bit mode in 64-bits (kernel/topOrderTokenize.cpp:22:0)
INFO: [HLS 214-241] Aggregating fifo (hls::stream) variable 'orderStrm' with compact=bit mode in 32-bits (kernel/topOrderTokenize.cpp:22:0)
INFO: [HLS 214-270] Starting automatic array partition analysis...
INFO: [HLS 214-131] Inlining function '_llvm.fpga.pack.none.i8.s_struct.ap_uint<8>s' into 'xf::codec::internal::scanStrategy(unsigned short, ap_uint<32>&, hls::stream<ap_uint<8>, 0>&, hls::stream<ap_uint<32>, 0>*) (.1)' (/tools/Xilinx/Vitis_HLS/2021.2/common/technology/autopilot/hls_stream_39.h:173:9)
INFO: [HLS 214-131] Inlining function '_llvm.fpga.pack.none.i32.s_struct.ssdm_int<32, false>s' into '_llvm.fpga.unpack.bits.s_struct.ap_uint<32>s.i32.1'
INFO: [HLS 214-131] Inlining function '_llvm.fpga.unpack.bits.s_struct.ap_uint<32>s.i32.1' into 'xf::codec::internal::loadZigzag(ap_uint<32>&, hls::stream<ap_uint<8>, 0>&, hls::stream<ap_uint<32>, 0>&, hls::stream<ap_uint<32>, 0>&, hls::stream<ap_uint<32>, 0>&) (.1)' (/tools/Xilinx/Vitis_HLS/2021.2/common/technology/autopilot/hls_stream_39.h:144:9)
INFO: [HLS 214-131] Inlining function '_llvm.fpga.pack.none.i32.s_struct.ap_uint<32>s' into 'xf::codec::internal::loadZigzag(ap_uint<32>&, hls::stream<ap_uint<8>, 0>&, hls::stream<ap_uint<32>, 0>&, hls::stream<ap_uint<32>, 0>&, hls::stream<ap_uint<32>, 0>&) (.1)' (/tools/Xilinx/Vitis_HLS/2021.2/common/technology/autopilot/hls_stream_39.h:173:9)
INFO: [HLS 214-131] Inlining function '_llvm.fpga.pack.none.i32.s_struct.ap_uint<32>s' into 'xf::codec::internal::lehmerCore(ap_uint<32>, ap_uint<32>, ap_uint<16>*, ap_uint<32>&, hls::stream<ap_uint<32>, 0>&, hls::stream<ap_uint<32>, 0>&) (.36.43.50.57.77.85.1)' (/tools/Xilinx/Vitis_HLS/2021.2/common/technology/autopilot/hls_stream_39.h:173:9)
INFO: [HLS 214-131] Inlining function '_llvm.fpga.unpack.bits.s_struct.ap_uint<32>s.i32.1' into 'xf::codec::internal::updateLehmer(ap_uint<32>, hls::stream<ap_uint<32>, 0>&, hls::stream<ap_uint<32>, 0>&, hls::stream<ap_uint<32>, 0>&, hls::stream<ap_uint<32>, 0>&) (.1)' (/tools/Xilinx/Vitis_HLS/2021.2/common/technology/autopilot/hls_stream_39.h:144:9)
INFO: [HLS 214-131] Inlining function '_llvm.fpga.pack.none.i32.s_struct.ap_uint<32>s' into 'xf::codec::internal::updateLehmer(ap_uint<32>, hls::stream<ap_uint<32>, 0>&, hls::stream<ap_uint<32>, 0>&, hls::stream<ap_uint<32>, 0>&, hls::stream<ap_uint<32>, 0>&) (.1)' (/tools/Xilinx/Vitis_HLS/2021.2/common/technology/autopilot/hls_stream_39.h:173:9)
INFO: [HLS 214-131] Inlining function '_llvm.fpga.unpack.bits.s_struct.ap_uint<32>s.i32.1' into 'xf::codec::internal::updateToken(ap_uint<32>, hls::stream<ap_uint<32>, 0>&, hls::stream<ap_uint<32>, 0>&, hls::stream<ap_uint<32>, 0>&, hls::stream<ap_uint<64>, 0>&, hls::stream<bool, 0>&) (.1)' (/tools/Xilinx/Vitis_HLS/2021.2/common/technology/autopilot/hls_stream_39.h:144:9)
INFO: [HLS 214-131] Inlining function '_llvm.fpga.pack.none.i64.s_struct.ap_uint<64>s' into 'xf::codec::internal::updateToken(ap_uint<32>, hls::stream<ap_uint<32>, 0>&, hls::stream<ap_uint<32>, 0>&, hls::stream<ap_uint<32>, 0>&, hls::stream<ap_uint<64>, 0>&, hls::stream<bool, 0>&) (.1)' (/tools/Xilinx/Vitis_HLS/2021.2/common/technology/autopilot/hls_stream_39.h:173:9)
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 2.87 seconds. CPU system time: 0.2 seconds. Elapsed time: 3.11 seconds; current allocated memory: 284.703 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 284.703 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.05 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.08 seconds; current allocated memory: 299.824 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [XFORM 203-602] Inlining function 'xf::codec::internal::hls_CoeffOrderContext' into 'xf::codec::internal::updateToken' (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:403) automatically.
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.12 seconds. CPU system time: 0 seconds. Elapsed time: 0.13 seconds; current allocated memory: 321.598 MB.
INFO: [XFORM 203-602] Inlining function 'xf::codec::internal::hls_CoeffOrderContext' into 'xf::codec::internal::updateToken' (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:403) automatically.
INFO: [XFORM 203-712] Applying dataflow to function 'xf::codec::internal::updateCore' (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:353:1), detected/extracted 2 process function(s): 
	 'xf::codec::internal::initTemp'
	 'xf::codec::internal::lehmerCore'.
INFO: [XFORM 203-712] Applying dataflow to function 'xf::codec::hls_EncodeCoeffOrders' (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:445:1), detected/extracted 6 process function(s): 
	 'entry_proc'
	 'xf::codec::hls_EncodeCoeffOrders_Block_.split1_proc'
	 'xf::codec::internal::scanStrategy'
	 'xf::codec::internal::loadZigzag'
	 'xf::codec::internal::updateLehmer'
	 'xf::codec::internal::updateToken'.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:402:25) in function 'xf::codec::internal::updateToken'... converting 4 basic blocks.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:402:25) to (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:410:13) in function 'xf::codec::internal::updateToken'... converting 4 basic blocks.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.25 seconds. CPU system time: 0 seconds. Elapsed time: 0.25 seconds; current allocated memory: 365.250 MB.
WARNING: [HLS 200-960] Cannot flatten loop 'VITIS_LOOP_401_2' (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:402:25) in function 'xf::codec::internal::updateToken' more than one sub loop.
Resolution: For help on HLS 200-960 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-960.html
WARNING: [HLS 200-960] Cannot flatten loop 'VITIS_LOOP_398_1' (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:398:39) in function 'xf::codec::internal::updateToken' the outer loop is not a perfect loop.
Resolution: For help on HLS 200-960 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-960.html
INFO: [XFORM 203-541] Flattening a loop nest 'CHANNELS' (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:290:25) in function 'xf::codec::internal::loadZigzag'.
WARNING: [HLS 200-960] Cannot flatten loop 'VITIS_LOOP_270_1' (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:270:39) in function 'xf::codec::internal::loadZigzag' the outer loop is not a perfect loop because there is nontrivial logic before entering the inner loop.
Resolution: For help on HLS 200-960 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-960.html
WARNING: [HLS 200-960] Cannot flatten loop 'VITIS_LOOP_319_1' (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:319:40) in function 'xf::codec::internal::lehmerCore' more than one sub loop.
Resolution: For help on HLS 200-960 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-960.html
INFO: [HLS 200-472] Inferring partial write operation for 'temp' (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:307:10)
INFO: [HLS 200-472] Inferring partial write operation for 'temp.V.1' (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:370:13)
INFO: [HLS 200-472] Inferring partial write operation for 'temp' 
WARNING: [HLS 200-1614] Cosimulation may deadlock if process loadZigzag has a streamed top-level array input and has predecessor processes. If a deadlock occurs, please consider converting the streamed array into an hls::stream
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.17 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.19 seconds; current allocated memory: 518.211 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'top_order_tokenize' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'entry_proc' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.05 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.08 seconds; current allocated memory: 518.773 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0.01 seconds; current allocated memory: 518.793 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'scanStrategy_Pipeline_SCAN_STRATEGY' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'SCAN_STRATEGY'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 3, loop 'SCAN_STRATEGY'
WARNING: [HLS 200-871] Estimated clock period (2.47188ns) exceeds the target (target clock period: 3.33ns, clock uncertainty: 0.8991ns, effective delay budget: 2.4309ns).
Resolution: For help on HLS 200-871 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-871.html
WARNING: [HLS 200-1016] The critical path in module 'scanStrategy_Pipeline_SCAN_STRATEGY' consists of the following:	'load' operation ('order', /home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:222) on array 'xf_codec_internal_kStrategyOrder' [39]  (0.651 ns)
	'shl' operation ('shl_ln224', /home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:224) [42]  (0.557 ns)
	'and' operation ('and_ln225', /home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:225) [50]  (0 ns)
	'icmp' operation ('icmp_ln225', /home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:225) [51]  (0.64 ns)
	blocking operation 0.624 ns on control path)

Resolution: For help on HLS 200-1016 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-1016.html
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 520.676 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 520.676 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'scanStrategy' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.05 seconds; current allocated memory: 520.676 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.02 seconds; current allocated memory: 520.676 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'loadZigzag_Pipeline_CHANNELS_ZIGZAG_LOOP' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'CHANNELS_ZIGZAG_LOOP'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 5, loop 'CHANNELS_ZIGZAG_LOOP'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 520.750 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.03 seconds; current allocated memory: 520.750 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'loadZigzag' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 521.355 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.03 seconds; current allocated memory: 521.355 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'updateLehmer_Pipeline_INIT_TEMP_PING' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'INIT_TEMP_PING'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 1, loop 'INIT_TEMP_PING'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 521.543 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.02 seconds; current allocated memory: 521.543 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'initTemp' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'INIT_TEMP_PONG'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 1, loop 'INIT_TEMP_PONG'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.02 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.02 seconds; current allocated memory: 521.852 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.02 seconds; current allocated memory: 521.852 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'lehmerCore_Pipeline_LEHMER_LOOP0' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'LEHMER_LOOP0'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 3, loop 'LEHMER_LOOP0'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 522.066 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.02 seconds; current allocated memory: 522.066 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'lehmerCore_Pipeline_LEHMER_LOOP1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'LEHMER_LOOP1'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 3, loop 'LEHMER_LOOP1'
WARNING: [HLS 200-871] Estimated clock period (3.191ns) exceeds the target (target clock period: 3.33ns, clock uncertainty: 0.8991ns, effective delay budget: 2.4309ns).
Resolution: For help on HLS 200-871 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-871.html
WARNING: [HLS 200-1016] The critical path in module 'lehmerCore_Pipeline_LEHMER_LOOP1' consists of the following:	'load' operation ('temp_load') on array 'temp' [26]  (1.2 ns)
	'select' operation ('reuse_select', /home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:338) [28]  (0 ns)
	'add' operation ('add_ln885') [29]  (0.785 ns)
	'store' operation ('temp_addr_write_ln885') of variable 'add_ln885' on array 'temp' [30]  (1.2 ns)

Resolution: For help on HLS 200-1016 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-1016.html
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 522.289 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.03 seconds; current allocated memory: 522.289 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'lehmerCore' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.05 seconds; current allocated memory: 522.617 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 522.617 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'updateCore' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.06 seconds; current allocated memory: 522.617 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.02 seconds; current allocated memory: 522.617 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'updateLehmer' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.07 seconds. CPU system time: 0 seconds. Elapsed time: 0.07 seconds; current allocated memory: 523.164 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.06 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.07 seconds; current allocated memory: 523.164 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'updateToken_Pipeline_TOKEN_LOOP' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'TOKEN_LOOP'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 4, loop 'TOKEN_LOOP'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.1 seconds. CPU system time: 0 seconds. Elapsed time: 0.11 seconds; current allocated memory: 523.605 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.03 seconds; current allocated memory: 523.605 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'updateToken_Pipeline_TOKEN_LEFTOVER' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'TOKEN_LEFTOVER'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 2, loop 'TOKEN_LEFTOVER'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.05 seconds; current allocated memory: 524.098 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0.01 seconds; current allocated memory: 524.098 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'updateToken' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.05 seconds; current allocated memory: 524.250 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.07 seconds. CPU system time: 0 seconds. Elapsed time: 0.06 seconds; current allocated memory: 524.250 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'hls_EncodeCoeffOrders' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.1 seconds. CPU system time: 0 seconds. Elapsed time: 0.09 seconds; current allocated memory: 524.250 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.09 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.09 seconds; current allocated memory: 524.250 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'top_order_tokenize' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.18 seconds. CPU system time: 0 seconds. Elapsed time: 0.18 seconds; current allocated memory: 524.289 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.07 seconds. CPU system time: 0 seconds. Elapsed time: 0.07 seconds; current allocated memory: 524.375 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'entry_proc' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'entry_proc'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.17 seconds. CPU system time: 0 seconds. Elapsed time: 0.18 seconds; current allocated memory: 524.492 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'scanStrategy_Pipeline_SCAN_STRATEGY' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SYN 201-210] Renamed object name 'scanStrategy_Pipeline_SCAN_STRATEGY_xf_codec_internal_kStrategyOrder_ROM_AUTO_1R' to 'scanStrategy_Pipeline_SCAN_STRATEGY_xf_codec_internal_kStrategyOrder_ROM_AUTObkb' due to the length limit 80
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'scanStrategy_Pipeline_SCAN_STRATEGY' pipeline 'SCAN_STRATEGY' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Finished creating RTL model for 'scanStrategy_Pipeline_SCAN_STRATEGY'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 525.344 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'scanStrategy' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'scanStrategy'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.15 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.15 seconds; current allocated memory: 526.949 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'loadZigzag_Pipeline_CHANNELS_ZIGZAG_LOOP' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SYN 201-210] Renamed object name 'loadZigzag_Pipeline_CHANNELS_ZIGZAG_LOOP_xf_codec_internal_coeffOrderLut_ROM_AUTO_1R' to 'loadZigzag_Pipeline_CHANNELS_ZIGZAG_LOOP_xf_codec_internal_coeffOrderLut_ROM_cud' due to the length limit 80
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'loadZigzag_Pipeline_CHANNELS_ZIGZAG_LOOP' pipeline 'CHANNELS_ZIGZAG_LOOP' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Finished creating RTL model for 'loadZigzag_Pipeline_CHANNELS_ZIGZAG_LOOP'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.05 seconds; current allocated memory: 527.586 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'loadZigzag' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Generating core module 'mux_2568_32_1_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'loadZigzag'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.08 seconds. CPU system time: 0 seconds. Elapsed time: 0.08 seconds; current allocated memory: 529.480 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'updateLehmer_Pipeline_INIT_TEMP_PING' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'updateLehmer_Pipeline_INIT_TEMP_PING'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.06 seconds. CPU system time: 0 seconds. Elapsed time: 0.06 seconds; current allocated memory: 530.492 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'initTemp' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'initTemp'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 531.035 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'lehmerCore_Pipeline_LEHMER_LOOP0' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'lehmerCore_Pipeline_LEHMER_LOOP0' pipeline 'LEHMER_LOOP0' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Finished creating RTL model for 'lehmerCore_Pipeline_LEHMER_LOOP0'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.04 seconds; current allocated memory: 531.723 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'lehmerCore_Pipeline_LEHMER_LOOP1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'lehmerCore_Pipeline_LEHMER_LOOP1' pipeline 'LEHMER_LOOP1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Finished creating RTL model for 'lehmerCore_Pipeline_LEHMER_LOOP1'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.06 seconds. CPU system time: 0 seconds. Elapsed time: 0.06 seconds; current allocated memory: 532.527 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'lehmerCore' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'lehmerCore'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.08 seconds. CPU system time: 0 seconds. Elapsed time: 0.08 seconds; current allocated memory: 533.516 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'updateCore' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'updateCore'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.09 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.1 seconds; current allocated memory: 534.426 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'updateLehmer' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'updateLehmer'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.09 seconds. CPU system time: 0 seconds. Elapsed time: 0.1 seconds; current allocated memory: 535.332 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'updateToken_Pipeline_TOKEN_LOOP' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'updateToken_Pipeline_TOKEN_LOOP' pipeline 'TOKEN_LOOP' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Finished creating RTL model for 'updateToken_Pipeline_TOKEN_LOOP'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.19 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.2 seconds; current allocated memory: 536.711 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'updateToken_Pipeline_TOKEN_LEFTOVER' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'updateToken_Pipeline_TOKEN_LEFTOVER' pipeline 'TOKEN_LEFTOVER' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Finished creating RTL model for 'updateToken_Pipeline_TOKEN_LEFTOVER'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.13 seconds. CPU system time: 0 seconds. Elapsed time: 0.12 seconds; current allocated memory: 537.652 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'updateToken' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'updateToken'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 538.539 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'hls_EncodeCoeffOrders' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'hls_EncodeCoeffOrders'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.16 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.17 seconds; current allocated memory: 540.316 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'top_order_tokenize' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'top_order_tokenize/used_orders' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'top_order_tokenize/orderStrm' to 'ap_fifo'.
INFO: [RTGEN 206-500] Setting interface mode on port 'top_order_tokenize/tokenStrm' to 'ap_fifo'.
INFO: [RTGEN 206-500] Setting interface mode on port 'top_order_tokenize/e_tokenStrm' to 'ap_fifo'.
INFO: [RTGEN 206-500] Setting interface mode on function 'top_order_tokenize' to 'ap_ctrl_hs'.
INFO: [RTGEN 206-100] Finished creating RTL model for 'top_order_tokenize'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.24 seconds. CPU system time: 0 seconds. Elapsed time: 0.24 seconds; current allocated memory: 541.180 MB.
INFO: [RTMG 210-279] Implementing memory 'top_order_tokenize_scanStrategy_Pipeline_SCAN_STRATEGY_xf_codec_internal_kStrategyOrder_ROM_AUTObkb' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'top_order_tokenize_loadZigzag_Pipeline_CHANNELS_ZIGZAG_LOOP_xf_codec_internal_coeffOrderLut_ROM_cud' using auto ROMs.
INFO: [RTMG 210-278] Implementing memory 'top_order_tokenize_updateLehmer_temp_V_RAM_2P_BRAM_1R1W_ram (RAM_2P_BRAM)' using block RAMs.
INFO: [RTMG 210-285] Implementing FIFO 'used_orders_c_U(top_order_tokenize_fifo_w13_d3_S)' using Shift Registers.
INFO: [RTMG 210-285] Implementing FIFO 'strategyStrm_U(top_order_tokenize_fifo_w8_d32_D)' using Distributed RAMs.
INFO: [RTMG 210-285] Implementing FIFO 'skipStrm_0_U(top_order_tokenize_fifo_w32_d32_D)' using Distributed RAMs.
INFO: [RTMG 210-285] Implementing FIFO 'skipStrm_1_U(top_order_tokenize_fifo_w32_d32_D)' using Distributed RAMs.
INFO: [RTMG 210-285] Implementing FIFO 'skipStrm_2_U(top_order_tokenize_fifo_w32_d32_D)' using Distributed RAMs.
INFO: [RTMG 210-285] Implementing FIFO 'num_strategy_V_c15_channel_U(top_order_tokenize_fifo_w32_d2_S)' using Shift Registers.
INFO: [RTMG 210-285] Implementing FIFO 'zigzagStrm_U(top_order_tokenize_fifo_w32_d128_D)' using Distributed RAMs.
INFO: [RTMG 210-285] Implementing FIFO 'num_strategy_V_c14_U(top_order_tokenize_fifo_w32_d2_S)' using Shift Registers.
INFO: [RTMG 210-285] Implementing FIFO 'endStrm_U(top_order_tokenize_fifo_w32_d32_D)' using Distributed RAMs.
INFO: [RTMG 210-285] Implementing FIFO 'lehmerStrm_U(top_order_tokenize_fifo_w32_d1024_D)' using Distributed RAMs.
INFO: [RTMG 210-285] Implementing FIFO 'num_strategy_V_c_U(top_order_tokenize_fifo_w32_d2_S)' using Shift Registers.
INFO: [RTMG 210-285] Implementing FIFO 'start_for_scanStrategy_U0_U(top_order_tokenize_start_for_scanStrategy_U0)' using Shift Registers.
INFO: [RTMG 210-285] Implementing FIFO 'start_for_updateLehmer_U0_U(top_order_tokenize_start_for_updateLehmer_U0)' using Shift Registers.
INFO: [RTMG 210-285] Implementing FIFO 'start_for_updateToken_U0_U(top_order_tokenize_start_for_updateToken_U0)' using Shift Registers.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.96 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.99 seconds; current allocated memory: 544.418 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.36 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.37 seconds; current allocated memory: 548.648 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for top_order_tokenize.
INFO: [VLOG 209-307] Generating Verilog RTL for top_order_tokenize.
INFO: [HLS 200-789] **** Estimated Fmax: 313.38 MHz
INFO: [HLS 200-111] Finished Command csynth_design CPU user time: 12.58 seconds. CPU system time: 0.69 seconds. Elapsed time: 12.82 seconds; current allocated memory: -669.641 MB.
INFO: [HLS 200-112] Total CPU user time: 14.45 seconds. Total CPU system time: 1.02 seconds. Total elapsed time: 14.22 seconds; peak allocated memory: 1.191 GB.
INFO: [Common 17-206] Exiting vitis_hls at Sat Feb  4 13:37:05 2023...
janethamrani@superlu:~/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize$ make run COSIM=1
Configured: settings.tcl
----
set XPART xcu280-fsvh2892-2L-e
set CSIM 0
set CSYNTH 1
set COSIM 1
set VIVADO_SYN 0
set VIVADO_IMPL 0
set XF_PROJ_ROOT "/home/janethamrani/Vitis_Libraries/codec"
set CUR_DIR "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize"
----
vitis_hls -f run_hls.tcl;

****** Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.2 (64-bit)
  **** SW Build 3367213 on Tue Oct 19 02:47:39 MDT 2021
  **** IP Build 3369179 on Thu Oct 21 08:25:16 MDT 2021
    ** Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.

source /tools/Xilinx/Vitis_HLS/2021.2/scripts/vitis_hls/hls.tcl -notrace
INFO: Applying HLS Y2K22 patch v1.2 for IP revision
INFO: [HLS 200-10] Running '/tools/Xilinx/Vitis_HLS/2021.2/bin/unwrapped/lnx64.o/vitis_hls'
INFO: [HLS 200-10] For user 'janethamrani' on host 'superlu' (Linux_x86_64 version 5.4.0-137-generic) on Sat Feb 04 13:38:26 EST 2023
INFO: [HLS 200-10] On os Ubuntu 18.04.6 LTS
INFO: [HLS 200-10] In directory '/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize'
Sourcing Tcl script 'run_hls.tcl'
INFO: [HLS 200-1510] Running: open_project -reset tokenize.prj 
INFO: [HLS 200-10] Opening and resetting project '/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj'.
WARNING: [HLS 200-40] No /home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/solution1.aps file found.
INFO: [HLS 200-1510] Running: add_files kernel/topOrderTokenize.cpp -cflags -I/home/janethamrani/Vitis_Libraries/codec/L1/include -I/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/kernel 
INFO: [HLS 200-10] Adding design file 'kernel/topOrderTokenize.cpp' to the project
INFO: [HLS 200-1510] Running: add_files -tb host/test_orderTokenize.cpp -cflags -I/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/kernel 
INFO: [HLS 200-10] Adding test bench file 'host/test_orderTokenize.cpp' to the project
INFO: [HLS 200-1510] Running: set_top top_order_tokenize 
INFO: [HLS 200-1510] Running: open_solution -reset solution1 
INFO: [HLS 200-10] Creating and opening solution '/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1'.
INFO: [HLS 200-10] Cleaning up the solution database.
WARNING: [HLS 200-40] No /home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/solution1.aps file found.
INFO: [HLS 200-1505] Using default flow_target 'vivado'
Resolution: For help on HLS 200-1505 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-1505.html
INFO: [HLS 200-1510] Running: set_part xcu280-fsvh2892-2L-e 
INFO: [HLS 200-1611] Setting target device to 'xcu280-fsvh2892-2L-e'
INFO: [HLS 200-1510] Running: create_clock -period 3.33 
INFO: [SYN 201-201] Setting up clock 'default' with a period of 3.33ns.
INFO: [HLS 200-1510] Running: csynth_design 
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 1.191 GB.
INFO: [HLS 200-10] Analyzing design file 'kernel/topOrderTokenize.cpp' ... 
WARNING: [HLS 207-5523] 'Resource pragma' is deprecated, use 'bind_op/bind_storage pragma' instead (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:365:9)
WARNING: [HLS 207-5523] 'Resource pragma' is deprecated, use 'bind_op/bind_storage pragma' instead (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:448:9)
WARNING: [HLS 207-5523] 'Resource pragma' is deprecated, use 'bind_op/bind_storage pragma' instead (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:454:9)
WARNING: [HLS 207-5523] 'Resource pragma' is deprecated, use 'bind_op/bind_storage pragma' instead (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:460:9)
WARNING: [HLS 207-5523] 'Resource pragma' is deprecated, use 'bind_op/bind_storage pragma' instead (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:466:9)
WARNING: [HLS 207-5523] 'Resource pragma' is deprecated, use 'bind_op/bind_storage pragma' instead (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:472:9)
WARNING: [HLS 214-113] Either use an argument of the function or declare the variable inside the dataflow loop body (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:476:28)
Resolution: For help on HLS 214-113 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=214-113.html
WARNING: [HLS 200-471] Dataflow form checks found 1 issue(s) in file kernel/topOrderTokenize.cpp
Resolution: For help on HLS 200-471 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-471.html
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 4.39 seconds. CPU system time: 0.3 seconds. Elapsed time: 4.14 seconds; current allocated memory: 283.973 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 214-284] Auto array partition mode is set into default.
WARNING: [HLS 214-172] Cannot apply disaggregate pragma/directive on stream object 'lehmerStrm' as it needs to be read/written in its entirety
WARNING: [HLS 214-172] Cannot apply disaggregate pragma/directive on stream object 'endStrm' as it needs to be read/written in its entirety
WARNING: [HLS 214-172] Cannot apply disaggregate pragma/directive on stream object 'zigzagStrm' as it needs to be read/written in its entirety
WARNING: [HLS 214-172] Cannot apply disaggregate pragma/directive on stream object 'strategyStrm' as it needs to be read/written in its entirety
INFO: [HLS 214-178] Inlining function 'xf::codec::internal::HybridUint::HybridUint(ap_uint<32>, ap_uint<32>, ap_uint<32>)' into 'xf::codec::internal::hls_CoeffOrderContext(ap_uint<32>)' (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:204:0)
INFO: [HLS 214-178] Inlining function 'xf::codec::internal::hls_Encode(xf::codec::internal::HybridUint&, ap_uint<32>, ap_uint<32>&, ap_uint<32>&, ap_uint<32>&)' into 'xf::codec::internal::hls_CoeffOrderContext(ap_uint<32>)' (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:204:0)
INFO: [HLS 214-248] Applying array_partition to 'temp': Complete partitioning on dimension 1. (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:364:17)
INFO: [HLS 214-248] Applying array_partition to 'skipStrm': Complete partitioning on dimension 1. (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:457:28)
INFO: [HLS 214-241] Aggregating fifo (hls::stream) variable 'skipStrm_0' with compact=bit mode in 32-bits (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:457:28)
INFO: [HLS 214-241] Aggregating fifo (hls::stream) variable 'skipStrm_1' with compact=bit mode in 32-bits (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:457:28)
INFO: [HLS 214-241] Aggregating fifo (hls::stream) variable 'skipStrm_2' with compact=bit mode in 32-bits (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:457:28)
INFO: [HLS 214-241] Aggregating fifo (hls::stream) variable 'e_tokenStrm' with compact=bit mode in 1-bits (kernel/topOrderTokenize.cpp:22:0)
INFO: [HLS 214-241] Aggregating fifo (hls::stream) variable 'tokenStrm' with compact=bit mode in 64-bits (kernel/topOrderTokenize.cpp:22:0)
INFO: [HLS 214-241] Aggregating fifo (hls::stream) variable 'orderStrm' with compact=bit mode in 32-bits (kernel/topOrderTokenize.cpp:22:0)
INFO: [HLS 214-270] Starting automatic array partition analysis...
INFO: [HLS 214-131] Inlining function '_llvm.fpga.pack.none.i8.s_struct.ap_uint<8>s' into 'xf::codec::internal::scanStrategy(unsigned short, ap_uint<32>&, hls::stream<ap_uint<8>, 0>&, hls::stream<ap_uint<32>, 0>*) (.1)' (/tools/Xilinx/Vitis_HLS/2021.2/common/technology/autopilot/hls_stream_39.h:173:9)
INFO: [HLS 214-131] Inlining function '_llvm.fpga.pack.none.i32.s_struct.ssdm_int<32, false>s' into '_llvm.fpga.unpack.bits.s_struct.ap_uint<32>s.i32.1'
INFO: [HLS 214-131] Inlining function '_llvm.fpga.unpack.bits.s_struct.ap_uint<32>s.i32.1' into 'xf::codec::internal::loadZigzag(ap_uint<32>&, hls::stream<ap_uint<8>, 0>&, hls::stream<ap_uint<32>, 0>&, hls::stream<ap_uint<32>, 0>&, hls::stream<ap_uint<32>, 0>&) (.1)' (/tools/Xilinx/Vitis_HLS/2021.2/common/technology/autopilot/hls_stream_39.h:144:9)
INFO: [HLS 214-131] Inlining function '_llvm.fpga.pack.none.i32.s_struct.ap_uint<32>s' into 'xf::codec::internal::loadZigzag(ap_uint<32>&, hls::stream<ap_uint<8>, 0>&, hls::stream<ap_uint<32>, 0>&, hls::stream<ap_uint<32>, 0>&, hls::stream<ap_uint<32>, 0>&) (.1)' (/tools/Xilinx/Vitis_HLS/2021.2/common/technology/autopilot/hls_stream_39.h:173:9)
INFO: [HLS 214-131] Inlining function '_llvm.fpga.pack.none.i32.s_struct.ap_uint<32>s' into 'xf::codec::internal::lehmerCore(ap_uint<32>, ap_uint<32>, ap_uint<16>*, ap_uint<32>&, hls::stream<ap_uint<32>, 0>&, hls::stream<ap_uint<32>, 0>&) (.36.43.50.57.77.85.1)' (/tools/Xilinx/Vitis_HLS/2021.2/common/technology/autopilot/hls_stream_39.h:173:9)
INFO: [HLS 214-131] Inlining function '_llvm.fpga.unpack.bits.s_struct.ap_uint<32>s.i32.1' into 'xf::codec::internal::updateLehmer(ap_uint<32>, hls::stream<ap_uint<32>, 0>&, hls::stream<ap_uint<32>, 0>&, hls::stream<ap_uint<32>, 0>&, hls::stream<ap_uint<32>, 0>&) (.1)' (/tools/Xilinx/Vitis_HLS/2021.2/common/technology/autopilot/hls_stream_39.h:144:9)
INFO: [HLS 214-131] Inlining function '_llvm.fpga.pack.none.i32.s_struct.ap_uint<32>s' into 'xf::codec::internal::updateLehmer(ap_uint<32>, hls::stream<ap_uint<32>, 0>&, hls::stream<ap_uint<32>, 0>&, hls::stream<ap_uint<32>, 0>&, hls::stream<ap_uint<32>, 0>&) (.1)' (/tools/Xilinx/Vitis_HLS/2021.2/common/technology/autopilot/hls_stream_39.h:173:9)
INFO: [HLS 214-131] Inlining function '_llvm.fpga.unpack.bits.s_struct.ap_uint<32>s.i32.1' into 'xf::codec::internal::updateToken(ap_uint<32>, hls::stream<ap_uint<32>, 0>&, hls::stream<ap_uint<32>, 0>&, hls::stream<ap_uint<32>, 0>&, hls::stream<ap_uint<64>, 0>&, hls::stream<bool, 0>&) (.1)' (/tools/Xilinx/Vitis_HLS/2021.2/common/technology/autopilot/hls_stream_39.h:144:9)
INFO: [HLS 214-131] Inlining function '_llvm.fpga.pack.none.i64.s_struct.ap_uint<64>s' into 'xf::codec::internal::updateToken(ap_uint<32>, hls::stream<ap_uint<32>, 0>&, hls::stream<ap_uint<32>, 0>&, hls::stream<ap_uint<32>, 0>&, hls::stream<ap_uint<64>, 0>&, hls::stream<bool, 0>&) (.1)' (/tools/Xilinx/Vitis_HLS/2021.2/common/technology/autopilot/hls_stream_39.h:173:9)
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 2.88 seconds. CPU system time: 0.23 seconds. Elapsed time: 3.12 seconds; current allocated memory: 284.719 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 284.719 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.06 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.08 seconds; current allocated memory: 299.844 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [XFORM 203-602] Inlining function 'xf::codec::internal::hls_CoeffOrderContext' into 'xf::codec::internal::updateToken' (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:403) automatically.
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.12 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.13 seconds; current allocated memory: 321.633 MB.
INFO: [XFORM 203-602] Inlining function 'xf::codec::internal::hls_CoeffOrderContext' into 'xf::codec::internal::updateToken' (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:403) automatically.
INFO: [XFORM 203-712] Applying dataflow to function 'xf::codec::internal::updateCore' (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:353:1), detected/extracted 2 process function(s): 
	 'xf::codec::internal::initTemp'
	 'xf::codec::internal::lehmerCore'.
INFO: [XFORM 203-712] Applying dataflow to function 'xf::codec::hls_EncodeCoeffOrders' (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:445:1), detected/extracted 6 process function(s): 
	 'entry_proc'
	 'xf::codec::hls_EncodeCoeffOrders_Block_.split1_proc'
	 'xf::codec::internal::scanStrategy'
	 'xf::codec::internal::loadZigzag'
	 'xf::codec::internal::updateLehmer'
	 'xf::codec::internal::updateToken'.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:402:25) in function 'xf::codec::internal::updateToken'... converting 4 basic blocks.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:402:25) to (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:410:13) in function 'xf::codec::internal::updateToken'... converting 4 basic blocks.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.23 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.25 seconds; current allocated memory: 365.152 MB.
WARNING: [HLS 200-960] Cannot flatten loop 'VITIS_LOOP_401_2' (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:402:25) in function 'xf::codec::internal::updateToken' more than one sub loop.
Resolution: For help on HLS 200-960 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-960.html
WARNING: [HLS 200-960] Cannot flatten loop 'VITIS_LOOP_398_1' (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:398:39) in function 'xf::codec::internal::updateToken' the outer loop is not a perfect loop.
Resolution: For help on HLS 200-960 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-960.html
INFO: [XFORM 203-541] Flattening a loop nest 'CHANNELS' (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:290:25) in function 'xf::codec::internal::loadZigzag'.
WARNING: [HLS 200-960] Cannot flatten loop 'VITIS_LOOP_270_1' (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:270:39) in function 'xf::codec::internal::loadZigzag' the outer loop is not a perfect loop because there is nontrivial logic before entering the inner loop.
Resolution: For help on HLS 200-960 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-960.html
WARNING: [HLS 200-960] Cannot flatten loop 'VITIS_LOOP_319_1' (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:319:40) in function 'xf::codec::internal::lehmerCore' more than one sub loop.
Resolution: For help on HLS 200-960 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-960.html
INFO: [HLS 200-472] Inferring partial write operation for 'temp' (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:307:10)
INFO: [HLS 200-472] Inferring partial write operation for 'temp.V.1' (/home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:370:13)
INFO: [HLS 200-472] Inferring partial write operation for 'temp' 
WARNING: [HLS 200-1614] Cosimulation may deadlock if process loadZigzag has a streamed top-level array input and has predecessor processes. If a deadlock occurs, please consider converting the streamed array into an hls::stream
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.17 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.19 seconds; current allocated memory: 518.211 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'top_order_tokenize' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'entry_proc' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.05 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.07 seconds; current allocated memory: 518.770 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0.01 seconds; current allocated memory: 518.789 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'scanStrategy_Pipeline_SCAN_STRATEGY' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'SCAN_STRATEGY'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 3, loop 'SCAN_STRATEGY'
WARNING: [HLS 200-871] Estimated clock period (2.47188ns) exceeds the target (target clock period: 3.33ns, clock uncertainty: 0.8991ns, effective delay budget: 2.4309ns).
Resolution: For help on HLS 200-871 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-871.html
WARNING: [HLS 200-1016] The critical path in module 'scanStrategy_Pipeline_SCAN_STRATEGY' consists of the following:	'load' operation ('order', /home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:222) on array 'xf_codec_internal_kStrategyOrder' [39]  (0.651 ns)
	'shl' operation ('shl_ln224', /home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:224) [42]  (0.557 ns)
	'and' operation ('and_ln225', /home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:225) [50]  (0 ns)
	'icmp' operation ('icmp_ln225', /home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:225) [51]  (0.64 ns)
	blocking operation 0.624 ns on control path)

Resolution: For help on HLS 200-1016 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-1016.html
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.05 seconds; current allocated memory: 520.672 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.03 seconds; current allocated memory: 520.672 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'scanStrategy' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.05 seconds; current allocated memory: 520.672 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.03 seconds; current allocated memory: 520.672 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'loadZigzag_Pipeline_CHANNELS_ZIGZAG_LOOP' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'CHANNELS_ZIGZAG_LOOP'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 5, loop 'CHANNELS_ZIGZAG_LOOP'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.05 seconds; current allocated memory: 520.746 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.02 seconds; current allocated memory: 520.746 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'loadZigzag' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 521.352 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.03 seconds; current allocated memory: 521.352 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'updateLehmer_Pipeline_INIT_TEMP_PING' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'INIT_TEMP_PING'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 1, loop 'INIT_TEMP_PING'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 521.617 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0.01 seconds; current allocated memory: 521.617 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'initTemp' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'INIT_TEMP_PONG'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 1, loop 'INIT_TEMP_PONG'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.02 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.02 seconds; current allocated memory: 521.848 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.02 seconds; current allocated memory: 521.848 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'lehmerCore_Pipeline_LEHMER_LOOP0' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'LEHMER_LOOP0'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 3, loop 'LEHMER_LOOP0'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.03 seconds; current allocated memory: 522.062 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.02 seconds; current allocated memory: 522.062 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'lehmerCore_Pipeline_LEHMER_LOOP1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'LEHMER_LOOP1'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 3, loop 'LEHMER_LOOP1'
WARNING: [HLS 200-871] Estimated clock period (3.191ns) exceeds the target (target clock period: 3.33ns, clock uncertainty: 0.8991ns, effective delay budget: 2.4309ns).
Resolution: For help on HLS 200-871 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-871.html
WARNING: [HLS 200-1016] The critical path in module 'lehmerCore_Pipeline_LEHMER_LOOP1' consists of the following:	'load' operation ('temp_load') on array 'temp' [26]  (1.2 ns)
	'select' operation ('reuse_select', /home/janethamrani/Vitis_Libraries/codec/L1/include/hls_EncodeCoeffOrders.hpp:338) [28]  (0 ns)
	'add' operation ('add_ln885') [29]  (0.785 ns)
	'store' operation ('temp_addr_write_ln885') of variable 'add_ln885' on array 'temp' [30]  (1.2 ns)

Resolution: For help on HLS 200-1016 see www.xilinx.com/cgi-bin/docs/rdoc?v=2021.2;t=hls+guidance;d=200-1016.html
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 522.309 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.02 seconds; current allocated memory: 522.309 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'lehmerCore' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 522.613 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 522.613 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'updateCore' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.05 seconds; current allocated memory: 522.613 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.03 seconds; current allocated memory: 522.613 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'updateLehmer' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.07 seconds. CPU system time: 0 seconds. Elapsed time: 0.07 seconds; current allocated memory: 523.137 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.06 seconds. CPU system time: 0 seconds. Elapsed time: 0.07 seconds; current allocated memory: 523.137 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'updateToken_Pipeline_TOKEN_LOOP' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'TOKEN_LOOP'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 4, loop 'TOKEN_LOOP'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.11 seconds. CPU system time: 0 seconds. Elapsed time: 0.1 seconds; current allocated memory: 523.582 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 523.582 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'updateToken_Pipeline_TOKEN_LEFTOVER' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'TOKEN_LEFTOVER'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 2, loop 'TOKEN_LEFTOVER'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.05 seconds; current allocated memory: 524.020 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.03 seconds; current allocated memory: 524.020 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'updateToken' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.05 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.05 seconds; current allocated memory: 524.250 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.06 seconds. CPU system time: 0 seconds. Elapsed time: 0.06 seconds; current allocated memory: 524.250 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'hls_EncodeCoeffOrders' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.1 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.09 seconds; current allocated memory: 524.250 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.09 seconds. CPU system time: 0 seconds. Elapsed time: 0.1 seconds; current allocated memory: 524.250 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'top_order_tokenize' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.17 seconds. CPU system time: 0 seconds. Elapsed time: 0.18 seconds; current allocated memory: 524.363 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.08 seconds. CPU system time: 0 seconds. Elapsed time: 0.07 seconds; current allocated memory: 524.371 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'entry_proc' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'entry_proc'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.17 seconds. CPU system time: 0 seconds. Elapsed time: 0.17 seconds; current allocated memory: 524.488 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'scanStrategy_Pipeline_SCAN_STRATEGY' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SYN 201-210] Renamed object name 'scanStrategy_Pipeline_SCAN_STRATEGY_xf_codec_internal_kStrategyOrder_ROM_AUTO_1R' to 'scanStrategy_Pipeline_SCAN_STRATEGY_xf_codec_internal_kStrategyOrder_ROM_AUTObkb' due to the length limit 80
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'scanStrategy_Pipeline_SCAN_STRATEGY' pipeline 'SCAN_STRATEGY' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Finished creating RTL model for 'scanStrategy_Pipeline_SCAN_STRATEGY'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.03 seconds; current allocated memory: 525.340 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'scanStrategy' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'scanStrategy'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.15 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.16 seconds; current allocated memory: 526.945 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'loadZigzag_Pipeline_CHANNELS_ZIGZAG_LOOP' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SYN 201-210] Renamed object name 'loadZigzag_Pipeline_CHANNELS_ZIGZAG_LOOP_xf_codec_internal_coeffOrderLut_ROM_AUTO_1R' to 'loadZigzag_Pipeline_CHANNELS_ZIGZAG_LOOP_xf_codec_internal_coeffOrderLut_ROM_cud' due to the length limit 80
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'loadZigzag_Pipeline_CHANNELS_ZIGZAG_LOOP' pipeline 'CHANNELS_ZIGZAG_LOOP' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Finished creating RTL model for 'loadZigzag_Pipeline_CHANNELS_ZIGZAG_LOOP'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.05 seconds; current allocated memory: 527.578 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'loadZigzag' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Generating core module 'mux_2568_32_1_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'loadZigzag'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.09 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.09 seconds; current allocated memory: 529.480 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'updateLehmer_Pipeline_INIT_TEMP_PING' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'updateLehmer_Pipeline_INIT_TEMP_PING'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.06 seconds. CPU system time: 0 seconds. Elapsed time: 0.06 seconds; current allocated memory: 530.488 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'initTemp' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'initTemp'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.03 seconds; current allocated memory: 531.031 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'lehmerCore_Pipeline_LEHMER_LOOP0' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'lehmerCore_Pipeline_LEHMER_LOOP0' pipeline 'LEHMER_LOOP0' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Finished creating RTL model for 'lehmerCore_Pipeline_LEHMER_LOOP0'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 531.719 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'lehmerCore_Pipeline_LEHMER_LOOP1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'lehmerCore_Pipeline_LEHMER_LOOP1' pipeline 'LEHMER_LOOP1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Finished creating RTL model for 'lehmerCore_Pipeline_LEHMER_LOOP1'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.06 seconds; current allocated memory: 532.523 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'lehmerCore' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'lehmerCore'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.07 seconds. CPU system time: 0 seconds. Elapsed time: 0.07 seconds; current allocated memory: 533.512 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'updateCore' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'updateCore'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.09 seconds. CPU system time: 0 seconds. Elapsed time: 0.09 seconds; current allocated memory: 534.422 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'updateLehmer' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'updateLehmer'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.09 seconds. CPU system time: 0 seconds. Elapsed time: 0.09 seconds; current allocated memory: 535.348 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'updateToken_Pipeline_TOKEN_LOOP' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'updateToken_Pipeline_TOKEN_LOOP' pipeline 'TOKEN_LOOP' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Finished creating RTL model for 'updateToken_Pipeline_TOKEN_LOOP'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.18 seconds. CPU system time: 0 seconds. Elapsed time: 0.19 seconds; current allocated memory: 536.727 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'updateToken_Pipeline_TOKEN_LEFTOVER' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'updateToken_Pipeline_TOKEN_LEFTOVER' pipeline 'TOKEN_LEFTOVER' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Finished creating RTL model for 'updateToken_Pipeline_TOKEN_LEFTOVER'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.12 seconds. CPU system time: 0 seconds. Elapsed time: 0.11 seconds; current allocated memory: 537.645 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'updateToken' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'updateToken'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.05 seconds; current allocated memory: 538.535 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'hls_EncodeCoeffOrders' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'hls_EncodeCoeffOrders'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.16 seconds. CPU system time: 0 seconds. Elapsed time: 0.16 seconds; current allocated memory: 540.316 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'top_order_tokenize' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'top_order_tokenize/used_orders' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'top_order_tokenize/orderStrm' to 'ap_fifo'.
INFO: [RTGEN 206-500] Setting interface mode on port 'top_order_tokenize/tokenStrm' to 'ap_fifo'.
INFO: [RTGEN 206-500] Setting interface mode on port 'top_order_tokenize/e_tokenStrm' to 'ap_fifo'.
INFO: [RTGEN 206-500] Setting interface mode on function 'top_order_tokenize' to 'ap_ctrl_hs'.
INFO: [RTGEN 206-100] Finished creating RTL model for 'top_order_tokenize'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.22 seconds. CPU system time: 0 seconds. Elapsed time: 0.22 seconds; current allocated memory: 541.180 MB.
INFO: [RTMG 210-279] Implementing memory 'top_order_tokenize_scanStrategy_Pipeline_SCAN_STRATEGY_xf_codec_internal_kStrategyOrder_ROM_AUTObkb' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'top_order_tokenize_loadZigzag_Pipeline_CHANNELS_ZIGZAG_LOOP_xf_codec_internal_coeffOrderLut_ROM_cud' using auto ROMs.
INFO: [RTMG 210-278] Implementing memory 'top_order_tokenize_updateLehmer_temp_V_RAM_2P_BRAM_1R1W_ram (RAM_2P_BRAM)' using block RAMs.
INFO: [RTMG 210-285] Implementing FIFO 'used_orders_c_U(top_order_tokenize_fifo_w13_d3_S)' using Shift Registers.
INFO: [RTMG 210-285] Implementing FIFO 'strategyStrm_U(top_order_tokenize_fifo_w8_d32_D)' using Distributed RAMs.
INFO: [RTMG 210-285] Implementing FIFO 'skipStrm_0_U(top_order_tokenize_fifo_w32_d32_D)' using Distributed RAMs.
INFO: [RTMG 210-285] Implementing FIFO 'skipStrm_1_U(top_order_tokenize_fifo_w32_d32_D)' using Distributed RAMs.
INFO: [RTMG 210-285] Implementing FIFO 'skipStrm_2_U(top_order_tokenize_fifo_w32_d32_D)' using Distributed RAMs.
INFO: [RTMG 210-285] Implementing FIFO 'num_strategy_V_c15_channel_U(top_order_tokenize_fifo_w32_d2_S)' using Shift Registers.
INFO: [RTMG 210-285] Implementing FIFO 'zigzagStrm_U(top_order_tokenize_fifo_w32_d128_D)' using Distributed RAMs.
INFO: [RTMG 210-285] Implementing FIFO 'num_strategy_V_c14_U(top_order_tokenize_fifo_w32_d2_S)' using Shift Registers.
INFO: [RTMG 210-285] Implementing FIFO 'endStrm_U(top_order_tokenize_fifo_w32_d32_D)' using Distributed RAMs.
INFO: [RTMG 210-285] Implementing FIFO 'lehmerStrm_U(top_order_tokenize_fifo_w32_d1024_D)' using Distributed RAMs.
INFO: [RTMG 210-285] Implementing FIFO 'num_strategy_V_c_U(top_order_tokenize_fifo_w32_d2_S)' using Shift Registers.
INFO: [RTMG 210-285] Implementing FIFO 'start_for_scanStrategy_U0_U(top_order_tokenize_start_for_scanStrategy_U0)' using Shift Registers.
INFO: [RTMG 210-285] Implementing FIFO 'start_for_updateLehmer_U0_U(top_order_tokenize_start_for_updateLehmer_U0)' using Shift Registers.
INFO: [RTMG 210-285] Implementing FIFO 'start_for_updateToken_U0_U(top_order_tokenize_start_for_updateToken_U0)' using Shift Registers.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.95 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.97 seconds; current allocated memory: 544.328 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.35 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.38 seconds; current allocated memory: 548.801 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for top_order_tokenize.
INFO: [VLOG 209-307] Generating Verilog RTL for top_order_tokenize.
INFO: [HLS 200-789] **** Estimated Fmax: 313.38 MHz
INFO: [HLS 200-111] Finished Command csynth_design CPU user time: 12.48 seconds. CPU system time: 0.74 seconds. Elapsed time: 12.68 seconds; current allocated memory: -669.641 MB.
INFO: [HLS 200-1510] Running: cosim_design -ldflags -pthread -std=c++11 -argv -i /home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/data/orders.txt -g /home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/data/goldens.txt 
INFO: [COSIM 212-47] Using XSIM for RTL simulation.
INFO: [COSIM 212-14] Instrumenting C test bench ...
make[1]: Entering directory '/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/wrapc'
   Build using "/tools/Xilinx/Vitis_HLS/2021.2/tps/lnx64/gcc-6.2.0/bin/g++"
   Compiling topOrderTokenize.cpp_pre.cpp.tb.cpp
   Compiling apatb_top_order_tokenize_util.cpp
   Compiling test_orderTokenize.cpp_pre.cpp.tb.cpp
   Compiling apatb_top_order_tokenize.cpp
   Compiling apatb_top_order_tokenize_ir.ll
   Generating cosim.tv.exe
make[1]: Leaving directory '/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/wrapc'
INFO: [COSIM 212-302] Starting C TB testing ... 

-----------------Order Tokenize----------------
INFO: num_orders is 960 
INFO: Tokenize CSim Pass!
INFO: [COSIM 212-333] Generating C post check test bench ...
INFO: [COSIM 212-12] Generating RTL test bench ...
INFO: [COSIM 212-1] *** C/RTL co-simulation file generation completed. ***
INFO: [COSIM 212-323] Starting verilog simulation. 
INFO: [COSIM 212-15] Starting XSIM ...
Vivado Simulator v2021.2
Copyright 1986-1999, 2001-2021 Xilinx, Inc. All Rights Reserved.
Running: /tools/Xilinx/Vivado/2021.2/bin/unwrapped/lnx64.o/xelab xil_defaultlib.apatb_top_order_tokenize_top glbl -Oenable_linking_all_libraries -prj top_order_tokenize.prj -L smartconnect_v1_0 -L axi_protocol_checker_v1_1_12 -L axi_protocol_checker_v1_1_13 -L axis_protocol_checker_v1_1_11 -L axis_protocol_checker_v1_1_12 -L xil_defaultlib -L unisims_ver -L xpm -L floating_point_v7_0_19 -L floating_point_v7_1_13 --lib ieee_proposed=./ieee_proposed -s top_order_tokenize 
Multi-threading is on. Using 14 slave threads.
WARNING: [XSIM 43-3431] One or more environment variables have been detected which affect the operation of the C compiler. These are typically not set in standard installations and are not tested by Xilinx, however they may be appropriate for your system, so the flow will attempt to continue.  If errors occur, try running xelab with the "-mt off -v 1" switches to see more information from the C compiler. The following environment variables have been detected:
    LIBRARY_PATH
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/glbl.v" into library work
INFO: [VRFC 10-311] analyzing module glbl
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/top_order_tokenize_updateToken_Pipeline_TOKEN_LOOP.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module top_order_tokenize_updateToken_Pipeline_TOKEN_LOOP
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/top_order_tokenize_hls_EncodeCoeffOrders.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module top_order_tokenize_hls_EncodeCoeffOrders
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/top_order_tokenize_fifo_w32_d32_D.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module top_order_tokenize_fifo_w32_d32_D_ram
INFO: [VRFC 10-311] analyzing module top_order_tokenize_fifo_w32_d32_D
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/AESL_autofifo_tokenStrm.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module AESL_autofifo_tokenStrm
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/top_order_tokenize_lehmerCore.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module top_order_tokenize_lehmerCore
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/top_order_tokenize_scanStrategy_Pipeline_SCAN_STRATEGY_xf_codec_internal_kStrategyOrder_ROM_AUTObkb.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module top_order_tokenize_scanStrategy_Pipeline_SCAN_STRATEGY_xf_codec_internal_kStrategyOrder_ROM_AUTObkb
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/top_order_tokenize_start_for_updateLehmer_U0.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module top_order_tokenize_start_for_updateLehmer_U0_shiftReg
INFO: [VRFC 10-311] analyzing module top_order_tokenize_start_for_updateLehmer_U0
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/top_order_tokenize_updateToken_Pipeline_TOKEN_LEFTOVER.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module top_order_tokenize_updateToken_Pipeline_TOKEN_LEFTOVER
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/top_order_tokenize_updateLehmer.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module top_order_tokenize_updateLehmer
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/top_order_tokenize_fifo_w32_d1024_D.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module top_order_tokenize_fifo_w32_d1024_D_ram
INFO: [VRFC 10-311] analyzing module top_order_tokenize_fifo_w32_d1024_D
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/AESL_deadlock_report_unit.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module AESL_deadlock_report_unit
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/AESL_autofifo_orderStrm.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module AESL_autofifo_orderStrm
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/top_order_tokenize_fifo_w13_d3_S.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module top_order_tokenize_fifo_w13_d3_S_shiftReg
INFO: [VRFC 10-311] analyzing module top_order_tokenize_fifo_w13_d3_S
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/AESL_autofifo_e_tokenStrm.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module AESL_autofifo_e_tokenStrm
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/top_order_tokenize_updateToken.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module top_order_tokenize_updateToken
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/top_order_tokenize_lehmerCore_Pipeline_LEHMER_LOOP1.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module top_order_tokenize_lehmerCore_Pipeline_LEHMER_LOOP1
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/top_order_tokenize_start_for_updateToken_U0.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module top_order_tokenize_start_for_updateToken_U0_shiftReg
INFO: [VRFC 10-311] analyzing module top_order_tokenize_start_for_updateToken_U0
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/top_order_tokenize.autotb.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module apatb_top_order_tokenize_top
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/AESL_deadlock_detector.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module AESL_deadlock_detector
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/top_order_tokenize_scanStrategy_Pipeline_SCAN_STRATEGY.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module top_order_tokenize_scanStrategy_Pipeline_SCAN_STRATEGY
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/top_order_tokenize_updateLehmer_temp_V_RAM_2P_BRAM_1R1W.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module top_order_tokenize_updateLehmer_temp_V_RAM_2P_BRAM_1R1W
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/top_order_tokenize.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module top_order_tokenize
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/top_order_tokenize_mux_2568_32_1_1.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module top_order_tokenize_mux_2568_32_1_1
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/top_order_tokenize_loadZigzag.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module top_order_tokenize_loadZigzag
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/top_order_tokenize_fifo_w32_d128_D.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module top_order_tokenize_fifo_w32_d128_D_ram
INFO: [VRFC 10-311] analyzing module top_order_tokenize_fifo_w32_d128_D
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/top_order_tokenize_flow_control_loop_pipe_sequential_init.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module top_order_tokenize_flow_control_loop_pipe_sequential_init
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/top_order_tokenize_updateLehmer_Pipeline_INIT_TEMP_PING.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module top_order_tokenize_updateLehmer_Pipeline_INIT_TEMP_PING
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/top_order_tokenize_loadZigzag_Pipeline_CHANNELS_ZIGZAG_LOOP.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module top_order_tokenize_loadZigzag_Pipeline_CHANNELS_ZIGZAG_LOOP
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/top_order_tokenize_updateCore.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module top_order_tokenize_updateCore
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/top_order_tokenize_fifo_w32_d2_S.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module top_order_tokenize_fifo_w32_d2_S_shiftReg
INFO: [VRFC 10-311] analyzing module top_order_tokenize_fifo_w32_d2_S
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/top_order_tokenize_flow_control_loop_pipe.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module top_order_tokenize_flow_control_loop_pipe
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/top_order_tokenize_entry_proc.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module top_order_tokenize_entry_proc
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/top_order_tokenize_lehmerCore_Pipeline_LEHMER_LOOP0.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module top_order_tokenize_lehmerCore_Pipeline_LEHMER_LOOP0
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/top_order_tokenize_start_for_scanStrategy_U0.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module top_order_tokenize_start_for_scanStrategy_U0_shiftReg
INFO: [VRFC 10-311] analyzing module top_order_tokenize_start_for_scanStrategy_U0
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/top_order_tokenize_loadZigzag_Pipeline_CHANNELS_ZIGZAG_LOOP_xf_codec_internal_coeffOrderLut_ROM_cud.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module top_order_tokenize_loadZigzag_Pipeline_CHANNELS_ZIGZAG_LOOP_xf_codec_internal_coeffOrderLut_ROM_cud
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/top_order_tokenize_initTemp.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module top_order_tokenize_initTemp
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/top_order_tokenize_fifo_w8_d32_D.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module top_order_tokenize_fifo_w8_d32_D_ram
INFO: [VRFC 10-311] analyzing module top_order_tokenize_fifo_w8_d32_D
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/top_order_tokenize_scanStrategy.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module top_order_tokenize_scanStrategy
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/AESL_deadlock_detection_unit.v" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module AESL_deadlock_detect_unit
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/dataflow_monitor.sv" into library xil_defaultlib
INFO: [VRFC 10-311] analyzing module dataflow_monitor
Starting static elaboration
Pass Through NonSizing Optimizer
Completed static elaboration
Starting simulation data flow analysis
Completed simulation data flow analysis
Time Resolution for simulation is 1ps
Compiling package xil_defaultlib.$unit_dataflow_monitor_sv
Compiling module xil_defaultlib.top_order_tokenize_entry_proc
Compiling module xil_defaultlib.top_order_tokenize_scanStrategy_...
Compiling module xil_defaultlib.top_order_tokenize_flow_control_...
Compiling module xil_defaultlib.top_order_tokenize_scanStrategy_...
Compiling module xil_defaultlib.top_order_tokenize_scanStrategy
Compiling module xil_defaultlib.top_order_tokenize_loadZigzag_Pi...
Compiling module xil_defaultlib.top_order_tokenize_loadZigzag_Pi...
Compiling module xil_defaultlib.top_order_tokenize_mux_2568_32_1...
Compiling module xil_defaultlib.top_order_tokenize_loadZigzag
Compiling module xil_defaultlib.top_order_tokenize_updateLehmer_...
Compiling module xil_defaultlib.top_order_tokenize_updateLehmer_...
Compiling module xil_defaultlib.top_order_tokenize_flow_control_...
Compiling module xil_defaultlib.top_order_tokenize_initTemp
Compiling module xil_defaultlib.top_order_tokenize_lehmerCore_Pi...
Compiling module xil_defaultlib.top_order_tokenize_lehmerCore_Pi...
Compiling module xil_defaultlib.top_order_tokenize_lehmerCore
Compiling module xil_defaultlib.top_order_tokenize_updateCore
Compiling module xil_defaultlib.top_order_tokenize_updateLehmer
Compiling module xil_defaultlib.top_order_tokenize_updateToken_P...
Compiling module xil_defaultlib.top_order_tokenize_updateToken_P...
Compiling module xil_defaultlib.top_order_tokenize_updateToken
Compiling module xil_defaultlib.top_order_tokenize_fifo_w13_d3_S...
Compiling module xil_defaultlib.top_order_tokenize_fifo_w13_d3_S
Compiling module xil_defaultlib.top_order_tokenize_fifo_w8_d32_D...
Compiling module xil_defaultlib.top_order_tokenize_fifo_w8_d32_D
Compiling module xil_defaultlib.top_order_tokenize_fifo_w32_d32_...
Compiling module xil_defaultlib.top_order_tokenize_fifo_w32_d32_...
Compiling module xil_defaultlib.top_order_tokenize_fifo_w32_d2_S...
Compiling module xil_defaultlib.top_order_tokenize_fifo_w32_d2_S
Compiling module xil_defaultlib.top_order_tokenize_fifo_w32_d128...
Compiling module xil_defaultlib.top_order_tokenize_fifo_w32_d128...
Compiling module xil_defaultlib.top_order_tokenize_fifo_w32_d102...
Compiling module xil_defaultlib.top_order_tokenize_fifo_w32_d102...
Compiling module xil_defaultlib.top_order_tokenize_start_for_sca...
Compiling module xil_defaultlib.top_order_tokenize_start_for_sca...
Compiling module xil_defaultlib.top_order_tokenize_start_for_upd...
Compiling module xil_defaultlib.top_order_tokenize_start_for_upd...
Compiling module xil_defaultlib.top_order_tokenize_start_for_upd...
Compiling module xil_defaultlib.top_order_tokenize_start_for_upd...
Compiling module xil_defaultlib.top_order_tokenize_hls_EncodeCoe...
Compiling module xil_defaultlib.top_order_tokenize
Compiling module xil_defaultlib.AESL_autofifo_orderStrm
Compiling module xil_defaultlib.AESL_autofifo_tokenStrm
Compiling module xil_defaultlib.AESL_autofifo_e_tokenStrm
Compiling module xil_defaultlib.AESL_deadlock_detect_unit(PROC_N...
Compiling module xil_defaultlib.AESL_deadlock_detect_unit(PROC_N...
Compiling module xil_defaultlib.AESL_deadlock_detect_unit(PROC_N...
Compiling module xil_defaultlib.AESL_deadlock_detect_unit(PROC_N...
Compiling module xil_defaultlib.AESL_deadlock_detect_unit(PROC_N...
Compiling module xil_defaultlib.AESL_deadlock_detect_unit(PROC_N...
Compiling module xil_defaultlib.AESL_deadlock_detect_unit(PROC_N...
Compiling module xil_defaultlib.AESL_deadlock_report_unit(PROC_N...
Compiling module xil_defaultlib.AESL_deadlock_detector_1
Compiling module xil_defaultlib.df_fifo_intf
Compiling module xil_defaultlib.df_process_intf
Compiling module xil_defaultlib.nodf_module_intf
Compiling module xil_defaultlib.seq_loop_intf(FSM_WIDTH=5)
Compiling module xil_defaultlib.seq_loop_intf(FSM_WIDTH=8)
Compiling module xil_defaultlib.seq_loop_intf(FSM_WIDTH=7)
Compiling module xil_defaultlib.seq_loop_intf(FSM_WIDTH=11)
Compiling module xil_defaultlib.upc_loop_intf(FSM_WIDTH=1)
Compiling module xil_defaultlib.dataflow_monitor_1
Compiling module xil_defaultlib.apatb_top_order_tokenize_top
Compiling module work.glbl
Built simulation snapshot top_order_tokenize

****** xsim v2021.2 (64-bit)
  **** SW Build 3367213 on Tue Oct 19 02:47:39 MDT 2021
  **** IP Build 3369179 on Thu Oct 21 08:25:16 MDT 2021
    ** Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.

source xsim.dir/top_order_tokenize/xsim_script.tcl
# xsim {top_order_tokenize} -autoloadwcfg -tclbatch {top_order_tokenize.tcl}
Time resolution is 1 ps
source top_order_tokenize.tcl
## run all
////////////////////////////////////////////////////////////////////////////////////
// Inter-Transaction Progress: Completed Transaction / Total Transaction
// Intra-Transaction Progress: Measured Latency / Latency Estimation * 100%
//
// RTL Simulation : "Inter-Transaction Progress" ["Intra-Transaction Progress"] @ "Simulation Time"
////////////////////////////////////////////////////////////////////////////////////
// RTL Simulation : 0 / 1 [n/a] @ "109000"
// RTL Simulation : 1 / 1 [n/a] @ "58432000"
////////////////////////////////////////////////////////////////////////////////////
$finish called at time : 58451670 ps : File "/home/janethamrani/Vitis_Libraries/codec/L1/tests/jxlEnc/order_tokenize/tokenize.prj/solution1/sim/verilog/top_order_tokenize.autotb.v" Line 386
## quit
INFO: [Common 17-206] Exiting xsim at Sat Feb  4 13:39:02 2023...
INFO: [COSIM 212-316] Starting C post checking ...

-----------------Order Tokenize----------------
INFO: num_orders is 960 
INFO: Tokenize CSim Pass!
INFO: [COSIM 212-1000] *** C/RTL co-simulation finished: PASS ***
INFO: [COSIM 212-211] II is measurable only when transaction number is greater than 1 in RTL simulation. Otherwise, they will be marked as all NA. If user wants to calculate them, please make sure there are at least 2 transactions in RTL simulation.
INFO: [HLS 200-111] Finished Command cosim_design CPU user time: 26.94 seconds. CPU system time: 1.74 seconds. Elapsed time: 23.08 seconds; current allocated memory: 10.758 MB.
INFO: [HLS 200-112] Total CPU user time: 41.35 seconds. Total CPU system time: 2.82 seconds. Total elapsed time: 37.19 seconds; peak allocated memory: 1.191 GB.
INFO: [Common 17-206] Exiting vitis_hls at Sat Feb  4 13:39:03 2023...

```

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
### Kernel Estimate
```sh
===============================================================================
Version:    v++ v2021.2 (64-bit)
Build:      SW Build 3363252 on 2021-10-14-04:41:01
Copyright:  Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
Created:    Sun Feb  5 10:35:14 2023
===============================================================================

-------------------------------------------------------------------------------
Design Name:             JxlEnc_lossy_enc_compute
Target Device:           xilinx:u280:xdma:201920.3
Target Clock:            300.000000MHz
Total number of kernels: 1
-------------------------------------------------------------------------------

Kernel Summary
Kernel Name               Type  Target              OpenCL Library            Compute Units
------------------------  ----  ------------------  ------------------------  -------------
JxlEnc_lossy_enc_compute  c     fpga0:OCL_REGION_0  JxlEnc_lossy_enc_compute  1


-------------------------------------------------------------------------------
OpenCL Binary:     JxlEnc_lossy_enc_compute
Kernels mapped to: clc_region

Timing Information (MHz)
Compute Unit                Kernel Name               Module Name                                                                                         Target Frequency  Estimated Frequency
--------------------------  ------------------------  --------------------------------------------------------------------------------------------------  ----------------  -------------------
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  JxlEnc_lossy_enc_compute_Pipeline_VITIS_LOOP_5346_1_VITIS_LOOP_5347_2                               300.300293        424.448242
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  entry_proc106                                                                                       300.300293        821.692688
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_lossy_enc_compute_dataflow_Block_split13_proc                                                   300.300293        737.463135
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetSourceSize_Pipeline_LOOP_0_LOOP_1                                                                300.300293        445.831482
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetSourceSize                                                                                       300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  load_rqf_mask_Pipeline_LOOP_2                                                                       300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  load_rqf_mask                                                                                       300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  load_dct8_pixel_Pipeline_loop_load_dct8_pixel_VITIS_LOOP_4449_1                                     300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  load_dct8_pixel                                                                                     300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  load_dct16_pixel_Pipeline_loop_load_dct16_pixel_VITIS_LOOP_4467_1                                   300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  load_dct16_pixel                                                                                    300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  load_dct32_pixel_Pipeline_loop_load_dct32_pixel_VITIS_LOOP_4485_1                                   300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  load_dct32_pixel                                                                                    300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetRectSizeDCT_Pipeline_VITIS_LOOP_7188_1                                                           300.300293        821.692688
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetRectSizeDCT                                                                                      300.300293        479.616302
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  entry_proc104                                                                                       300.300293        821.692688
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  load_b64                                                                                            300.300293        475.737396
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_DCT1DImpl_8x8_1                                                                                 300.300293        426.985474
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_TransposeBlock8_1                                                                               300.300293        430.663208
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_DCT1DImpl_8x8                                                                                   300.300293        426.985474
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_TransposeBlock8                                                                                 300.300293        430.663208
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  split_ac_dc_dct8_Pipeline_VITIS_LOOP_5842_1_VITIS_LOOP_5843_2                                       300.300293        418.060211
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  split_ac_dc_dct8                                                                                    300.300293        418.060211
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  feed_ac_dct8_Pipeline_hls_feed_b64_VITIS_LOOP_5864_1                                                300.300293        418.585205
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  feed_ac_dct8                                                                                        300.300293        418.585205
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  feed_dc_dct8_Pipeline_hls_feed_b64_VITIS_LOOP_5888_1                                                300.300293        475.737396
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  feed_dc_dct8                                                                                        300.300293        475.737396
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_in_loop_VITIS_LOOP_5952_4                                                                  300.300293        418.060211
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc                                                                           300.300293        418.060211
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc66                                                                         300.300293        418.060211
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc67                                                                         300.300293        418.060211
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc72                                                                         300.300293        418.060211
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc73                                                                         300.300293        418.060211
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_dct8x8_module                                                                                   300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  entry_proc103                                                                                       300.300293        821.692688
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dct16_test_load                                                                                     300.300293        497.512451
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  transposeDct16                                                                                      300.300293        418.060211
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_dct16_block_1                                                                                   300.300293        376.931763
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  transposeDct16_scale_1                                                                              300.300293        430.663208
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_dct16_block                                                                                     300.300293        376.931763
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  transposeDct16_scale                                                                                300.300293        430.663208
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dct16_ac_dc_split_Pipeline_VITIS_LOOP_6393_1                                                        300.300293        500.500488
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dct16_ac_dc_split                                                                                   300.300293        500.500488
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dct16_ac_writeout_Pipeline_VITIS_LOOP_6358_1                                                        300.300293        418.585205
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dct16_ac_writeout                                                                                   300.300293        418.585205
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_ReinterpretingIDCT16                                                                            300.300293        426.985474
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dct16_dc_writeout_Pipeline_VITIS_LOOP_6379_1                                                        300.300293        418.585205
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dct16_dc_writeout                                                                                   300.300293        418.585205
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_in_loop_VITIS_LOOP_6462_5                                                                  300.300293        376.931763
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc63                                                                         300.300293        376.931763
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc64                                                                         300.300293        376.931763
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc69                                                                         300.300293        376.931763
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc70                                                                         300.300293        376.931763
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc75                                                                         300.300293        376.931763
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_dct16x16_module                                                                                 300.300293        376.931763
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  entry_proc                                                                                          300.300293        821.692688
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  load_dct32                                                                                          300.300293        498.753082
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_DCT1DImpl_32_1                                                                                  300.300293        341.880341
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  scaled_dct32                                                                                        300.300293        430.663208
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  transpose_dct32                                                                                     300.300293        416.666656
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_DCT1DImpl_32                                                                                    300.300293        341.880341
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  transpose_scaled_dct32                                                                              300.300293        430.663208
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  split_ac_dc_dct32                                                                                   300.300293        416.666656
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  feed_dct32_ac_Pipeline_loop_feed_dct32_ac                                                           300.300293        417.885529
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  feed_dct32_ac                                                                                       300.300293        417.885529
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_idct32_scale_2d                                                                                 300.300293        430.663208
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_IDCT1D_32_1                                                                                     300.300293        426.985474
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_idct_transpose4x4                                                                               300.300293        443.06601
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_IDCT1D_32                                                                                       300.300293        426.985474
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  feed_dct32_dc_Pipeline_loop_feed_dct32_dc                                                           300.300293        528.54126
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  feed_dct32_dc                                                                                       300.300293        528.54126
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_in_loop_VITIS_LOOP_7127_4                                                                  300.300293        341.880341
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc62                                                                         300.300293        341.880341
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc65                                                                         300.300293        341.880341
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc68                                                                         300.300293        341.880341
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc71                                                                         300.300293        341.880341
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc74                                                                         300.300293        341.880341
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_dct32x32_module                                                                                 300.300293        341.880341
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_lossy_enc_compute_dataflow_Block_split1326_proc                                                 300.300293        426.985474
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetACSSize_Pipeline_LOOP_0_LOOP_1                                                                   300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetACSSize                                                                                          300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  DupQuantAndMask_Pipeline_DUP_1_DUP_2                                                                300.300293        430.663208
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  DupQuantAndMask                                                                                     300.300293        430.663208
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  DupDCT_1_Pipeline_LOOP_1_LOOP_3_LOOP_4                                                              300.300293        419.111511
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  DupDCT_1_s                                                                                          300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  DupDCT_2_Pipeline_LOOP_3_LOOP_4                                                                     300.300293        419.111511
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  DupDCT_2_s                                                                                          300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  DupDCT_4_Pipeline_LOOP_3_LOOP_4                                                                     300.300293        419.111511
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  DupDCT_4_s                                                                                          300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetQAndMask_8_Pipeline_LOOP_1_LOOP_2                                                                300.300293        430.663208
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetQAndMask_8                                                                                       300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy1_1_Pipeline_LOOP_1_LOOP_3_LOOP_4                                                     300.300293        411.861633
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy1_1_s                                                                                 300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy3_1_Pipeline_1                                                                        300.300293        959.692871
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy3_1_Pipeline_VITIS_LOOP_7821_1                                                        300.300293        426.985474
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy3_1_s                                                                                 300.300293        376.931763
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetQAndMask_16_32_2_Pipeline_LOOP_2                                                                 300.300293        418.585205
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetQAndMask_16_32_2_Pipeline_LOOP_6                                                                 300.300293        426.985474
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetQAndMask_16_32_2_Pipeline_LOOP_7                                                                 300.300293        435.54007
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetQAndMask_16_32_2_s                                                                               300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy1_2_Pipeline_LOOP_3_LOOP_4                                                            300.300293        424.088196
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy1_2_s                                                                                 300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy3_2_Pipeline_1                                                                        300.300293        959.692871
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy3_2_Pipeline_VITIS_LOOP_7821_1                                                        300.300293        426.985474
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy3_2_s                                                                                 300.300293        379.794922
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetQAndMask_16_32_4_Pipeline_LOOP_2                                                                 300.300293        418.585205
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetQAndMask_16_32_4_Pipeline_LOOP_6                                                                 300.300293        426.985474
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetQAndMask_16_32_4_Pipeline_LOOP_7                                                                 300.300293        435.54007
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetQAndMask_16_32_4_s                                                                               300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy1_4_Pipeline_LOOP_3_LOOP_4                                                            300.300293        424.088196
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy1_4_s                                                                                 300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy3_4_Pipeline_1                                                                        300.300293        959.692871
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy3_4_Pipeline_VITIS_LOOP_7821_1                                                        300.300293        426.985474
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy3_4_s                                                                                 300.300293        379.794922
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  CompareEntropy_Pipeline_1                                                                           300.300293        748.502991
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  CompareEntropy                                                                                      300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  BufferN_1_Pipeline_LOOP_1_LOOP_3_LOOP_4_LOOP_5                                                      300.300293        449.640289
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  BufferN_1_s                                                                                         300.300293        449.640289
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  BufferN_2_Pipeline_LOOP_1_LOOP_3_LOOP_4_LOOP_5                                                      300.300293        425.713074
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  BufferN_2_s                                                                                         300.300293        425.713074
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  BufferN_4_Pipeline_LOOP_1_LOOP_3_LOOP_4_LOOP_5                                                      300.300293        449.438232
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  BufferN_4_s                                                                                         300.300293        449.438232
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  Reorder_Pipeline_LOOP_10_LOOP_11_LOOP_12                                                            300.300293        441.501068
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  Reorder_Pipeline_LOOP_5_LOOP_6_LOOP_7                                                               300.300293        441.501068
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  Reorder_Pipeline_LOOP_13_LOOP_14_LOOP_15                                                            300.300293        413.907318
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  Reorder                                                                                             300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  SetQuantField_Pipeline_LOOP_1_LOOP_2                                                                300.300293        414.421875
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  SetQuantField_Pipeline_LOOP_5_LOOP_6                                                                300.300293        428.082184
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  SetQuantField                                                                                       300.300293        414.421875
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_CFLComputeTile_Pipeline_VITIS_LOOP_4959_3                                                       300.300293        413.736023
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_CFLComputeTile                                                                                  300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_ComputeCoefficients_Pipeline_VITIS_LOOP_5111_3                                                  300.300293        376.931763
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_ComputeCoefficients                                                                             300.300293        376.931763
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  count_numzeros_Pipeline_VITIS_LOOP_5389_2_VITIS_LOOP_5390_3                                         300.300293        439.174347
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  count_numzeros                                                                                      300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetDCSize_Pipeline_LOOP_0_LOOP_1                                                                    300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetDCSize                                                                                           300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dc_8x8_writeout_Pipeline_VITIS_LOOP_4595_2_VITIS_LOOP_4596_3_VITIS_LOOP_4597_4                      300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dc_8x8_writeout                                                                                     300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dc_16x16_writeout_Pipeline_VITIS_LOOP_4648_3_VITIS_LOOP_4650_5_VITIS_LOOP_4651_6_VITIS_LOOP_4652_7  300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dc_16x16_writeout                                                                                   300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dc_32x32_writeout_Pipeline_VITIS_LOOP_4718_3_VITIS_LOOP_4720_5_VITIS_LOOP_4721_6_VITIS_LOOP_4722_7  300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dc_32x32_writeout                                                                                   300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  cfl_writeout_Pipeline_VITIS_LOOP_4825_1                                                             300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  cfl_writeout                                                                                        300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ac_coeff_writeout_Pipeline_VITIS_LOOP_4560_1                                                        300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ac_coeff_writeout                                                                                   300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  acs_rqf_writeout_Pipeline_LOOP_6                                                                    300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  acs_rqf_writeout                                                                                    300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_lossy_enc_compute_dataflow                                                                      300.300293        341.880341
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  entry_proc105                                                                                       300.300293        821.692688
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  load_nz2strm_Pipeline_VITIS_LOOP_5459_2_VITIS_LOOP_5460_3                                           300.300293        300.029999
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  load_nz2strm                                                                                        300.300293        300.029999
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_sort_8_Pipeline_VITIS_LOOP_5279_2                                                               300.300293        258.933197
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_sort_8_s                                                                                        300.300293        258.933197
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_sort_top                                                                                        300.300293        258.933197
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  order_writeout_Pipeline_VITIS_LOOP_5519_2_VITIS_LOOP_5520_3                                         300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  order_writeout                                                                                      300.300293        411.015198
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  order_finalize_dataflow                                                                             300.300293        258.933197
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  JxlEnc_lossy_enc_compute                                                                            300.300293        258.933197

Latency Information
Compute Unit                Kernel Name               Module Name                                                                                         Start Interval    Best (cycles)  Avg (cycles)  Worst (cycles)  Best (absolute)  Avg (absolute)  Worst (absolute)
--------------------------  ------------------------  --------------------------------------------------------------------------------------------------  ----------------  -------------  ------------  --------------  ---------------  --------------  ----------------
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  JxlEnc_lossy_enc_compute_Pipeline_VITIS_LOOP_5346_1_VITIS_LOOP_5347_2                               973               973            973           973             3.243 us         3.243 us        3.243 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  entry_proc106                                                                                       0                 0              0             0               0 ns             0 ns            0 ns
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_lossy_enc_compute_dataflow_Block_split13_proc                                                   4                 4              4             4               13.332 ns        13.332 ns       13.332 ns
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetSourceSize_Pipeline_LOOP_0_LOOP_1                                                                3 ~ 524291        3              undef         524291          9.999 ns         undef           1.747 ms
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetSourceSize                                                                                       8 ~ 524296        8              undef         524296          26.664 ns        undef           1.747 ms
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  load_rqf_mask_Pipeline_LOOP_2                                                                       42 ~ -1           42             undef         undef           0.140 us         undef           undef
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  load_rqf_mask                                                                                       undef             undef          undef         undef           undef            undef           undef
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  load_dct8_pixel_Pipeline_loop_load_dct8_pixel_VITIS_LOOP_4449_1                                     undef             undef          undef         undef           undef            undef           undef
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  load_dct8_pixel                                                                                     undef             undef          undef         undef           undef            undef           undef
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  load_dct16_pixel_Pipeline_loop_load_dct16_pixel_VITIS_LOOP_4467_1                                   undef             undef          undef         undef           undef            undef           undef
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  load_dct16_pixel                                                                                    undef             undef          undef         undef           undef            undef           undef
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  load_dct32_pixel_Pipeline_loop_load_dct32_pixel_VITIS_LOOP_4485_1                                   undef             undef          undef         undef           undef            undef           undef
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  load_dct32_pixel                                                                                    undef             undef          undef         undef           undef            undef           undef
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetRectSizeDCT_Pipeline_VITIS_LOOP_7188_1                                                           194               194            194           194             0.647 us         0.647 us        0.647 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetRectSizeDCT                                                                                      5 ~ 103284741     5              undef         103284741       16.665 ns        undef           0.344 sec
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  entry_proc104                                                                                       0                 0              0             0               0 ns             0 ns            0 ns
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  load_b64                                                                                            66                66             66            66              0.220 us         0.220 us        0.220 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_DCT1DImpl_8x8_1                                                                                 89                89             89            89              0.297 us         0.297 us        0.297 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_TransposeBlock8_1                                                                               72                72             72            72              0.240 us         0.240 us        0.240 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_DCT1DImpl_8x8                                                                                   89                89             89            89              0.297 us         0.297 us        0.297 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_TransposeBlock8                                                                                 72                72             72            72              0.240 us         0.240 us        0.240 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  split_ac_dc_dct8_Pipeline_VITIS_LOOP_5842_1_VITIS_LOOP_5843_2                                       67                67             67            67              0.223 us         0.223 us        0.223 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  split_ac_dc_dct8                                                                                    70                70             70            70              0.233 us         0.233 us        0.233 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  feed_ac_dct8_Pipeline_hls_feed_b64_VITIS_LOOP_5864_1                                                68                68             68            68              0.227 us         0.227 us        0.227 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  feed_ac_dct8                                                                                        70                70             70            70              0.233 us         0.233 us        0.233 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  feed_dc_dct8_Pipeline_hls_feed_b64_VITIS_LOOP_5888_1                                                68                68             68            68              0.227 us         0.227 us        0.227 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  feed_dc_dct8                                                                                        70                70             70            70              0.233 us         0.233 us        0.233 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_in_loop_VITIS_LOOP_5952_4                                                                  90                534            534           534             1.780 us         1.780 us        1.780 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc                                                                           716               716            716           716             2.386 us         2.386 us        2.386 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc66                                                                         5737              5737           5737          5737            19.121 us        19.121 us       19.121 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc67                                                                         45905             45905          45905         45905           0.153 ms         0.153 ms        0.153 ms
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc72                                                                         undef             undef          undef         undef           undef            undef           undef
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc73                                                                         undef             undef          undef         undef           undef            undef           undef
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_dct8x8_module                                                                                   undef             undef          undef         undef           undef            undef           undef
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  entry_proc103                                                                                       0                 0              0             0               0 ns             0 ns            0 ns
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dct16_test_load                                                                                     258               258            258           258             0.860 us         0.860 us        0.860 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  transposeDct16                                                                                      259               259            259           259             0.863 us         0.863 us        0.863 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_dct16_block_1                                                                                   335               335            335           335             1.117 us         1.117 us        1.117 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  transposeDct16_scale_1                                                                              264               264            264           264             0.880 us         0.880 us        0.880 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_dct16_block                                                                                     335               335            335           335             1.117 us         1.117 us        1.117 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  transposeDct16_scale                                                                                270               270            270           270             0.900 us         0.900 us        0.900 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dct16_ac_dc_split_Pipeline_VITIS_LOOP_6393_1                                                        259               259            259           259             0.863 us         0.863 us        0.863 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dct16_ac_dc_split                                                                                   263               263            263           263             0.877 us         0.877 us        0.877 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dct16_ac_writeout_Pipeline_VITIS_LOOP_6358_1                                                        260               260            260           260             0.867 us         0.867 us        0.867 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dct16_ac_writeout                                                                                   262               262            262           262             0.873 us         0.873 us        0.873 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_ReinterpretingIDCT16                                                                            26                26             26            26              86.658 ns        86.658 ns       86.658 ns
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dct16_dc_writeout_Pipeline_VITIS_LOOP_6379_1                                                        8                 8              8             8               26.664 ns        26.664 ns       26.664 ns
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dct16_dc_writeout                                                                                   10                10             10            10              33.330 ns        33.330 ns       33.330 ns
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_in_loop_VITIS_LOOP_6462_5                                                                  336               2253           2253          2253            7.509 us         7.509 us        7.509 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc63                                                                         2927              2927           2927          2927            9.756 us         9.756 us        9.756 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc64                                                                         11713             11713          11713         11713           39.039 us        39.039 us       39.039 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc69                                                                         46857             46857          46857         46857           0.156 ms         0.156 ms        0.156 ms
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc70                                                                         undef             undef          undef         undef           undef            undef           undef
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc75                                                                         undef             undef          undef         undef           undef            undef           undef
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_dct16x16_module                                                                                 undef             undef          undef         undef           undef            undef           undef
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  entry_proc                                                                                          0                 0              0             0               0 ns             0 ns            0 ns
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  load_dct32                                                                                          1026              1026           1026          1026            3.420 us         3.420 us        3.420 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_DCT1DImpl_32_1                                                                                  1135              1135           1135          1135            3.783 us         3.783 us        3.783 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  scaled_dct32                                                                                        1032              1032           1032          1032            3.440 us         3.440 us        3.440 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  transpose_dct32                                                                                     1027              1027           1027          1027            3.423 us         3.423 us        3.423 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_DCT1DImpl_32                                                                                    1135              1135           1135          1135            3.783 us         3.783 us        3.783 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  transpose_scaled_dct32                                                                              1032              1032           1032          1032            3.440 us         3.440 us        3.440 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  split_ac_dc_dct32                                                                                   1027              1027           1027          1027            3.423 us         3.423 us        3.423 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  feed_dct32_ac_Pipeline_loop_feed_dct32_ac                                                           1028              1028           1028          1028            3.426 us         3.426 us        3.426 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  feed_dct32_ac                                                                                       1030              1030           1030          1030            3.433 us         3.433 us        3.433 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_idct32_scale_2d                                                                                 28                28             28            28              93.324 ns        93.324 ns       93.324 ns
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_IDCT1D_32_1                                                                                     126               126            126           126             0.420 us         0.420 us        0.420 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_idct_transpose4x4                                                                               18                18             18            18              59.994 ns        59.994 ns       59.994 ns
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_IDCT1D_32                                                                                       126               126            126           126             0.420 us         0.420 us        0.420 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  feed_dct32_dc_Pipeline_loop_feed_dct32_dc                                                           20                20             20            20              66.660 ns        66.660 ns       66.660 ns
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  feed_dct32_dc                                                                                       22                22             22            22              73.326 ns        73.326 ns       73.326 ns
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_in_loop_VITIS_LOOP_7127_4                                                                  1136              8451           8451          8451            28.167 us        28.167 us       28.167 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc62                                                                         10725             10725          10725         10725           35.746 us        35.746 us       35.746 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc65                                                                         21453             21453          21453         21453           71.503 us        71.503 us       71.503 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc68                                                                         42909             42909          42909         42909           0.143 ms         0.143 ms        0.143 ms
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc71                                                                         undef             undef          undef         undef           undef            undef           undef
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc74                                                                         undef             undef          undef         undef           undef            undef           undef
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_dct32x32_module                                                                                 undef             undef          undef         undef           undef            undef           undef
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_lossy_enc_compute_dataflow_Block_split1326_proc                                                 25                25             25            25              83.325 ns        83.325 ns       83.325 ns
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetACSSize_Pipeline_LOOP_0_LOOP_1                                                                   2 ~ 524290        2              undef         524290          6.666 ns         undef           1.747 ms
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetACSSize                                                                                          7 ~ 524295        7              undef         524295          23.331 ns        undef           1.747 ms
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  DupQuantAndMask_Pipeline_DUP_1_DUP_2                                                                79                79             79            79              0.263 us         0.263 us        0.263 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  DupQuantAndMask                                                                                     5313              5313           5313          5313            17.708 us        17.708 us       17.708 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  DupDCT_1_Pipeline_LOOP_1_LOOP_3_LOOP_4                                                              770               770            770           770             2.566 us         2.566 us        2.566 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  DupDCT_1_s                                                                                          49665             49665          49665         49665           0.166 ms         0.166 ms        0.166 ms
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  DupDCT_2_Pipeline_LOOP_3_LOOP_4                                                                     770               770            770           770             2.566 us         2.566 us        2.566 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  DupDCT_2_s                                                                                          198081            198081         198081        198081          0.660 ms         0.660 ms        0.660 ms
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  DupDCT_4_Pipeline_LOOP_3_LOOP_4                                                                     3074              3074           3074          3074            10.246 us        10.246 us       10.246 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  DupDCT_4_s                                                                                          787905            787905         787905        787905          2.626 ms         2.626 ms        2.626 ms
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetQAndMask_8_Pipeline_LOOP_1_LOOP_2                                                                450               450            450           450             1.500 us         1.500 us        1.500 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetQAndMask_8                                                                                       29057             29057          29057         29057           96.847 us        96.847 us       96.847 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy1_1_Pipeline_LOOP_1_LOOP_3_LOOP_4                                                     12346             12346          12346         12346           41.149 us        41.149 us       41.149 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy1_1_s                                                                                 790593            790593         790593        790593          2.635 ms         2.635 ms        2.635 ms
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy3_1_Pipeline_1                                                                        5                 5              5             5               16.665 ns        16.665 ns       16.665 ns
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy3_1_Pipeline_VITIS_LOOP_7821_1                                                        28                28             28            28              93.324 ns        93.324 ns       93.324 ns
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy3_1_s                                                                                 454849            454849         454849        454849          1.516 ms         1.516 ms        1.516 ms
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetQAndMask_16_32_2_Pipeline_LOOP_2                                                                 10                10             10            10              33.330 ns        33.330 ns       33.330 ns
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetQAndMask_16_32_2_Pipeline_LOOP_6                                                                 22                22             22            22              73.326 ns        73.326 ns       73.326 ns
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetQAndMask_16_32_2_Pipeline_LOOP_7                                                                 38                38             38            38              0.127 us         0.127 us        0.127 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetQAndMask_16_32_2_s                                                                               35585             35585          35585         35585           0.119 ms         0.119 ms        0.119 ms
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy1_2_Pipeline_LOOP_3_LOOP_4                                                            826               826            826           826             2.753 us         2.753 us        2.753 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy1_2_s                                                                                 3392705           3392705        3392705       3392705         11.308 ms        11.308 ms       11.308 ms
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy3_2_Pipeline_1                                                                        5                 5              5             5               16.665 ns        16.665 ns       16.665 ns
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy3_2_Pipeline_VITIS_LOOP_7821_1                                                        28                28             28            28              93.324 ns        93.324 ns       93.324 ns
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy3_2_s                                                                                 410753            410753         410753        410753          1.369 ms         1.369 ms        1.369 ms
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetQAndMask_16_32_4_Pipeline_LOOP_2                                                                 10                10             10            10              33.330 ns        33.330 ns       33.330 ns
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetQAndMask_16_32_4_Pipeline_LOOP_6                                                                 36                36             36            36              0.120 us         0.120 us        0.120 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetQAndMask_16_32_4_Pipeline_LOOP_7                                                                 38                38             38            38              0.127 us         0.127 us        0.127 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetQAndMask_16_32_4_s                                                                               62721             62721          62721         62721           0.209 ms         0.209 ms        0.209 ms
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy1_4_Pipeline_LOOP_3_LOOP_4                                                            3130              3130           3130          3130            10.432 us        10.432 us       10.432 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy1_4_s                                                                                 12829889          12829889       12829889      12829889        42.762 ms        42.762 ms       42.762 ms
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy3_4_Pipeline_1                                                                        5                 5              5             5               16.665 ns        16.665 ns       16.665 ns
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy3_4_Pipeline_VITIS_LOOP_7821_1                                                        28                28             28            28              93.324 ns        93.324 ns       93.324 ns
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy3_4_s                                                                                 410753            410753         410753        410753          1.369 ms         1.369 ms        1.369 ms
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  CompareEntropy_Pipeline_1                                                                           18                18             18            18              59.994 ns        59.994 ns       59.994 ns
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  CompareEntropy                                                                                      46401 ~ 361793    46401          116033        361793          0.155 ms         0.387 ms        1.206 ms
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  BufferN_1_Pipeline_LOOP_1_LOOP_3_LOOP_4_LOOP_5                                                      12292             12292          12292         12292           40.969 us        40.969 us       40.969 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  BufferN_1_s                                                                                         786945            786945         786945        786945          2.623 ms         2.623 ms        2.623 ms
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  BufferN_2_Pipeline_LOOP_1_LOOP_3_LOOP_4_LOOP_5                                                      12291             12291          12291         12291           40.966 us        40.966 us       40.966 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  BufferN_2_s                                                                                         786881            786881         786881        786881          2.623 ms         2.623 ms        2.623 ms
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  BufferN_4_Pipeline_LOOP_1_LOOP_3_LOOP_4_LOOP_5                                                      12291             12291          12291         12291           40.966 us        40.966 us       40.966 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  BufferN_4_s                                                                                         786881            786881         786881        786881          2.623 ms         2.623 ms        2.623 ms
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  Reorder_Pipeline_LOOP_10_LOOP_11_LOOP_12                                                            3077              3077           3077          3077            10.256 us        10.256 us       10.256 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  Reorder_Pipeline_LOOP_5_LOOP_6_LOOP_7                                                               773               773            773           773             2.576 us         2.576 us        2.576 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  Reorder_Pipeline_LOOP_13_LOOP_14_LOOP_15                                                            197               197            197           197             0.657 us         0.657 us        0.657 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  Reorder                                                                                             12481 ~ 12624065  12481          4161729       12624065        41.599 us        13.871 ms       42.076 ms
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  SetQuantField_Pipeline_LOOP_1_LOOP_2                                                                66                66             66            66              0.220 us         0.220 us        0.220 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  SetQuantField_Pipeline_LOOP_5_LOOP_6                                                                10 ~ 85           10             undef         85              33.330 ns        undef           0.283 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  SetQuantField                                                                                       193 ~ 430593      193            undef         430593          0.643 us         undef           1.435 ms
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_CFLComputeTile_Pipeline_VITIS_LOOP_4959_3                                                       undef             undef          undef         undef           undef            undef           undef
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_CFLComputeTile                                                                                  undef             undef          undef         undef           undef            undef           undef
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_ComputeCoefficients_Pipeline_VITIS_LOOP_5111_3                                                  2 ~ 12582844      2              undef         12582844        6.666 ns         undef           41.939 ms
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_ComputeCoefficients                                                                             undef             undef          undef         undef           undef            undef           undef
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  count_numzeros_Pipeline_VITIS_LOOP_5389_2_VITIS_LOOP_5390_3                                         undef             undef          undef         undef           undef            undef           undef
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  count_numzeros                                                                                      undef             undef          undef         undef           undef            undef           undef
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetDCSize_Pipeline_LOOP_0_LOOP_1                                                                    2 ~ 524290        2              undef         524290          6.666 ns         undef           1.747 ms
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetDCSize                                                                                           7 ~ 524295        7              undef         524295          23.331 ns        undef           1.747 ms
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dc_8x8_writeout_Pipeline_VITIS_LOOP_4595_2_VITIS_LOOP_4596_3_VITIS_LOOP_4597_4                      236               236            236           236             0.787 us         0.787 us        0.787 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dc_8x8_writeout                                                                                     undef             undef          undef         undef           undef            undef           undef
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dc_16x16_writeout_Pipeline_VITIS_LOOP_4648_3_VITIS_LOOP_4650_5_VITIS_LOOP_4651_6_VITIS_LOOP_4652_7  237               237            237           237             0.790 us         0.790 us        0.790 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dc_16x16_writeout                                                                                   undef             undef          undef         undef           undef            undef           undef
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dc_32x32_writeout_Pipeline_VITIS_LOOP_4718_3_VITIS_LOOP_4720_5_VITIS_LOOP_4721_6_VITIS_LOOP_4722_7  237               237            237           237             0.790 us         0.790 us        0.790 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dc_32x32_writeout                                                                                   undef             undef          undef         undef           undef            undef           undef
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  cfl_writeout_Pipeline_VITIS_LOOP_4825_1                                                             undef             undef          undef         undef           undef            undef           undef
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  cfl_writeout                                                                                        undef             undef          undef         undef           undef            undef           undef
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ac_coeff_writeout_Pipeline_VITIS_LOOP_4560_1                                                        undef             undef          undef         undef           undef            undef           undef
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ac_coeff_writeout                                                                                   undef             undef          undef         undef           undef            undef           undef
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  acs_rqf_writeout_Pipeline_LOOP_6                                                                    43 ~ 58           43             undef         58              0.143 us         undef           0.193 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  acs_rqf_writeout                                                                                    undef             undef          undef         undef           undef            undef           undef
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_lossy_enc_compute_dataflow                                                                      undef             undef          undef         undef           undef            undef           undef
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  entry_proc105                                                                                       0                 0              0             0               0 ns             0 ns            0 ns
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  load_nz2strm_Pipeline_VITIS_LOOP_5459_2_VITIS_LOOP_5460_3                                           223 ~ 799         223            undef         799             0.743 us         undef           2.663 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  load_nz2strm                                                                                        453 ~ 1605        453            undef         1605            1.510 us         undef           5.349 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_sort_8_Pipeline_VITIS_LOOP_5279_2                                                               undef             undef          undef         undef           undef            undef           undef
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_sort_8_s                                                                                        undef             undef          undef         undef           undef            undef           undef
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_sort_top                                                                                        undef             undef          undef         undef           undef            undef           undef
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  order_writeout_Pipeline_VITIS_LOOP_5519_2_VITIS_LOOP_5520_3                                         232 ~ 808         232            undef         808             0.773 us         undef           2.693 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  order_writeout                                                                                      511 ~ 1663        511            undef         1663            1.703 us         undef           5.543 us
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  order_finalize_dataflow                                                                             undef             undef          undef         undef           undef            undef           undef
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  JxlEnc_lossy_enc_compute                                                                            undef             undef          undef         undef           undef            undef           undef

Area Information
Compute Unit                Kernel Name               Module Name                                                                                         FF      LUT     DSP  BRAM  URAM
--------------------------  ------------------------  --------------------------------------------------------------------------------------------------  ------  ------  ---  ----  ----
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  JxlEnc_lossy_enc_compute_Pipeline_VITIS_LOOP_5346_1_VITIS_LOOP_5347_2                               419     360     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  entry_proc106                                                                                       3       119     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_lossy_enc_compute_dataflow_Block_split13_proc                                                   178     172     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetSourceSize_Pipeline_LOOP_0_LOOP_1                                                                143     482     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetSourceSize                                                                                       296     817     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  load_rqf_mask_Pipeline_LOOP_2                                                                       497     222     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  load_rqf_mask                                                                                       3758    5516    0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  load_dct8_pixel_Pipeline_loop_load_dct8_pixel_VITIS_LOOP_4449_1                                     1064    633     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  load_dct8_pixel                                                                                     1497    1419    0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  load_dct16_pixel_Pipeline_loop_load_dct16_pixel_VITIS_LOOP_4467_1                                   1064    633     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  load_dct16_pixel                                                                                    1497    1419    0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  load_dct32_pixel_Pipeline_loop_load_dct32_pixel_VITIS_LOOP_4485_1                                   1064    633     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  load_dct32_pixel                                                                                    1497    1419    0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetRectSizeDCT_Pipeline_VITIS_LOOP_7188_1                                                           13      200     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetRectSizeDCT                                                                                      155     638     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  entry_proc104                                                                                       2       47      0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  load_b64                                                                                            56      168     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_DCT1DImpl_8x8_1                                                                                 5049    2971    0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_TransposeBlock8_1                                                                               378     344     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_DCT1DImpl_8x8                                                                                   5049    2971    0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_TransposeBlock8                                                                                 314     312     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  split_ac_dc_dct8_Pipeline_VITIS_LOOP_5842_1_VITIS_LOOP_5843_2                                       34      164     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  split_ac_dc_dct8                                                                                    72      229     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  feed_ac_dct8_Pipeline_hls_feed_b64_VITIS_LOOP_5864_1                                                60      221     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  feed_ac_dct8                                                                                        71      297     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  feed_dc_dct8_Pipeline_hls_feed_b64_VITIS_LOOP_5888_1                                                110     242     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  feed_dc_dct8                                                                                        153     318     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_in_loop_VITIS_LOOP_5952_4                                                                  11180   7907    0    22    0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc                                                                           11223   7937    0    22    0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc66                                                                         11301   7974    0    22    0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc67                                                                         11379   8011    0    22    0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc72                                                                         11808   8116    0    22    0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc73                                                                         12237   8221    0    22    0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_dct8x8_module                                                                                   12353   8660    0    22    0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  entry_proc103                                                                                       2       47      0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dct16_test_load                                                                                     62      175     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  transposeDct16                                                                                      48      179     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_dct16_block_1                                                                                   6393    3494    0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  transposeDct16_scale_1                                                                              321     289     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_dct16_block                                                                                     6393    3494    0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  transposeDct16_scale                                                                                601     489     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dct16_ac_dc_split_Pipeline_VITIS_LOOP_6393_1                                                        288     183     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dct16_ac_dc_split                                                                                   423     337     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dct16_ac_writeout_Pipeline_VITIS_LOOP_6358_1                                                        58      133     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dct16_ac_writeout                                                                                   71      215     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_ReinterpretingIDCT16                                                                            1953    1324    0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dct16_dc_writeout_Pipeline_VITIS_LOOP_6379_1                                                        40      122     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dct16_dc_writeout                                                                                   53      204     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_in_loop_VITIS_LOOP_6462_5                                                                  16633   10660   0    26    0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc63                                                                         16676   10690   0    26    0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc64                                                                         16738   10724   0    26    0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc69                                                                         16800   10758   0    26    0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc70                                                                         17229   10863   0    26    0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc75                                                                         17658   10968   0    26    0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_dct16x16_module                                                                                 17773   11380   0    26    0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  entry_proc                                                                                          2       47      0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  load_dct32                                                                                          68      184     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_DCT1DImpl_32_1                                                                                  8728    5591    0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  scaled_dct32                                                                                        329     283     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  transpose_dct32                                                                                     58      190     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_DCT1DImpl_32                                                                                    8728    5591    0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  transpose_scaled_dct32                                                                              329     300     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  split_ac_dc_dct32                                                                                   58      216     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  feed_dct32_ac_Pipeline_loop_feed_dct32_ac                                                           64      154     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  feed_dct32_ac                                                                                       73      236     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_idct32_scale_2d                                                                                 1453    537     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_IDCT1D_32_1                                                                                     832     666     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_idct_transpose4x4                                                                               18      159     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_IDCT1D_32                                                                                       832     666     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  feed_dct32_dc_Pipeline_loop_feed_dct32_dc                                                           46      144     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  feed_dct32_dc                                                                                       55      226     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_in_loop_VITIS_LOOP_7127_4                                                                  21787   15220   0    30    0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc62                                                                         21830   15250   0    30    0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc65                                                                         21877   15281   0    30    0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc68                                                                         21924   15312   0    30    0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc71                                                                         22353   15417   0    30    0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dataflow_parent_loop_proc74                                                                         22782   15522   0    30    0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_dct32x32_module                                                                                 22897   15934   0    30    0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_lossy_enc_compute_dataflow_Block_split1326_proc                                                 791     597     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetACSSize_Pipeline_LOOP_0_LOOP_1                                                                   31      203     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetACSSize                                                                                          127     547     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  DupQuantAndMask_Pipeline_DUP_1_DUP_2                                                                762     450     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  DupQuantAndMask                                                                                     818     678     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  DupDCT_1_Pipeline_LOOP_1_LOOP_3_LOOP_4                                                              27      116     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  DupDCT_1_s                                                                                          93      350     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  DupDCT_2_Pipeline_LOOP_3_LOOP_4                                                                     13      97      0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  DupDCT_2_s                                                                                          94      386     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  DupDCT_4_Pipeline_LOOP_3_LOOP_4                                                                     15      100     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  DupDCT_4_s                                                                                          96      389     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetQAndMask_8_Pipeline_LOOP_1_LOOP_2                                                                263     224     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetQAndMask_8                                                                                       334     445     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy1_1_Pipeline_LOOP_1_LOOP_3_LOOP_4                                                     2931    3590    0    3     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy1_1_s                                                                                 3180    3830    0    3     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy3_1_Pipeline_1                                                                        4       44      0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy3_1_Pipeline_VITIS_LOOP_7821_1                                                        650     243     0    1     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy3_1_s                                                                                 2841    2099    0    1     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetQAndMask_16_32_2_Pipeline_LOOP_2                                                                 17      99      0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetQAndMask_16_32_2_Pipeline_LOOP_6                                                                 698     750     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetQAndMask_16_32_2_Pipeline_LOOP_7                                                                 82      147     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetQAndMask_16_32_2_s                                                                               1779    1953    0    2     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy1_2_Pipeline_LOOP_3_LOOP_4                                                            2892    3446    0    4     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy1_2_s                                                                                 3145    3735    0    4     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy3_2_Pipeline_1                                                                        4       44      0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy3_2_Pipeline_VITIS_LOOP_7821_1                                                        650     243     0    1     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy3_2_s                                                                                 2805    1999    0    1     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetQAndMask_16_32_4_Pipeline_LOOP_2                                                                 17      99      0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetQAndMask_16_32_4_Pipeline_LOOP_6                                                                 699     752     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetQAndMask_16_32_4_Pipeline_LOOP_7                                                                 82      147     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetQAndMask_16_32_4_s                                                                               1782    1957    0    2     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy1_4_Pipeline_LOOP_3_LOOP_4                                                            2902    3457    0    2     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy1_4_s                                                                                 3155    3746    0    2     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy3_4_Pipeline_1                                                                        4       44      0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy3_4_Pipeline_VITIS_LOOP_7821_1                                                        650     243     0    1     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ComputeEntropy3_4_s                                                                                 2805    1999    0    1     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  CompareEntropy_Pipeline_1                                                                           7       49      0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  CompareEntropy                                                                                      974     1529    0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  BufferN_1_Pipeline_LOOP_1_LOOP_3_LOOP_4_LOOP_5                                                      129     487     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  BufferN_1_s                                                                                         187     652     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  BufferN_2_Pipeline_LOOP_1_LOOP_3_LOOP_4_LOOP_5                                                      129     488     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  BufferN_2_s                                                                                         194     652     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  BufferN_4_Pipeline_LOOP_1_LOOP_3_LOOP_4_LOOP_5                                                      132     502     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  BufferN_4_s                                                                                         196     666     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  Reorder_Pipeline_LOOP_10_LOOP_11_LOOP_12                                                            169     429     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  Reorder_Pipeline_LOOP_5_LOOP_6_LOOP_7                                                               159     463     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  Reorder_Pipeline_LOOP_13_LOOP_14_LOOP_15                                                            123     379     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  Reorder                                                                                             781     2123    0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  SetQuantField_Pipeline_LOOP_1_LOOP_2                                                                35      173     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  SetQuantField_Pipeline_LOOP_5_LOOP_6                                                                382     750     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  SetQuantField                                                                                       1355    2250    0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_CFLComputeTile_Pipeline_VITIS_LOOP_4959_3                                                       2959    4304    0    6     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_CFLComputeTile                                                                                  6214    12108   0    6     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_ComputeCoefficients_Pipeline_VITIS_LOOP_5111_3                                                  10841   7141    0    48    0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_ComputeCoefficients                                                                             12632   8627    0    48    0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  count_numzeros_Pipeline_VITIS_LOOP_5389_2_VITIS_LOOP_5390_3                                         5769    4614    0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  count_numzeros                                                                                      6154    5395    0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetDCSize_Pipeline_LOOP_0_LOOP_1                                                                    31      167     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  GetDCSize                                                                                           127     475     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dc_8x8_writeout_Pipeline_VITIS_LOOP_4595_2_VITIS_LOOP_4596_3_VITIS_LOOP_4597_4                      1448    1055    0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dc_8x8_writeout                                                                                     2437    1976    0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dc_16x16_writeout_Pipeline_VITIS_LOOP_4648_3_VITIS_LOOP_4650_5_VITIS_LOOP_4651_6_VITIS_LOOP_4652_7  1811    1702    0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dc_16x16_writeout                                                                                   3859    3225    0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dc_32x32_writeout_Pipeline_VITIS_LOOP_4718_3_VITIS_LOOP_4720_5_VITIS_LOOP_4721_6_VITIS_LOOP_4722_7  1902    1742    0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  dc_32x32_writeout                                                                                   3826    3263    0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  cfl_writeout_Pipeline_VITIS_LOOP_4825_1                                                             218     389     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  cfl_writeout                                                                                        497     582     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ac_coeff_writeout_Pipeline_VITIS_LOOP_4560_1                                                        552     549     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  ac_coeff_writeout                                                                                   1059    1382    0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  acs_rqf_writeout_Pipeline_LOOP_6                                                                    740     608     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  acs_rqf_writeout                                                                                    2633    5078    0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_lossy_enc_compute_dataflow                                                                      139447  132936  0    276   36
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  entry_proc105                                                                                       3       29      0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  load_nz2strm_Pipeline_VITIS_LOOP_5459_2_VITIS_LOOP_5460_3                                           2029    2575    0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  load_nz2strm                                                                                        2049    2740    0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_sort_8_Pipeline_VITIS_LOOP_5279_2                                                               772     2990    0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_sort_8_s                                                                                        786     3054    0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  hls_sort_top                                                                                        802     3188    0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  order_writeout_Pipeline_VITIS_LOOP_5519_2_VITIS_LOOP_5520_3                                         444     588     0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  order_writeout                                                                                      630     1213    0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  order_finalize_dataflow                                                                             3513    7371    0    0     0
JxlEnc_lossy_enc_compute_1  JxlEnc_lossy_enc_compute  JxlEnc_lossy_enc_compute                                                                            158136  157867  0    431   36
-------------------------------------------------------------------------------
```
### View Output (Memory Error)
```sh
janethamrani@superlu:~$ /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/build_dir.hw.xilinx_u280_xdma_201920_3/host.exe --xclbin /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/build_dir.hw.xilinx_u280_xdma_201920_3/jxlEnc.xclbin /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/images/small32x32.png /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/small32x32.jxl
JPEG XL encoder v0.5.0 61fb7ee [Scalar]
Read 32x32 image, 5.2 MP/s
Encoding [Container | VarDCT, d1.000, squirrel | 132-byte Exif | 323-byte XMP], 8 threads.
Found Platform
Platform Name: Xilinx
Info: Context created
Info: Command queue created
INFO: Found Device=xilinx_u280_xdma_201920_3
INFO: Importing /home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/build_dir.hw.xilinx_u280_xdma_201920_3/jxlEnc.xclbin
Loading: '/home/janethamrani/Vitis_Libraries/codec/L2/demos/jxlEnc/acc_lossy_enc_compute/build_dir.hw.xilinx_u280_xdma_201920_3/jxlEnc.xclbin'
Info: Program created
Info: Kernel created
INFO: kernel has been created
XRT build version: 2.11.634
Build hash: 5ad5998d67080f00bca5bf15b3838cf35e0a7b26
Build date: 2021-06-08 22:10:49
Git branch: 2021.1
PID: 28236
UID: 1001
[Sun Feb  5 21:09:44 2023 GMT]
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
```
