# ZigZag Conversion
==
The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)
```
P   A   H   N
A P L S I I G
Y   I   R
```
And then read line by line: "PAHNAPLSIIGYIR"

## 理解
这应该就是坐标变换。仔细考虑一下，
1. 第一排字符串，从0开始，每次前进nRows，直到没有
2. 第二排从1开始，每次前进nRows， 直到没有
3. 中间排，从nRows＋1/2 － 1开始，每次前进nRows+1/2，直到没有

* 竟然nRows还能等于偶数，那你题里面应该给出偶数是怎么排的啊！！
* Holy Shit!等于偶数的时候，
* 真的不能想像，大于3的时候是这样的！！！
```
ａ　　　　ｋ　　　　ｕ
ｂ　　　ｊｌ　　　ｔｖ
ｃ　　ｉ　ｍ　　ｓ　ｗ
ｄ　ｈ　　ｎ　ｒ　　ｘ
ｅｇ　　　ｏｑ　　　ｙ
ｆ　　　　ｐ　　　　ｚ
```
