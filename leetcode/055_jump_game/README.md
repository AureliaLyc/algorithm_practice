# Jump Game
==
Given an array of non-negative integers, you are initially positioned at the first index of the array.

Each element in the array represents your maximum jump length at that position.

Determine if you are able to reach the last index.

For example:
```
A = [2,3,1,1,4], return true.

A = [3,2,1,0,4], return false.
```

## 理解
这相当于要对所有的点进行标记，是否能联通第一个和最后一个点。想了一下，唯一无法到达末尾的原因就是某个数后面的每一位都无法跨越当前数的距离，就断档了。