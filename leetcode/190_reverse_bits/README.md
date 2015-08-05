# Reverse Bits
==
Reverse bits of a given 32 bits unsigned integer.

For example, given input 43261596 (represented in binary as
00000010100101000001111010011100), return 964176192 (represented in binary as 00111001011110000010100101000000).

我想最简单的方法是不停的向右位移，并与1进行&，总给位移32次，将每一次位移后的值加在返回值上，返回值向左进位。
32bit公共是8个4bits，那么是否可以建立一个4bits的表？