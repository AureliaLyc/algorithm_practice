# Longest Consecutive Sequence
==
Given an unsorted array of integers, find the length of the longest consecutive elements sequence.

For example,
Given [100, 4, 200, 1, 3, 2],
The longest consecutive elements sequence is [1, 2, 3, 4]. Return its length: 4.

Your algorithm should run in O(n) complexity.

## 理解
这肯定是一个很有技巧的题目，因为要求 O(n)复杂度。我看有人说用unordred_set，这怎么行？用了这个，还不如先排序呢，或者开个大数组。我看了stefan的标题，说走过每一个streak就行了。想不明白怎么走。
我是无论如何也想不到，用hashmap得算法，复杂度是O（n）。
我看了讨论区的内容，用的都是unordered_map。来维护当前能遇到的连续数有多长。
不知道如果有人告诉我可以用hashmap来作，我能否做出来。