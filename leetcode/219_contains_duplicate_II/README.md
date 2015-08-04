Contains Duplicate II
==
Given an array of integers and an integer *k*, find out whether there are two distinct indices i and j in the array such that nums[i] = nums[j] and the difference between i and j is at most k.

==
这个问题是说，给定一个数组，和一个k值，看看在序号差小于等于k这些组合里面，有没有相等的情况出现。
既然要寻找，那就要先排序？具有消除的特性，检查完一个，就可以把它删掉。
我要维护一个K－1长的数组，始终让其保持排序状态。
* 先判断当前排序后的K-1数组中有没有当前数值，
* 没有，就binarysearch下一个数，并把它替换成下一个数，然后对他进行排序。