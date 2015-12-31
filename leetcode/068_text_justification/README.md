# Text Justification
==
Given an array of words and a length L, format the text such that each line has exactly L characters and is fully (left and right) justified.

You should pack your words in a greedy approach; that is, pack as many words as you can in each line. Pad extra spaces ' ' when necessary so that each line has exactly L characters.

Extra spaces between words should be distributed as evenly as possible. If the number of spaces on a line do not divide evenly between words, the empty slots on the left will be assigned more spaces than the slots on the right.

For the last line of text, it should be left justified and no extra space is inserted between words.

```
For example,
words: ["This", "is", "an", "example", "of", "text", "justification."]
L: 16.

Return the formatted lines as:
[
   "This    is    an",
   "example  of text",
   "justification.  "
]
```
Note: Each word is guaranteed not to exceed L in length.

## 理解
 1. 首先要确定那些单词要在一行，这个是不分空格就能确定的。
 2. 确定后，算出总共需要多少空格，每个空格就一次一次的累加，直到合适为止。
 3. 最后一行个数处理
 4. 大意了，最后一行这个因为没特殊处理，所以错了。shit，因为看见特殊处理一个字符串的，一下子糊涂了，以为二者是一样的。
 5. 看了别人的解法，好！对逻辑的抽象非常优秀，非常值得学习。