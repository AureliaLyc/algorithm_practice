# Container with Most Water
==
Given n non-negative integers a1, a2, ..., an, where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0). Find two lines, which together with x-axis forms a container, such that the container contains the most water.

## 理解
1. 容量由较小的那个高度，以及距离左右边界来决定
2. 那么需要知道边界位置。
3. 用什么数据结构维护呢？
4. 我后来先进行了排序，然后从最小的开始处理，总是让两边比处理的这个高。然后计算面积。这个方法有几个问题
    1. 排序是否必要？
    2. 为什么要维护左右边界？每次一比较就好了
    3. 每次都要计算面积
5. 这个问题的关键是有个规律，就是如果两边不动，里面有好些个面积是不需要计算的，就是高度小于二者高度那些，因此，只需要比较高度就跳过了他们
6. 哪些可能超过最大面积？就是最小高度高于刚才的那个， 才有可能。因为一方面在缩小距离，那高度小于的，根本无需计算。
7. 我没有能够抓住这个关键点，导致我想到的方法是56ms
8. 大牛Stefan Pochmann给的这个方法简直让我惊叹不已，太有洞察力了！！