# Roman to Integer
==
Given a roman numeral, convert it to an integer.

Input is guaranteed to be within the range from 1 to 3999.

## 理解
罗马数字：
```
I = 1

V = 5

X = 10

L = 50

C = 100

D = 500

M = 1000
```
* 如果小的基数在大的基数前面，是减法，否则是加法
** 例如 IV=5-1=4, VI=5+1=6, XIII=10+1+1+1=13
* 对于大于X的数，只有

* 被前后这个关键字带走了，其实只有一种特殊情况，当前数比前一个小，需要减去当前数，否则一直向上加。