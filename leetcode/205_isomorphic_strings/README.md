# Isomorphic Strings
==
Given two strings s and t, determine if they are isomorphic. <br>
Two strings are isomorphic if the characters in s can be replaced to get t. <br>
All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character but a character may map to itself. <br>

For example: <br>

* Given "egg", "add", return true.
* Given "foo", "bar", return false.
* Given "paper", "title", return true.

Note: <br>
You may assume both s and t have the same length.

==
对第一个字符串编码，进行替换，然后对第二个进行同样的动作，最后比较返回的两个字符串。
我开始用了一个unordered_map，但速度不够，我想原因在于我对两个字符串进行了完全的编译，这是不好的方法，另外，此处用unordered_map不合适，因为字符的个数是已知。因此，后来我用了vector，里面包含1024个元素。然后对两个字符串进行同步编译比较。得到较好对结果。