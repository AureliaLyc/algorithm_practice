# Permutation Sequence
==

The set [1,2,3,…,n] contains a total of n! unique permutations.

By listing and labeling all of the permutations in order,
We get the following sequence (ie, for n = 3):
```
"123"
"132"
"213"
"231"
"312"
"321"
```
Given n and k, return the kth permutation sequence.

Note: Given n will be between 1 and 9 inclusive.

## 理解
这个全部列出来肯定会太慢了。应该是根据位置，直接得出。