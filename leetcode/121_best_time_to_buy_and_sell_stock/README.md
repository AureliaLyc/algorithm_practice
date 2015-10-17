# Best Time to Buy and Sell Stock
==
Say you have an array for which the ith element is the price of a given stock on day i.

If you were only permitted to complete at most one transaction (ie, buy one and sell one share of the stock), design an algorithm to find the maximum profit.

## 理解
单纯考虑上升部分是第一步，因为一次下降后的上升可能超过本次最高点。
需要一个两组数据，一个是当前线段的最低点和最高点，然后是下一段的最低点和最高点。<br>

这个问题根本不需要这么复杂，只需要让当前值与其前面的最低值相减，保存最大的差即可。