Practice Problem 1
==================


* x = [01101], ~x = [10010], incr(~x) = [10011]
* x = [01110], ~x = [10001], incr(~x) = [10010]
* x = [11000], ~x = [00111], incr(~x) = [01000]
* x = [11111], ~x = [00000], incr(~x) = [00001]
* x = [10000], ~x = [01111], incr(~x) = [10000]


Practice Problem 3
==================

* x = [0110*1*], k=0, [1001*1*]
* x = [011*1*0], k=1, [100*1*0]
* x = [1*1*000], k=3, [0*1*000]
* x = [1111*1*], k=0, [0000*1*]
* x = [*1*0000], k=4, [*1*0000]

Practice Problem 4
==================

int rightmost_one(unsigned x)
{
    return x & -x;
}