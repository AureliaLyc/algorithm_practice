# Best Time to Buy and Sell Stock III
==
Say you have an array for which the ith element is the price of a given stock on day i.

Design an algorithm to find the maximum profit. You may complete at most two transactions.

Note:
You may not engage in multiple transactions at the same time (ie, you must sell the stock before you buy again).

## 理解
维持两个最大值就可以了？不可以！
 * 如果这个价格分成了两部分，那让你求两部分各自的最大值是容易的。对于一个数组，如何分成两部分？这就是双重循环了。先试试看。结果是不行，超时。
 * 一定是有重复，如何去除重复的部分呢？
 * 目前的解法我还不是非常理解，但竟然通过了。我的基础思想应该是如果希望第二次卖出后，拿到最多的利润，那第二次买的时候要尽可能剩下更多的钱。
 * 每一步的利润如何与前一步联系？需要再次学习动态规划。
 * 这也证明，动态规划真正的难点在于如何串起来。