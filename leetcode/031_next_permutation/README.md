# Next Permutation
==
Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

If such arrangement is not possible, it must rearrange it as the lowest possible order (ie, sorted in ascending order).

The replacement must be in-place, do not allocate extra memory.

Here are some examples. Inputs are in the left-hand column and its corresponding outputs are in the right-hand column.
```
1,2,3 → 1,3,2
3,2,1 → 1,2,3
1,1,5 → 1,5,1
```
## 理解
就是给定一组数，如果把所有的排列组合都列出来，并排序，给出当前组合的下一个。而如果本来就是最大的那个，那就给出最小的那个<br>
从右边开始找，找到非排好序的那个，把它们颠倒顺序，然后把剩下的那个跟刚好比他大的那个交换。