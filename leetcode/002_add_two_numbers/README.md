# Add Two Numbers
==
You are given two linked lists representing two non-negative numbers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.<br>

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)<br>
Output: 7 -> 0 -> 8<br>

## 理解
1. 进位问题
2. 既然有进位问题，就需要从个位开始，否则也不知道二者位数是否相等呀
3. 所以先逆转两个list，然后直接生成需要的链表。
4. 晕，原来本来就是从小到大的。
5. 两种策略：
* 每次都new出listnode，看l1/l2/carry是否有不为0的，一直做下去
* 节省内存，那就重用l1/l2，其中有两种策略
** 先遍历一边找出长的那个，在长的那个上存放结果
** 随机找一个来存，但需要做判断，如果为NULL了，需要从另一个不为空的那个取。用眼睛debug还是很需要时间的。