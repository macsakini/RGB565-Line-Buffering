# RGB565 Line Buffering

The Basys FPGA with Artix 7 has only 1800Kbits of RAM, this translates to around 225Kb.

However the images being captured by the OV7670 have **648px X 540px**.

Since we are using RGB565 format, 2 bytes will represent a pixel. Thus we will need approximately 174960 bytes to store the 349920pixels from the image. This translates to around 175Kb. 

The aim to is to start processing the image line by line to get desired results.
