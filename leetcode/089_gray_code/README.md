# Gray Code
==
The gray code is a binary numeral system where two successive values differ in only one bit.

Given a non-negative integer n representing the total number of bits in the code, print the sequence of gray code. A gray code sequence must begin with 0.

For example, given n = 2, return [0,1,3,2]. Its gray code sequence is:
```
00 - 0
01 - 1
11 - 3
10 - 2
```
Note:
For a given n, a gray code sequence is not uniquely defined.

For example, [0,2,3,1] is also a valid gray code sequence according to the above definition.

## 理解
 * 一直到N，那是否应该逐渐到N呢？就是从1，2，。。。N
 * 应该不行，但需要以2^n为界限
 * 比较当前size与2^n，到达后返回。
 * 不停的实验。
 * 这道题告诉我一个道理，在算法上面，分为广度和深度两个方向，你要是不知道graycode，想写出来，难比登天。