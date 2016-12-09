Practice Problem 2.5
====================

Consider the following three calls to show_bytes:

1. LE:0x21, BE:0x87
2. LE:0x2143, BE:0x8765
3. LE:0x214365, BE,0x876543

Practice Problem 2.6
====================

3510593 (base-10), int:0x00359141 (base-16), float:0x4a564504

1. 
  * int:  0000 0000 0011 0101 1001 0001 0100 0001
  * float:0100 1010 0101 0110 0100 0101 0000 0100
2. 
  * int:  00000000001101011001000101000001
  * float:  01001010010101100100010100000100
3. 21 bits matches
  
Practice Problem 2.7
=====================

0x61 0x62 0x63 0x64 0x65 0x66

Practice Problem 2.8
=====================

1. a = 0110 1001
2. b = 0101 0101
3. ~a = 1001 0110
4. ~b = 1010 1010
5. a & b = 0100 0001
6. a | b = 0111 1101
7. a ^ b = 0011 1100

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

 * Blue | Green = Cyan
 * Yellow & Cyan = Green
 * Red ^ Magenta = Blue

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

1. first = last = k + 1
2. *k ^ *k = 0
3. Change "for" condition to be first < last instead of first <= last

Practice Problem 2.12
======================

1. x & 0xff
2. x ^ ~0xff
3. x | 0xff

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

* 0xe = 1110, B2U(0xe) 8 + 4 + 2 = 14, = B2T(0xe) = -8 + 4 + 2 = -2
* 0x0 = 0000, B2U9(0x0) = 0, B2T(0x0) = 0
* 0x5 = 0101, B2U(0x5) = 4 + 1 = 5, B2T(0x5) = 4 + 1 = 5
* 0x8 = 1000, B2U(0x8) = 8, B2T(0x8) = -8
* 0xd = 1101, B2U(0xd) = 8 + 4 + 1 = 13, B2T(0xd) = -8 + 4 + 1 = -3
* 0xf = 1111, B2U(0xf) = 8 + 4 + 2 + 1 = 15, B2T(0xf) = -8 + 4 + 2 + 1 = -1

Practice Problem 2.18
=====================

* a. 0x1b8 = 0000 0001 1011 1000 = 2^8 + 2^7 + 2^5 + 2^4 + 2^3 = 256 + 128 + 32 + 16 + 8 = (+ 256 128 32 16 8) = 440
* b. 0x14 = 0001 0100 = 2^5 + 2^3 = 16 + 4 = 20
* c. 0xff ff fe 58 = 0xfe58 = 1111 1110 0101 1000 = Practice = -2^9  + 2^6 + 2^4 + 2^3 = (+ -512 64 16 8) = -424
* d. 0xff ff fe 74 = 0xfe74 = 1111 1110 0111 0100 = -2^9 + 2^6 + 2^5 + 2^4 + 2^2 = (+ -512 64 32 16 4) = -396
* e. 0x44 = 0100 0100 = 2^6 + 2^2 = 64 + 4 = 68 
* f. 0xfffffec8 = 0xfec8 = 1111 1110 1100 1000 = -2^9 + 2^7 + 2^6 + 2^3 = (+ -512 128 64 8) = -312
* g. 0x10 = 0001 0000 = 16
* h. 0xc = 1100 = 2^3 + 2^2 = 12
* i. 0xfffffeec = 0xfeec = 1111 1110 1110 1100 = -2^9 + (2^7 + 2^6...) - ( 2^4 + 2^1 + 2^0) = -2^9 + 255 - (16 + 2 + 1) = (+ -512 255 -19) = -276
* j. 0x20 = 0010 0000 = 32


Practice Problem 2.19
=====================

* -8 = 1000 = 8
* -3 -> 3 = 0011 -> 0011 -1 -> 0010 -> 1101 ... 16 - 3 = 13 = 1101 
* -2 -> 16 -2 = 14 = 1110
* -1 -> 16 -1 = 15 = 1111
* 0 -> 0000
* 5 -> 0101


Practice Problem 2.20
=====================

* -8 = 1000 = -8 + 1*2^4 = 8
* -3 = -3 + 1*2^4 = 13
* -2 = -2 + 1*2^4 = 14
* -1 = -1 + 1*2^4 = 15
* 0 = 0 + 0*2^4 = 0
* 5 = 5 + 0*2^4 = 5

Practice Problem 2.21
=====================

Expression, Type, Evaluation
1. -2147483647-1 == 2147483648U, unsigned, true
2. -2147483647-1 < 2147483647, signed, true
3. -2147483647-1U < 2147483647, unsigned, -2147483647U-1 < 2147483647, 2147483649 -1 < 2147483647  = false
4. -2147483647-1 < -2147483647, signed, true
5. -2147483647-1U < -2147483647, unsigned, -2147483647U - 1 < -2147483647U, 2147483649 -1 < 2147483649 = true



Practice Problem 2.22
=====================

1. 1011 = (-8) + 2 + 1 = -5
2. 11011 = (-16 + 8) + 2 + 1 = -5
3. 111011 = (-32 + 16 + 8) + 2 + 1 = -5

Practice Problem 2.23
=====================

    int fun1(unsigned word) {
        return (int) ((word << 24) >> 24);
    }
    
    int fun2(unsigned word) {
        return ((int) word << 24) >> 24;
    }

1. x = 0x00000076, fun1(x) = 0x76, fun2(x) = 0x76
2. x = 0x87654321, fun1(x) = 0x21, fun2(0x21)
3. x = 0x000000C9
4. x = 0xEDCBA987

Practice Problem 2.24
=====================

* Unsigned
  1. 0 = 0
  2. 2 = 2
  3. 9 = 1
  4. 11 = 3
  5. 15 = 7
* Two's complement
  1. 0 = 0
  2. 2 = 2
  3. -7 -> T2U(-7) -> 9 -> 1
  4. -5 -> T2U(-5) -> 11 -> 3
  5. -1 -> T2U(-1) -> 15 -> 1111 -> -1

Practice Problem 2.25
=====================

1. If length = 0, length - 1 = 0xffffffff = (2^32 - 1), so we go beyond the end of the "a" array.
2. change the loop condition with "i < length"

Practice Problem 2.26
=====================

1. when strlen(s) < strlen(t)
2. when unsigned int - unsigned int returns a negagive number, the unsigned value will always be greater than zero.
return strlen(s) > strlen(t)

Practice Problem 2.27
=====================

    int uadd_ok(unsigned x, unsigned y) {
        return (x + y) >= x;
    }

Practice Problem 2.28
=====================

1. 0 = 0, 16 - 0 = 16, 0x0
2. 5 = 5, 16 - 5 = 11, 0xb
3. 8 = 8, 16 - 8 = 8, 0x8
4. D = 13, 16 - 13 = 3, 0x3
5. F = 15, 16 - 15 = 1, 0x1

Practice Problem 2.29
=====================

* [10100] + [10001], 20 + 17 = 37
  * T = -12 + -15 = 100101 = -32 + 4 + 1 = -27 -> 00101 = 5
* [11000] + [11000], 24 + 24 = 48, -8 + -8 = -16
  * T = 110000 = -32 + 16 = -16, 10000 = -16
* [10111] + [01000] = 11111 = T = -1
* [00010] + [00101] = 00111 = U = T = 4 + 2 + 1 = 7
* [01100] + [00100] = 10000, U = 16, T = -16

Practice Problem 2.30
======================

    /* Determine whether arguments can be added without overflow */
    int tadd_ok(int x, int y) {
        int sum = x + y;
        int neg_over = (x < 0 && y < 0 && sum >= 0);
        int pos_over = (x >= 0 && y >= 0 && sum < 0);
        return !neg_over && !pos_over;
    }


Practice Problem 2.31
=====================

    int tadd_ok(int x, int y) {
        int sum = x+y;
        return (sum-x == y) && (sum-y == x);
    }
    
    x = 120
    y = 130
    
Practice Problem 2.32
=====================

Practice Problem 2.33
=====================

Hex Decimal Binary Decimal Hex
0   0       0000   0, 0000, 0
5   5       0101   -5, 1011, B
8   -8      1000   -8, 1000, 8
D   -3      1101   3, 0011, 3
F   -1      1111   1, 0001, 1

Web Aside DATA:TNEG
===================
