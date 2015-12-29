# Wildcard Matching
==
Implement wildcard pattern matching with support for '?' and '*'.

```
'?' Matches any single character.
'*' Matches any sequence of characters (including the empty sequence).

The matching should cover the entire input string (not partial).

The function prototype should be:
bool isMatch(const char *s, const char *p)

Some examples:
isMatch("aa","a") → false
isMatch("aa","aa") → true
isMatch("aaa","aa") → false
isMatch("aa", "*") → true
isMatch("aa", "a*") → true
isMatch("ab", "?*") → true
isMatch("aab", "c*a*b") → false
```

## 理解
上一道题是什么样子来着？
单纯的DP对本题不是最快的，因为只要有一个＊，就意味着我要遍历所有。而贪心算法就是深度优先，这样会更早的返回true，当然对于返回false，两者是一样的。