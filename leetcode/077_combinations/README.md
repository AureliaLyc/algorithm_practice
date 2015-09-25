# Combinations
==
Given two integers n and k, return all possible combinations of k numbers out of 1 ... n.

For example,
If n = 4 and k = 2, a solution is:
```
[
  [2,4],
  [3,4],
  [2,3],
  [1,2],
  [1,3],
  [1,4],
]
```

## 理解
需要几个k，就需要几个变量来进行pushback到vector中。所以如果是固定个数的容易处理。
那现在来说，就应该申请一个vector，初始化后，对着每一位进行＋＋操作。
最终思考的结果是，递归调用，当k＝＝0时，不需要pushback了，将当前vector加入res中。