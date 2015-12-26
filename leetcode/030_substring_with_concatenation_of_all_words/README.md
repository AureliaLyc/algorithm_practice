# Substring with Concatenation of All Words
==
You are given a string, s, and a list of words, words, that are all of the same length. Find all starting indices of substring(s) in s that is a concatenation of each word in words exactly once and without any intervening characters.

For example, given:
```
s: "barfoothefoobarman"
words: ["foo", "bar"]

You should return the indices: [0,9].
```
(order does not matter).

## 理解
有一点不明白，这个each word是说每个都要出现？还是出现多于一个就行？
第二，为什么是一个长度？用于加快搜索吗？但没有限定字符的范围，有什么用处？
第一直觉是用hash来存这个字典，然后用一个set来存已经发现的。不过看起来很笨，不会这么简单吧？
体会到难度了。首先，必须是全部的字符都要出现。其次，类似abca，这样的，有两个组合，就是abc和bca，也就是0，1都要返回。可能这就是要求字符串长度都一样的原因。因此，需要做的是记录每一个组合出现过的位置。

我决定从后面向前面扫描，因为这样就能恰好得到需要的坐标值。如何知道这个区间内的字符符合要求了？向回查最后一个字符串，把它从set里面删除，然后再前进。关键是，如果发现有重复的，怎么能迅速的弹出？
我靠，竟然words里面的字符串是可以重复的。这是什么玩意儿啊！

现在看来，应该就是在找vector里面字符串的所有可能组合的位置。这应该是计算字符串指纹的好应用呀。
我现在也没想明白，这个相等长度的条件应该怎么利用？为什么是相等？如果不相等，其实也可以比较出来呀。为什么说是等长的字符串呢？