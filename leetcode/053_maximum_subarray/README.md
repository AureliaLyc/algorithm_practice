# Maximum Subarray
==
Find the contiguous subarray within an array (containing at least one number) which has the largest sum.

```
For example, given the array [−2,1,−3,4,−1,2,1,−5,4],
the contiguous subarray [4,−1,2,1] has the largest sum = 6.
```

## 理解
动态规划。但题里面有个建议，用divide-conquer来做。<br>
我最初遇到的困难是，如果这个最长的子串被divide了，怎么办？而且我还不想重复计算？后来参考了论坛里面的讨论，原来不想重复计算是不行的。其原理就是找到任意一个元素，向两边扩张，并记录最大的和，然后加上自己，就是当前元素的最大值子串。这里面包含了大量的重复计算，真算不得subtle.