# Plaindrome Number
==
Determine whether an integer is a palindrome. Do this without extra space.

## 理解
* 最初，我想转化为string来进行比较
* 但要求不能用新的内存，想到是否能翻转它
* 但又一想，全部翻转不合算，翻转一半就够了，因为之前判断链表的时候，也是判断一半。
这里有几个需要注意的地方：
1. 小于0的不行
2. 以0结尾的不行
3. 奇数个数的，需要将个位加过来比较一次，而不能将多余的个位减去进行比较，容易进入0的比较