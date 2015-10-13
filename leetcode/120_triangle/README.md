# Triangle
==
Given a triangle, find the minimum path sum from top to bottom. Each step you may move to adjacent numbers on the row below.

For example, given the following triangle
```
[
     [2],
    [3,4],
   [6,5,7],
  [4,1,8,3]
]
```
The minimum path sum from top to bottom is 11 (i.e., 2 + 3 + 5 + 1 = 11).

Note:
Bonus point if you are able to do this using only O(n) extra space, where n is the total number of rows in the triangle.

## 理解
```
[
     [2],
    [5,6],
   [6,5,7],
  [4,1,8,3]
]
```
变为
```
[
     [2],
    [5,6],
   [11,10,13],
  [4,1,8,3]
]
```
变为
```
[
     [2],
    [5,6],
   [11,10,13],
  [15,11,18,16]
]
```

这个方法应该不符合NOTE里面的要求，把这些空间全给用了？<br>
 * 我想的方法是从上到下，可以看见必须要进行最后一次的排序。
 * 但如果从下到上，就不一样了。

这告诉我，往往从大到校容易一些，一个方向难了，反方向再看看。