Pratice Problems 2.5
====================

Consider the following three calls to show_bytes:

  A. LE:0x21, BE:0x87
  B. LE:0x2143, BE:0x8765
  C. LE:0x214365, BE,0x876543

Pratice Problems 2.6
====================

3510593 (base-10), int:0x00359141 (base-16), float:0x4a564504
  A. 
    * int:  0000 0000 0011 0101 1001 0001 0100 0001
    * float:0100 1010 0101 0110 0100 0101 0000 0100

  B. 
    * int:  00000000001101011001000101000001
    * float:  01001010010101100100010100000100

  C. 21 bits matches
  
Practice Problems 2.7
=====================

0x61 0x62 0x63 0x64 0x65 0x66

Practice Problems 2.8
=====================

a = 0110 1001
b = 0101 0101
~a = 1001 0110
~b = 1010 1010
a & b = 0100 0001
a | b = 0111 1101
a ^ b = 0011 1100

Practice Problems 2.9
=====================

A. : 

 * 111
 * 110
 * 101
 * 100
 * 011
 * 010
 * 001
 * 000

B.

Blue | Green = Cyan
Yellow & Cyan = Green
Red ^ Magenta = Blue

Practice Problems 2.10
======================

 *y = *x ^ *y
 *x = *x ^ *y
 *y = *x ^ *y

1. a = a ^ b
2. b = (a ^ b) ^ b => b = a ^ (b ^ b) = a ^ 0 = a
3. a = (a ^ b) ^ a = a ^ (b ^ a) = a ^ (a ^ b) = (a ^ a) ^ b = 0 ^ b = b


Practice Problems 2.11
======================

A. first = last = k + 1
B. *k ^ *k = 0
C. Change "for" condition to be first < last instead of first <= last


Practice Problems 2.12
======================

A. x & 0xff
B. x ^ ~0xff
C. x | 0xff

