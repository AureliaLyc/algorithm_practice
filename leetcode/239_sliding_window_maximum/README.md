# Sliding Window Maximum
==
Given an array nums, there is a sliding window of size k which is moving from the very left of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves right by one position.

For example,
Given nums = [1,3,-1,-3,5,3,6,7], and k = 3.
```
Window position                Max
---------------               -----
[1  3  -1] -3  5  3  6  7       3
 1 [3  -1  -3] 5  3  6  7       3
 1  3 [-1  -3  5] 3  6  7       5
 1  3  -1 [-3  5  3] 6  7       5
 1  3  -1  -3 [5  3  6] 7       6
 1  3  -1  -3  5 [3  6  7]      7
 ```
Therefore, return the max sliding window as [3,3,5,5,6,7].
<br>
Note:
You may assume k is always valid, ie: 1 ≤ k ≤ input array's size for non-empty array.
<br>
Follow up:
Could you solve it in linear time?

## 理解
直观的理解就是要维护当前窗口内的顺序。怎么好像前面遇到过类似的题目？好像也与窗口有关。用multiset可以完成这个任务。但是这与线性时间要求不符。这还是需要利用KMP类似的方法。因为我已经知道前面的win里面的数了，怎么建立这个关系？
这个真不应该做不出来呀。之前做过一道类似的问题，是在一个vector里面弹出不需要的。好像是那个水桶？还是什么来着，跟刘蕾讨论过的那道题。
在思考过程当中，这个想法曾经闪现过，但有一个问题没想明白，就是如何确保弹出的数安全？其实更加仔细想一下，应该会想出来的。