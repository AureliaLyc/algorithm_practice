# Decode Ways
==
A message containing letters from A-Z is being encoded to numbers using the following mapping:
```
'A' -> 1
'B' -> 2
...
'Z' -> 26
```
Given an encoded message containing digits, determine the total number of ways to decode it.

For example,
Given encoded message "12", it could be decoded as "AB" (1 2) or "L" (12).

The number of ways decoding "12" is 2.

## 理解
f[1]=1
f[n]=x
f[n+1]

 * 当前数字为0，那只能与前面的1/2结合，这就只能计算1/2前面的那个个数，所以这应该是从右向左推进
 * 当前数字为0，那么只能再前进两步，因为这是一条独木桥
 * 当前数字为7/8/9，那么看前面的数字，如果为1，有两条，如果为其他数字，仅有一条
 * 当前数字为1-6，那么看前面的数字，如果为1/2，有三条，如果为其他数字，不变。
 * 我靠，空字符串竟然算0，不能改变或者非法的字符出现有什么意义？
 * 做出的第一个版本逻辑不好，在修改之后，变得简单明了。看来我非常需要用纸来写代码？等我真的面试facebook再说吧。