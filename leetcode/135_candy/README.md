# Candy
==
There are N children standing in a line. Each child is assigned a rating value.

You are giving candies to these children subjected to the following requirements:

Each child must have at least one candy.
Children with a higher rating get more candies than their neighbors.
What is the minimum candies you must give?

## 理解
第一眼看去，毫无头绪呀。
这个应该考虑向上或向下的边。那么就是找到每一个谷底，然后一个台阶加一个。最高的那个取高的边的值。
如果我去找峰谷的位置，那会很费劲呀。我想一定不是找这个位置，否则代码会很臃肿。
我现在要这么做：
 1. 从左向右扫描，找上升的部分
 2. 从右向左扫描，找下降的部分。
 3. 都存到一个数组里面。第二次的时候，两次都要与当前的值比较，取大得那个。
 4. 返回sum