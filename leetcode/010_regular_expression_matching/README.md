# Regular Expression Matching
==
Implement regular expression matching with support for '.' and '*'.
```
'.' Matches any single character.
'*' Matches zero or more of the preceding element.

The matching should cover the entire input string (not partial).

The function prototype should be:
bool isMatch(const char *s, const char *p)

Some examples:
isMatch("aa","a") → false
isMatch("aa","aa") → true
isMatch("aaa","aa") → false
isMatch("aa", "a*") → true
isMatch("aa", ".*") → true
isMatch("ab", ".*") → true
isMatch("aab", "c*a*b") → true
```
## 理解
这里面因为只有.*，所以只针对单个字符进行匹配的。因此需要看看能否走完整个p。
遍历p的时候，需要确认当前这个字符能否让s里面的字符向前走，或者说走到哪里。
用s长的一个数组，标记每次能到达的所有点。这样看看最后能不能到大p的最后。我看见别人的解法更加简短，虽然想法都是一样的。需要学习。不过好歹我也自己做出来了。