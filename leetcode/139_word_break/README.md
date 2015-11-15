# Word Break
==
Given a string s and a dictionary of words dict, determine if s can be segmented into a space-separated sequence of one or more dictionary words.

For example, given
```
s = "leetcode",
dict = ["leet", "code"].
```
Return true because "leetcode" can be segmented as "leet code".

## 理解
写了一个backtracking的，超时了。<br>
感觉应该是找到一个不可能的，从而尽早的退出。每一次分词之后，是否能找到一个完全不可能的？看见别人用了DP，没想到呀。怎么会是DP呢？还得再看一边书里面的DP那一章。
