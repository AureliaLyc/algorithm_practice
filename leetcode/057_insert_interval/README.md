# Insert Interval
==
Given a set of non-overlapping intervals, insert a new interval into the intervals (merge if necessary).

You may assume that the intervals were initially sorted according to their start times.

```
Example 1:
Given intervals [1,3],[6,9], insert and merge [2,5] in as [1,5],[6,9].

Example 2:
Given [1,2],[3,5],[6,7],[8,10],[12,16], insert and merge [4,9] in as [1,2],[3,10],[12,16].

This is because the new interval [4,9] overlaps with [3,5],[6,7],[8,10].
```

## 理解
肯定需要迅速的找到合适位置，这就要binary search，否则速度不行。
已经按照start进行了排序，这一点有个好处就是merge的适合容易了。但是从哪里是第一个？麻烦了。
重要信息，给的序列都是不连续的！
我不能复制到一个新的vector里面，这样的话是不是性能差了好多？毕竟有的只需要修改原始的vector然后返回，没有任何内存上的复制。算了，先按照简单的改一下看看速度？
不做了，做了两个方法，这个问题要是细究起来，还真是烧脑袋。需要早上起来清醒的时候做。