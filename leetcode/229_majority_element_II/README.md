# Majority Element
==
Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times. The algorithm should run in linear time and in O(1) space.

## 理解
我最开始就知道最多有两个。但有一个问题没有想明白，为什么是三分之一？我的理解希望是四分之一，这样可以变化成原来的题目。因此一直在想办法遇到不同的数时，应该让哪个计数减少。现在想，三分之一也是要化成原来的问题的。如果不同，两个数都减少。因此就变成了三分之一对三分之一，少数部分被两个多数部分同时使用。