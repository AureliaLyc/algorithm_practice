# Trapping Rain Water
==
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.

For example,
Given [0,1,0,2,1,0,1,3,2,1,2,1], return 6.

## 理解
有意思。对于人来说，很容易就能发现能盛水的地方，可是程序就有点困难了。
 1. 我第一个不走寻常路的想法是每次都让他们全部都减一，这个肯定效率非常的低
 2. 需要有一个归一化的方法。
 3. 我能想到当初stefan在解另外一道关于水桶的题时的解法，但我为什么就没有能够按照这个思路来解决这道题呢？