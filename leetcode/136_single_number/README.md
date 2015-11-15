# Single Number
==
Given an array of integers, every element appears twice except for one. Find that single one.

Note:
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?


## 理解
这是一个好问题啊。如何利用现有的空间？这个vector，遍历后为何就可以改动了？如何记录呢？没做出来，如果不用set／map，在我的感觉里面就需要用bits来做。<br>
看了答案，原来是用xor来做。这对我是一个极大的启发！
<br>
有人问了另一个类似的问题：如果全部的数都出现2次，但有两个数只出现一次，怎么找出来？解法比本题会更加引申一层。因为本题只能找出一个数来。所以这个新问题就变成了怎么将它变成两个本题的小问题？全部的数字做xor，肯定不为0，因为这两个数不同（本题中全部的数xor后，可能为0，因为可能这唯一出现一次的数是0）。那么就以任意一位不为0的bit位为根据，将所有的数字分成两组，两组内肯定都包含一个只出现一次的数。