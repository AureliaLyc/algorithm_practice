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
