# Generate Parentheses
==
 Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

For example, given n = 3, a solution set is:
```
"((()))", "(()())", "(())()", "()(())", "()()()"
```
## 理解
初始字符串是确定的，不停的按照一定的规则进行变换。<br>
应该逐渐的拼接，当刚拼接成的字符串不符合规则时，就跳过去。