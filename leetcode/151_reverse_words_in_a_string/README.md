# Reverse Words in a String
==
Given an input string, reverse the string word by word. <br>

For example, <br>
Given s = "the sky is blue", <br>
return "blue is sky the". <br>

Update (2015-02-12):
For C programmers: Try to solve it in-place in O(1) space.

## 理解
应该对着每一个word进行翻转，然后对着整个string进行翻转。需要注意的是，需要删除多余的空格。这意味着，
 1. 每个单词的开始是上一个空格的下一位
 2. 每个单词的结尾是下一个空格
 3. 同时要计算翻转后的空格位置