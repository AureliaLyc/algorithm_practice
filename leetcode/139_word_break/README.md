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
2016 Mar 10, 本次仍然首先想到backtracking。随后写出DP。但本轮首次写出的DP，是从一点出发看看谁能前进的更远。这会比看看谁能更前进一步判断更多。因为出发的方法会要求把所有的都遍历完。而看谁能前进一步则可以发现可以走一步的时候中断遍历。值得品味一下。
