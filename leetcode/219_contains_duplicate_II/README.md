Contains Duplicate II
==
Given an array of integers and an integer *k*, find out whether there are two distinct indices i and j in the array such that nums[i] = nums[j] and the difference between i and j is at most k.

==
想了好半天，最终明白，什么标准库都可以用啊，尤其是hashset什么的。现在的方法是，维持一个unorderedSet，保证它的size小于k，不停的往里面插入当前值，如果插入不成功，证明有重复的，那就返回true。