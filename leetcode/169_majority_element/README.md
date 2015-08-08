# Majority Element
==
Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.

You may assume that the array is non-empty and the majority element always exist in the array.

天哪，竟然有这么精妙的算法：<br>
![A Linear Time Majority Vote Algorithm](http://www.cs.utexas.edu/~moore/best-ideas/mjrty/index.html)
主要的思想就是让互不相同的元素对撞消失，那最后剩下的就是maj。好厉害！算法真是让人上瘾啊。
* 当然可以放到map里面数个数，但这样内存消耗大很多，而且要进行查找
* 也可以进行排序，位于中间的那个，肯定就是maj，这个也耗时O(nlogn).
* 上面给的算法在O(n)的时间内，用了O(1)的空间。针对这个问题给出了完美的解。
