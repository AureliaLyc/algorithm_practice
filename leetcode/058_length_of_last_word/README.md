# Length of Last Word
==
Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

If the last word does not exist, return 0.

Note: A word is defined as a character sequence consists of non-space characters only.

## 理解
我还以为如果以空格结尾，那就是没有last word。其实应该先把后面的空格给删除。删除方法就是先find_last_not_of(" ")；如果找到了，就前移一位，然后调用erase，否则clear。然后在开始find_last_of(" "),