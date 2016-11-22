Practice Problem 2.5
====================

Consider the following three calls to show_bytes:

  A. LE:0x21, BE:0x87
  B. LE:0x2143, BE:0x8765
  C. LE:0x214365, BE,0x876543

Practice Problem 2.6
====================

3510593 (base-10), int:0x00359141 (base-16), float:0x4a564504
  A. 
    * int:  0000 0000 0011 0101 1001 0001 0100 0001
    * float:0100 1010 0101 0110 0100 0101 0000 0100

  B. 
    * int:  00000000001101011001000101000001
    * float:  01001010010101100100010100000100

  C. 21 bits matches
  
Practice Problem 2.7
=====================

0x61 0x62 0x63 0x64 0x65 0x66

Practice Problem 2.8
=====================

a = 0110 1001
b = 0101 0101
~a = 1001 0110
~b = 1010 1010
a & b = 0100 0001
a | b = 0111 1101
a ^ b = 0011 1100

Practice Problem 2.9
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

Practice Problem 2.10
======================

 *y = *x ^ *y
 *x = *x ^ *y
 *y = *x ^ *y

1. a = a ^ b
2. b = (a ^ b) ^ b => b = a ^ (b ^ b) = a ^ 0 = a
3. a = (a ^ b) ^ a = a ^ (b ^ a) = a ^ (a ^ b) = (a ^ a) ^ b = 0 ^ b = b


Practice Problem 2.11
======================

A. first = last = k + 1
B. *k ^ *k = 0
C. Change "for" condition to be first < last instead of first <= last

Practice Problem 2.12
======================

A. x & 0xff
B. x ^ ~0xff
C. x | 0xff

Practice Problem 2.13
======================

    int bool_or(int x, int y) {
        int result = bis(x, y);
        return result;
    }

    int bool_xor(int x, int y) {
        int valid_x = bis(bic(x, y), bic(y, x));
        return result;
    }

Practice Problem 2.14 
======================

    x=0x66=0110 0110, y=0x39=0011 1001
    
    x & y = 0010 0000
    x | y = 0111 1111
    ~x | ~y = 1001 1001 | 1100 0110 = 1101 1111
    x & !y = 0110 0110 & 0000 0000 = 0000 0000
    x && y = 0000 0001
    x || y = 0000 0001
    !x || !y = 0000 0000
    x && ~y = 0000 0001

Practice Problem 2.15 
======================

    int equals(uint x, uint y) {
        return !(x ^ y)
    }

Practice Problem 2.16
=====================

* x = 0xC3 = 1100 0011, (x << 3) = 0001 1000 = 0x18, logical(x >> 2) = 0011 0000 = 0x30, arthmetic(x >> 2) = 11110000 = 0xf0
* x = 0x75 = 0111 0101, (x << 3) = 1010 1000 = 0xa0, logical(x >> 2) = 0001 1101 = 0x1d, arthmetic(x >> 2) = 0001 1101 = 0x1d
* x = 0x87 = 1000 0111, (x << 3) = 0011 1000 = 0x38, logical(x >> 2) = 0010 0001 = 0x21, arthmetic(x >> 2) = 1110 0001 = 0xe1
* x = 0x66 = 0110 0110, (x << 3) = 0011 0000 = 0x30, logical(x >> 2) = 0001 1001 = 0x19, arthmetic(x >> 2) = 0001 1001 = 0x19


Practice Problem 2.17
=====================

0xe = 1110, B2U(0xe) 8 + 4 + 2 = 14, = B2T(0xe) = -8 + 4 + 2 = -2
0x0 = 0000, B2U9(0x0) = 0, B2T(0x0) = 0
0x5 = 0101, B2U(0x5) = 4 + 1 = 5, B2T(0x5) = 4 + 1 = 5
0x8 = 1000, B2U(0x8) = 8, B2T(0x8) = -8
0xd = 1101, B2U(0xd) = 8 + 4 + 1 = 13, B2T(0xd) = -8 + 4 + 1 = -3
0xf = 1111, B2U(0xf) = 8 + 4 + 2 + 1 = 15, B2T(0xf) = -8 + 4 + 2 + 1 = -1

Practice Problem 2.18
=====================

a. 0x1b8 = 0000 0001 1011 1000 = 2^8 + 2^7 + 2^5 + 2^4 + 2^3 = 256 + 128 + 32 + 16 + 8 = (+ 256 128 32 16 8) = 440
b. 0x14 = 0001 0100 = 2^5 + 2^3 = 16 + 4 = 20
c. 0xff ff fe 58 = 0xfe58 = 1111 1110 0101 1000 = Practice = -2^9  + 2^6 + 2^4 + 2^3 = (+ -512 64 16 8) = -424
