# Distinct Subsequences
==
Given a string S and a string T, count the number of distinct subsequences of T in S.

A subsequence of a string is a new string which is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (ie, "ACE" is a subsequence of "ABCDE" while "AEC" is not).

Here is an example:
S = "rabbbit", T = "rabbit"

Return 3.

## 理解
给定字符串S和T，数一数在S里面T的子串。看不懂这道题的题意。
看了一下讨论区，里面也有很多人对题意不理解。它的意思是，目标是将S变成T，只用删除的方法，看看有几种方法能变成T。我猜，这种表述方法就是故意引诱人往无法建立状态方程的方向想。
相当于在S中搜索T出现的次数。相当于从起点到终点，是否存在这样一条路径，让它走过去？一定是按照我这个想法来推断的
```
    b b b
    0 0 0
b 0 1 1 1
b 0 0 2 2

  a b b a b b
a 1 1 1 2 2 2
b 0 1 2 2 4 6
  c a b b
a 0 1 1 1
b     1 2
b
```
我决定用记忆方法，不然递推公式我是想不出来了。写完记忆方法，就发现了递推的公式。很神奇。回来再写的时候，当然可以把矩阵变成一个数组，来继续优化空间，从而时间也就更少了。
<br>
2016 Mar 06 第二轮的时候，才算真正理解这道题。我最初的想法是正确的，但因为在计算C(5,2)的时候计算错了，应该为10，我计算成4 * 3 * 2去了，应该是
5!/(5-2)!/2! = 5 * 4 * 3 * 2/3 * 2 * 2 = 5 * 2 = 10。
因为这个计算错了，导致我无法推出递推公式。