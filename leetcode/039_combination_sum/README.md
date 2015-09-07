# Combination Sum
==
Given a set of candidate numbers (C) and a target number (T), find all unique combinations in C where the candidate numbers sums to T.

The same repeated number may be chosen from C unlimited number of times.

Note:
 * All numbers (including target) will be positive integers.
 * Elements in a combination (a1, a2, … , ak) must be in non-descending order. (ie, a1 ≤ a2 ≤ … ≤ ak).
 * The solution set must not contain duplicate combinations.
For example, given candidate set 2,3,6,7 and target 7,
```
A solution set is:
[7]
[2, 2, 3]
```
## 理解
 * 前面对题的理解不够。首先，题说的是最后得到的结果需要从小到大排列好，而给定的初始数组，除了说一定大于0外，没说其他的条件，我开始理解成给定的数组是排列好的，而得到的组合无需管它的顺序。理解的恰好相反<br>
 * 根据给定的提示，既然结果里面的数据需要从小到大排列好，那非常可能是在暗示，需要从最小的开始处理。
 * 有了第二条里面的推断，那这个问题就容易解答了。需要注意的是，我开始的第四个参数为了简单，用了传值，速度比较慢，换成了饮用并且后面做pop，就快多了。
  * 这其实就是backtracking(回溯)。需要看看相关的资料