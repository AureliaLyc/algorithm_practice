# Word Break II
==
Given a string s and a dictionary of words dict, add spaces in s to construct a sentence where each word is a valid dictionary word.

Return all such possible sentences.


For example, given
```
s = "catsanddog",
dict = ["cat", "cats", "and", "sand", "dog"].

A solution is ["cats and dog", "cat sand dog"].
```

## 理解
类似的题目，肯定都是动态规划，以避免重复的分词。
今天不做了，累了，明天肯定能做出来。你信不信。
我一遍建立字符串，一边构建这个图，发现速度太慢，会超时。
看来，需要先建立这个图，然后才能反向建立这些字符串。而且这个图，应该反向建立，否则还是会有很多无用的处理。
我发现，虽然明白原理，但想转化为代码真的很困难。
看来我的确想多了，先判断是否能成功，然后用简单的backtracking就行了。
