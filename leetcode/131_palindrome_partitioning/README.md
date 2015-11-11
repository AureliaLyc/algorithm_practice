# Palindrome Partitioning
==
Given a string s, partition s such that every substring of the partition is a palindrome.

Return all possible palindrome partitioning of s.

For example, given s = "aab",
Return
```
  [
    ["aa","b"],
    ["a","a","b"]
  ]
```

## 理解
1. 所有的部分都需要是回文。
2. 单个字符就是回文。
3. 有思路了。指针从0出发，作为第一个字符串的开始，第二个从末尾出发向前扫描，看看是不是回文，如果是就压入vector。
4. 然后将剩下的字符串作为新的字符串递归调用下去。
5. 错误在于一个笔误，应该传递引用的res，竟然忘了写&。