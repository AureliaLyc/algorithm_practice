# Remove Duplicate Letters
==
Given a string which contains only lowercase letters, remove duplicate letters so that every letter appear once and only once. You must make sure your result is the smallest in lexicographical order among all possible results.

Example:
```
Given "bcabc"
Return "abc"
```
```
Given "cbacdcbc"
Return "acdb"
```

## 理解
我最初是在统计所有字母出现的位置，然后从a开始，每次试图找到一个它后面有全部字母的这个字母。这里面有很多的重复比较。随后看了贪心算法那一章，感觉没有太多的帮助。因为我想像不出来怎么利用贪心这个特性。我曾经从后向前遍历，但因为只能处理最前面的字母，而失败。<br>
看了讨论区的解法，是记录当前字符后面，其他字符的重复次数，从而知道是否可以丢弃这个其他字符。因此能够避免很多比较。
