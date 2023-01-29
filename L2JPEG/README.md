#### SW_EMU
```sh
****** configutil v2021.2 (64-bit)
  **** SW Build 3363252 on 2021-10-14-04:41:01
    ** Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.

INFO: [ConfigUtil 60-895]   Target platform: /opt/xilinx/platforms/xilinx_u280_xdma_201920_3/xilinx_u280_xdma_201920_3.xpfm
INFO: [ConfigUtil 60-1578]   This platform contains Xilinx Shell Archive '/opt/xilinx/platforms/xilinx_u280_xdma_201920_3/hw/xilinx_u280_xdma_201920_3.xsa'
INFO: [ConfigUtil 60-1032] Extracting hardware platform to build_dir.sw_emu.xilinx_u280_xdma_201920_3
emulation configuration file `emconfig.json` is created in build_dir.sw_emu.xilinx_u280_xdma_201920_3 directory 
LD_LIBRARY_PATH=/opt/xilinx/xrt/lib:/opt/xilinx/xrt/lib::/opt/xilinx/xrt/lib:$LD_LIBRARY_PATH \
XCL_EMULATION_MODE=sw_emu build_dir.sw_emu.xilinx_u280_xdma_201920_3/host.exe -xclbin build_dir.sw_emu.xilinx_u280_xdma_201920_3/kernelJpegDecoder.xclbin -JPEGFile /home/janethamrani/Vitis_Libraries/codec/L2/demos/jpegDec/images/t0.jpg 

------------ Test for decode image.jpg  -------------
WARNING: /home/janethamrani/Vitis_Libraries/codec/L2/demos/jpegDec/images/t0.jpg will be opened for binary read.
51193 entries read from /home/janethamrani/Vitis_Libraries/codec/L2/demos/jpegDec/images/t0.jpg
Found Platform
Platform Name: Xilinx
Info: Context created
Info: Command queue created
INFO: Found Device=xilinx_u280_xdma_201920_3
INFO: Importing build_dir.sw_emu.xilinx_u280_xdma_201920_3/kernelJpegDecoder.xclbin
Loading: 'build_dir.sw_emu.xilinx_u280_xdma_201920_3/kernelJpegDecoder.xclbin'
Info: Program created
INFO: Kernel has been created
Info: Kernel created
INFO: Kernel has been created
INFO: Finish kernel setup
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
INFO: axi_height_width[0]  66,78, axi_height_width[1] 33,39, axi_height_width[2]  33,39
INFO : mcu_reorder start
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
INFO: axi_height_width[0]  66,78, axi_height_width[1] 33,39, axi_height_width[2]  33,39
INFO : mcu_reorder start
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
INFO: axi_height_width[0]  66,78, axi_height_width[1] 33,39, axi_height_width[2]  33,39
INFO : mcu_reorder start
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
INFO: axi_height_width[0]  66,78, axi_height_width[1] 33,39, axi_height_width[2]  33,39
INFO : mcu_reorder start
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
INFO: axi_height_width[0]  66,78, axi_height_width[1] 33,39, axi_height_width[2]  33,39
INFO : mcu_reorder start
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
INFO: axi_height_width[0]  66,78, axi_height_width[1] 33,39, axi_height_width[2]  33,39
INFO : mcu_reorder start
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
INFO: axi_height_width[0]  66,78, axi_height_width[1] 33,39, axi_height_width[2]  33,39
INFO : mcu_reorder start
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
INFO: axi_height_width[0]  66,78, axi_height_width[1] 33,39, axi_height_width[2]  33,39
INFO : mcu_reorder start
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
INFO: axi_height_width[0]  66,78, axi_height_width[1] 33,39, axi_height_width[2]  33,39
INFO : mcu_reorder start
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
INFO: axi_height_width[0]  66,78, axi_height_width[1] 33,39, axi_height_width[2]  33,39
INFO : mcu_reorder start
INFO: Finish kernel execution
INFO: Finish E2E execution
-------------------------------------------------------
INFO: Data transfer from host to device: 168 us
-------------------------------------------------------
INFO: Data transfer from device to host: 153792 us
-------------------------------------------------------
INFO: kernel 0: execution time 1140442 usec
INFO: kernel 1: execution time 1139266 usec
INFO: kernel 2: execution time 1138853 usec
INFO: kernel 3: execution time 1147230 usec
INFO: kernel 4: execution time 1168559 usec
INFO: kernel 5: execution time 1174310 usec
INFO: kernel 6: execution time 1172836 usec
INFO: kernel 7: execution time 1176482 usec
INFO: kernel 8: execution time 1170968 usec
INFO: kernel 9: execution time 1177163 usec
INFO: Average kernel execution per run: 1160610 us
-------------------------------------------------------
INFO: Average E2E per run: 12750611 us
-------------------------------------------------------
Info: Test passed
INFO: writing the YUV file!
WARNING: t0.raw will be opened for binary write.
WARNING: t0.yuv will be opened for binary write.
INFO: fmt 1, bas_info->mcu_cmp = 6 
INFO: bas_info->hls_mbs[cmp] 4, 1, 1 
3F, 3F, 3F, 3F, 3F, 3F, 3F, 3F, 
3F, 3F, 3F, 3F, 3F, 3F, 3F, 3F, 
3F, 3F, 3F, 3F, 3F, 3F, 3F, 3F, 
3F, 3F, 3E, 3E, 3E, 3E, 3E, 3E, 
3D, 3E, 3E, 3E, 3F, 3F, 3F, 3F, 
3F, 3F, 3F, 3F, 40, 40, 40, 40, 
40, 40, 40, 40, 40, 40, 40, 40, 
3F, 3F, 3F, 3F, 3F, 3F, 3F, 3F, 
3E, 3E, 3E, 3E, 3E, 3E, 3E, 3E, 
40, 40, 40, 40, 40, 40, 40, 40, 
3F, 40, 40, 40, 40, 40, 40, 40, 
40, 40, 40, 40, 40, 3F, 3F, 3F, 
41, 41, 40, 40, 3F, 40, 40, 40, 
40, 40, 40, 41, 41, 41, 41, 41, 
41, 41, 41, 41, 41, 41, 41, 41, 
40, 40, 40, 41, 41, 41, 41, 41, 
63, 63, 63, 63, 63, 63, 63, 63, 
63, 63, 63, 63, 63, 63, 63, 63, 
63, 63, 63, 63, 63, 63, 63, 63, 
63, 63, 62, 62, 62, 62, 62, 62, 
61, 62, 62, 62, 63, 63, 63, 63, 
63, 63, 63, 63, 64, 64, 64, 64, 
64, 64, 64, 64, 64, 64, 64, 64, 
63, 63, 63, 63, 63, 63, 63, 63, 
62, 62, 62, 62, 62, 62, 62, 62, 
64, 64, 64, 64, 64, 64, 64, 64, 
63, 64, 64, 64, 64, 64, 64, 64, 
64, 64, 64, 64, 64, 63, 63, 63, 
65, 65, 64, 64, 63, 64, 64, 64, 
64, 64, 64, 65, 65, 65, 65, 65, 
65, 65, 65, 65, 65, 65, 65, 65, 
64, 64, 64, 65, 65, 65, 65, 65, 
Please open the YUV file with fmt 1 and (width, height) = (624, 528) 
WARNING: t0.yuv.h will be opened for binary write.
Ready for next image!

```
#### HW_EMU
```sh
------------ Test for decode image.jpg  -------------
WARNING: /home/janethamrani/Vitis_Libraries/codec/L2/demos/jpegDec/images/t0.jpg will be opened for binary read.
51193 entries read from /home/janethamrani/Vitis_Libraries/codec/L2/demos/jpegDec/images/t0.jpg
Found Platform
Platform Name: Xilinx
Info: Context created
Info: Command queue created
INFO: Found Device=xilinx_u280_xdma_201920_3
INFO: Importing build_dir.hw_emu.xilinx_u280_xdma_201920_3/kernelJpegDecoder.xclbin
Loading: 'build_dir.hw_emu.xilinx_u280_xdma_201920_3/kernelJpegDecoder.xclbin'
INFO: [HW-EMU 01] Hardware emulation runs simulation underneath. Using a large data set will result in long simulation times. It is recommended that a small dataset is used for faster execution. The flow uses approximate models for Global memories and interconnect and hence the performance data generated is approximate.
configuring dataflow mode with ert polling
scheduler config ert(1), dataflow(1), slots(16), cudma(0), cuisr(0), cdma(0), cus(1)
Info: Program created
INFO: Kernel has been created
Info: Kernel created
INFO: Kernel has been created
INFO: Finish kernel setup
INFO: Finish kernel execution
INFO: Finish E2E execution
-------------------------------------------------------
INFO: Data transfer from host to device: 9473 us
-------------------------------------------------------
INFO: Data transfer from device to host: 231227 us
-------------------------------------------------------
INFO: kernel 0: execution time 87005568 usec
INFO: kernel 1: execution time 86005180 usec
INFO: kernel 2: execution time 89005835 usec
INFO: kernel 3: execution time 87005487 usec
INFO: kernel 4: execution time 87005879 usec
INFO: kernel 5: execution time 86005717 usec
INFO: kernel 6: execution time 87006293 usec
INFO: kernel 7: execution time 87005636 usec
INFO: kernel 8: execution time 87005602 usec
INFO: kernel 9: execution time 88005466 usec
INFO: Average kernel execution per run: 87105666 us
-------------------------------------------------------
INFO: Average E2E per run: 890321304 us
-------------------------------------------------------
Info: Test passed
INFO: writing the YUV file!
WARNING: t0.raw will be opened for binary write.
WARNING: t0.yuv will be opened for binary write.
INFO: fmt 1, bas_info->mcu_cmp = 6 
INFO: bas_info->hls_mbs[cmp] 4, 1, 1 
3F, 3F, 3F, 3F, 3F, 3F, 3F, 3F, 
3F, 3F, 3F, 3F, 3F, 3F, 3F, 3F, 
3F, 3F, 3F, 3F, 3F, 3F, 3F, 3F, 
3F, 3F, 3E, 3E, 3E, 3E, 3E, 3E, 
3D, 3E, 3E, 3E, 3F, 3F, 3F, 3F, 
3F, 3F, 3F, 3F, 40, 40, 40, 40, 
40, 40, 40, 40, 40, 40, 40, 40, 
3F, 3F, 3F, 3F, 3F, 3F, 3F, 3F, 
3E, 3E, 3E, 3E, 3E, 3E, 3E, 3E, 
40, 40, 40, 40, 40, 40, 40, 40, 
3F, 40, 40, 40, 40, 40, 40, 40, 
40, 40, 40, 40, 40, 3F, 3F, 3F, 
41, 41, 40, 40, 3F, 40, 40, 40, 
40, 40, 40, 41, 41, 41, 41, 41, 
41, 41, 41, 41, 41, 41, 41, 41, 
40, 40, 40, 41, 41, 41, 41, 41, 
63, 63, 63, 63, 63, 63, 63, 63, 
63, 63, 63, 63, 63, 63, 63, 63, 
63, 63, 63, 63, 63, 63, 63, 63, 
63, 63, 62, 62, 62, 62, 62, 62, 
61, 62, 62, 62, 63, 63, 63, 63, 
63, 63, 63, 63, 64, 64, 64, 64, 
64, 64, 64, 64, 64, 64, 64, 64, 
63, 63, 63, 63, 63, 63, 63, 63, 
62, 62, 62, 62, 62, 62, 62, 62, 
64, 64, 64, 64, 64, 64, 64, 64, 
63, 64, 64, 64, 64, 64, 64, 64, 
64, 64, 64, 64, 64, 63, 63, 63, 
65, 65, 64, 64, 63, 64, 64, 64, 
64, 64, 64, 65, 65, 65, 65, 65, 
65, 65, 65, 65, 65, 65, 65, 65, 
64, 64, 64, 65, 65, 65, 65, 65, 
Please open the YUV file with fmt 1 and (width, height) = (624, 528) 
WARNING: t0.yuv.h will be opened for binary write.
Ready for next image!
INFO: [HW-EMU 06-0] Waiting for the simulator process to exit
INFO: [HW-EMU 06-1] All the simulator processes exited successfully

```
#### HW Run
```sh
------------ Test for decode image.jpg  -------------
WARNING: /home/janethamrani/Vitis_Libraries/codec/L2/demos/jpegDec/images/t0.jpg will be opened for binary read.
51193 entries read from /home/janethamrani/Vitis_Libraries/codec/L2/demos/jpegDec/images/t0.jpg
Found Platform
Platform Name: Xilinx
Info: Context created
Info: Command queue created
INFO: Found Device=xilinx_u280_xdma_201920_3
INFO: Importing build_dir.hw.xilinx_u280_xdma_201920_3/kernelJpegDecoder.xclbin
Loading: 'build_dir.hw.xilinx_u280_xdma_201920_3/kernelJpegDecoder.xclbin'
Info: Program created
INFO: Kernel has been created
Info: Kernel created
INFO: Kernel has been created
INFO: Finish kernel setup
INFO: Finish kernel execution
INFO: Finish E2E execution
-------------------------------------------------------
INFO: Data transfer from host to device: 80 us
-------------------------------------------------------
INFO: Data transfer from device to host: 8864 us
-------------------------------------------------------
INFO: kernel 0: execution time 672 usec
INFO: kernel 1: execution time 687 usec
INFO: kernel 2: execution time 674 usec
INFO: kernel 3: execution time 709 usec
INFO: kernel 4: execution time 680 usec
INFO: kernel 5: execution time 686 usec
INFO: kernel 6: execution time 673 usec
INFO: kernel 7: execution time 644 usec
INFO: kernel 8: execution time 670 usec
INFO: kernel 9: execution time 685 usec
INFO: Average kernel execution per run: 678 us
-------------------------------------------------------
INFO: Average E2E per run: 4535174 us
-------------------------------------------------------
Info: Test passed
INFO: writing the YUV file!
WARNING: t0.raw will be opened for binary write.
WARNING: t0.yuv will be opened for binary write.
INFO: fmt 1, bas_info->mcu_cmp = 6 
INFO: bas_info->hls_mbs[cmp] 4, 1, 1 
3F, 3F, 3F, 3F, 3F, 3F, 3F, 3F, 
3F, 3F, 3F, 3F, 3F, 3F, 3F, 3F, 
3F, 3F, 3F, 3F, 3F, 3F, 3F, 3F, 
3F, 3F, 3E, 3E, 3E, 3E, 3E, 3E, 
3D, 3E, 3E, 3E, 3F, 3F, 3F, 3F, 
3F, 3F, 3F, 3F, 40, 40, 40, 40, 
40, 40, 40, 40, 40, 40, 40, 40, 
3F, 3F, 3F, 3F, 3F, 3F, 3F, 3F, 
3E, 3E, 3E, 3E, 3E, 3E, 3E, 3E, 
40, 40, 40, 40, 40, 40, 40, 40, 
3F, 40, 40, 40, 40, 40, 40, 40, 
40, 40, 40, 40, 40, 3F, 3F, 3F, 
41, 41, 40, 40, 3F, 40, 40, 40, 
40, 40, 40, 41, 41, 41, 41, 41, 
41, 41, 41, 41, 41, 41, 41, 41, 
40, 40, 40, 41, 41, 41, 41, 41, 
63, 63, 63, 63, 63, 63, 63, 63, 
63, 63, 63, 63, 63, 63, 63, 63, 
63, 63, 63, 63, 63, 63, 63, 63, 
63, 63, 62, 62, 62, 62, 62, 62, 
61, 62, 62, 62, 63, 63, 63, 63, 
63, 63, 63, 63, 64, 64, 64, 64, 
64, 64, 64, 64, 64, 64, 64, 64, 
63, 63, 63, 63, 63, 63, 63, 63, 
62, 62, 62, 62, 62, 62, 62, 62, 
64, 64, 64, 64, 64, 64, 64, 64, 
63, 64, 64, 64, 64, 64, 64, 64, 
64, 64, 64, 64, 64, 63, 63, 63, 
65, 65, 64, 64, 63, 64, 64, 64, 
64, 64, 64, 65, 65, 65, 65, 65, 
65, 65, 65, 65, 65, 65, 65, 65, 
64, 64, 64, 65, 65, 65, 65, 65, 
Please open the YUV file with fmt 1 and (width, height) = (624, 528) 
WARNING: t0.yuv.h will be opened for binary write.
Ready for next image!
```
#### YUV File
![output](https://user-images.githubusercontent.com/26263012/215358401-ad68f9d0-c7f3-4682-9971-6a047879dde9.png)
