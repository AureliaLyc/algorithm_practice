# Valid Number
==
Validate if a given string is numeric.
```
Some examples:
"0" => true
" 0.1 " => true
"abc" => false
"1 a" => false
"2e10" => true
```
Note: It is intended for the problem statement to be ambiguous. You should gather all requirements up front before implementing one.

## 理解
可能出现什么？
 1. 第一位可能出现负号
 2. e之后不能出现’.‘
 3. 不考虑m这样的的后缀吧
 4. 先姑且认为前后多余的0是OK的
 5. 不能多余一个'.'
 6. 出现数字之前，不能出现其他的字符。
 7. 如果只出现一个正负号，也是false。好黑！好阴险！
 8. e之后可以出现一个正负号 2e+10 2e-10
 9. 这真是一道好题，我需要看看DFA相关的东西。我自己的这种记录状态的方法看起来太不专业了。