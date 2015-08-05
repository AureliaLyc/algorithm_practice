# Happy Number
==
Write an algorithm to determine if a number is "happy". <br>
A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of it's digits, and repeat the process until the number equals 1(where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers. <br>

**Example:** 19 is a happy number.

--

这个问题，需要知道两个终止条件
# 出现计算结果为1
# 出现计算结果重复的情况。
所以，需要一个set作为结果的检查表。