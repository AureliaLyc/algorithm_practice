# Excel Sheet Column Title
==
Given a positive integer, return its corresponding column title as appear in an Excel sheet.

For example:
```
    1 -> A
    2 -> B
    3 -> C
    ...
    26 -> Z
    27 -> AA
    28 -> AB
```
还是26进制转换。<br>
一点思考：
 1. 如何判断是多少进制？将数字从0开始对应起来，看看何处开始进位了，就是多少进制。所以冷不丁看起来是27进制，但因为每26次进位一次，所以是26进制。
 2. 为了求得模，那需要当前数减一。