# Different Ways to Add Parentheses
==
Given a string of numbers and operators, return all possible results from computing all the different possible ways to group numbers and operators. The valid operators are +, - and *.


Example 1
Input: "2-1-1".
```
((2-1)-1) = 0
(2-(1-1)) = 2
```
Output: [0, 2] <br>


Example 2
Input: "2*3-4*5"
```
(2*(3-(4*5))) = -34
((2*3)-(4*5)) = -14
((2*(3-4))*5) = -10
(2*((3-4)*5)) = -10
(((2*3)-4)*5) = 10
```
Output: [-34, -14, -10, -10, 10]

## 理解
这应该是backtracking的问题。backtracking会有好多重复呀. 我准备先解析，分离出数字和操作符，然后.
回想整个思考过程，我曾经想过要这么做，但因为觉得有好多重复计算，而没有实施。一直觉得，如果已经知道3个数的结果，再添加一个数，应该是基于前一个结果。因此思路就被束缚在这个基于前一个结果的这个方向上。但这个方向非常不好写代码，因为添加一个数，会增加N多种组合。另外，现在的办法在前面也有一个题是这么做的，但忘了是哪个题了。



