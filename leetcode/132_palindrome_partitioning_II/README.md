# Palindrome Partitioning II
==
Given a string s, partition s such that every substring of the partition is a palindrome.

Return the minimum cuts needed for a palindrome partitioning of s.

```
For example, given s = "aab",
Return 1 since the palindrome partitioning ["aa","b"] could be produced using 1 cut.
```

## 理解
哎呀，我这是怎么了，有点力不从心了啊。头晕晕的。
先用backtracking的方法，发现太慢。进而发现有很多的重复，看来又是动态规划。需要记忆。
做出来的是32ms。我想来想去，觉得自己对动态规划还是有点困难。
对于本题，我最初想backtracking，这肯定是不对，因为有重复。
后来想建立表格，这样就不用每次都查询了。但看起来这也很慢，因为最快的是4ms。
仔细一看，发现这个graph是无用的，因为仅对赋值后的点才用来计算DP。
因此去除这个graph后，速度提高到12ms。