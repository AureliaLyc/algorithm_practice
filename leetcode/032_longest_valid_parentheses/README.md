# Longest Valid Parentheses
==
Given a string containing just the characters '(' and ')', find the length of the longest valid (well-formed) parentheses substring.

For "(()", the longest valid parentheses substring is "()", which has length = 2.

Another example is ")()())", where the longest valid parentheses substring is "()()", which has length = 4.

## 理解
哦，有难度。难度在于：
 1. 我虽然很容易知道哪里开始不合法了，但比较难以知道从哪里开始合法的。
 2. 如果先来5个左括号，然后来4个右括号，虽然没有不合法的出现，但第一个左括号无法算在内.但是，有一个办法，从开始处减去剩余的左括号就是了。
 3. 题里面说了，只有括号，没有其他，所以无需考虑特殊字符。
 4. 这题还真是有难度，比第30题难很多
 5. 最初一直试图用O（1）的空间算法。但始终无法解决初始位置的问题。不得已，用了stack，空间是O(n)，没办法。但看起来比讨论区的算法好很多。