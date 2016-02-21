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

2016 Feb 21. <br>
为什么只需要记录最后一个star的位置？因为✳️代表任意字符串，因此有没有前面的部分是无所谓的，有前面那些，也能匹配上，没有，就用这个✳️进行匹配。这相比于动态规划的方法，要省去很多比较。因为一个星号就需要让动态规划遍历后面所有的字符串，与s进行比较，而且字符串比较费时。贪心算法虽然也在逐一进行比较，但有点类似DFS遍历。动态规划需要BFS遍历所有可能。
另外一个问题，为什么这里不检查pi的值是否大于ps？就是为什么不判断pattern部分是否在越界访问？因为字符串最后一位是0，因此，在比较过程中，不会超过这个0，因此也就不存在越界了。