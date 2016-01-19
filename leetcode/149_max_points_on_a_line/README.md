# Max Points on a Line
==
Given n points on a 2D plane, find the maximum number of points that lie on the same straight line.

## 理解
这个问题好难！一点思路都没有呀。如果想知道一条线上又多少个点，那就要都走到，才能数出来。但这里有重复的工作吗？两点确定一条直线。从两点可以算出什么特征来表明一条线？然后放到map里面数。一定是可以的！
这个方法很难对付重复的点。而且如果四个点在同一直线上，根据这四个点，会画6次同一条线，但仅仅有4个点。看来这个方法不行。
我觉得这道题好没意思啊
可以用double做hash，我真是晕了头了。什么都可以做hash的，指针都可以，double当然也可以了。
然后，我的想法的方向基本正确，但有一点，我不应该纠结于把全部的线放入一个map里面。应该数当前能拿到的最大数目就可以了。