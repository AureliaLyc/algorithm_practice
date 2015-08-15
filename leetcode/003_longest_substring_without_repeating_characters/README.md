# Longest Substring Without Repeating Characters
==
Given a string, find the length of the longest substring without repeating characters. For example, the longest substring without repeating letters for "abcabcbb" is "abc", which the length is 3. For "bbbbb" the longest substring is "b", with the length of 1.

## 理解
试了几次，明白是什么意思了。是要算出给定的字符串中的子字符串，这个子字符串里面没有重复的字符，而且最长。<br>
这样来判断：
1. 假设刚刚遍历过的字符串是最长的
2. 当前字符与刚才的字符串里面某个字符重复，那么就要从那个字符开始计算长度了
3. 每一步都要更新当前的长度，就是i-start
4. 每一次都要试图更新最大长度
5. 记录字符位置的数据结构，可以用vector，也可以用map