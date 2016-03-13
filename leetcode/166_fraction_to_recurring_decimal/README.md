# Fraction to Recurring Decimal
==
Given two integers representing the numerator and denominator of a fraction, return the fraction in string format.

If the fractional part is repeating, enclose the repeating part in parentheses.

For example,

Given numerator = 1, denominator = 2, return "0.5".
Given numerator = 2, denominator = 1, return "2".
Given numerator = 2, denominator = 3, return "0.(6)".

## 理解
需要手动除法，同时检查被除数是否曾经出现过。如果出现过，那就是要重复得部分。
需要考虑的还挺多：
 1. 被除数是不是0？
 2. 最后是不是有负号？
<br>
2016 Mar 13 <br>
本题又一次让我意识到自己面对稍微繁琐的题时，容易忽略一些情况。这类问题首先考虑越界。记住，最小的数以8结尾，最大的数以7结尾。就是说，0被放在正数这部分了。另外，余数和模都带着正负号走的。有些显而易见的习惯，在转化为代码的时候总是被人忽略。