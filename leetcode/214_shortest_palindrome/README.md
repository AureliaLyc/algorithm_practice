# Shortest Palindrome
==
Given a string S, you are allowed to convert it to a palindrome by adding characters in front of it. Find and return the shortest palindrome you can find by performing this transformation.

For example:

Given "aacecaaa", return "aaacecaaa".

Given "abcd", return "dcbabcd".

## 理解
我第一个想法就是从中间向左扫描中心点，看看哪里开始是回文的中心。提交后4ms。这个是O(n^2)的算法。想来也是，例如 cababababab
如果从中间开始扫描，那每次都到最后才能知道不是回文。这会导致大量的无用搜索。但本题要找的是从最左边开始的最长回文，与前面有一道题，求串内的最长回文是不同的。
但由这道题，让我第一次试图理解KMP算法。KMP算法需要先进行预处理，求出Partial Match Table.
这个PMT是最关键的地方。我先按照算法导论里面的写一个。
我想我算是明白了这个PMT的原理。