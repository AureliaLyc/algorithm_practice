# Longest Palindromic Substring
==
Given a string S, find the longest palindromic substring in S. You may assume that the maximum length of S is 1000, and there exists one unique longest palindromic substring.

## 理解
1. 如果要判断是不是回文，就要知道长度，或者两端的位置。
2. 为什么跟1000有关系？
3. 最初认为一个一个查找太费时，而且太笨了，不可能这么简单吧？
4. 于是一直在思考这个1000是不是什么提示？
5. 我最后决定用一个区间来显露字符串的一部分，检查这一部分是否是回文，而且这个区间从最大向最小渐变。这个程序很简单，用了308ms
6. 实在是想不出其他方法了，没禁住诱惑，看了讨论板块。
7. 不能相信的是，4ms的方法就是#3的方法
8. 吃完饭，我坐在桌子前，花了5分钟，一次性提交通过
## 收获
即便是一个笨法，我也应该先实现出来，要相信自己，毕竟不难。