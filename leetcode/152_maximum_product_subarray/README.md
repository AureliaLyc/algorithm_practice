# Maximum Product Subarray
==
Find the contiguous subarray within an array (containing at least one number) which has the largest product.

For example, given the array [2,3,-2,4],
the contiguous subarray [2,3] has the largest product = 6.


## 理解
差点被这个例子迷惑，不是说相邻两个数的乘积最大，而是相邻的数组成的数组的连乘。这里就有坑了，因为负负得正。也就是这个问题跟0和负数相关。<br>
我的解法是在追踪相差一个负数的两个数组的乘积，看谁最大<br>
我看了论坛里面的投票最高的解法，是一直乘下去，同时记录最大和最小。<br>
二者的最根本原理虽然相同，但因为不同的角度，导致逻辑得到极大的简化，需要仔细体味一下。