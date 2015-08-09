# Compare Version Numbers
==
Compare two version numbers version1 and version2.
If version1 > version2 return 1, if version1 < version2 return -1, otherwise return 0.

You may assume that the version strings are non-empty and contain only digits and the . character.
The . character does not represent a decimal point and is used to separate number sequences.
For instance, 2.5 is not "two and a half" or "half way to version three", it is the fifth second-level revision of the second first-level revision.

Here is an example of version numbers ordering:
```
0.1 < 1.1 < 1.2 < 13.37
```
这个问题要用点进行分割，然后逐级的进行比较。
但真的先分割然后比较会比较不合算，需要注意一点atoi/stoi这两个函数，对于1.3这样的数，会直接返回1，所以可以直接进行转换而不必在意后面的字符串。这是我之前没有考虑到的。对字符串的理解需要加强。