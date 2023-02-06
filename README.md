# Codec Library
### Types of Algorithms
<ul>
<li>For <strong>JPEG decoding</strong>, one L2 API is provided for accelerating entire JPEG decoding process, which supports the ‘Sequential DCT-based mode’ of ISO/IEC 10918-1 standard. It can process 1 Huffman token and create up to 8 DCT coefficients within one cycle. It is also an easy-to-use decoder as it can directly parse the JPEG file header without help of software functions. In addition, L1 API is provided for Huffman decoding.</li>
<li>For <strong>pik encoding</strong>, 3 L2 APIs are provided for accelerating about 90% workload of lossy compression in Google’s pik. The pikEnc used the ‘fast mode’ of pik encoder which can provide better encoding efficiency than most of other still image encoding methods.</li>
<li>For <strong>WebP encoding</strong>, 2 L2 APIs are provided for accelerating about 90% workload of lossy compression in WebP which is a popular image format developed by Google and supported in Chrome, Opera and Android, that is optimized to enable faster and smaller images on the Web.</li>
<li>For <strong>lepton encoding</strong>, the API ‘jpegDecLeptonEnc’ can be used for accelerating the encoding process for a new image format ‘Lepton’ developed by Dropbox. The format can save about 22% size of JPEG images losslessly.</li>
<li>For <strong>JPEG-XL encoding</strong>, 3 L2 APIs are provided for accelerating the lossy encoding process of the JPEG XL Image Coding System (ISO/IEC 18181). Currently, not all computing intensive modules are offloaded, and more accelerating APIs will be available in feature.</li>
<li>For <strong>bicubic resizing</strong>, the L2 APIs ‘resizeTop’ is based on bicubic algorithm, which can take 1 or 8 input samples per cycle. When taking 8 samples, it can process 80 8K images per second. Although resizing is not a coding or encoding algorithm, it is widely used with image codecs in image transcoding applications.</li>
</ul>
