# Best Time to Buy and Sell Stock IV
==
Say you have an array for which the ith element is the price of a given stock on day i.

Design an algorithm to find the maximum profit. You may complete at most k transactions.

Note:
You may not engage in multiple transactions at the same time (ie, you must sell the stock before you buy again).

## 理解
我刚才把前三道重做了一遍。感觉前两道非常的简单。第三道因为想了半天之前的解法，有点难。
本道题更难。我想应该是用记忆的解法。求两点之间交易k次的最大值。这岂非是三维的？那内存肯定受不了。
所以必然不是三维的。
这可怎么办？
不行，我先写一个三维的，看看怎么样。要是真爆了再说。
我对问题III试着写了一个记忆的，根本不行，原因在于无法记录内部的关系，也就是说，从记忆的坐标出发，无法从中剔除重复的部分。这个很不好。
到底应该怎么做呢？今晚做不出来就要看讨论区。
放弃！
哎呀，竟然是被那个极限case给搞死了。我第一个解法思路是正确的。TLE不是因为第一个解法的问题，是因为那个极限case必须用贪心算法才能搞定。shit