# Generate Parentheses
==
 Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

For example, given n = 3, a solution set is:
```
"((()))", "(()())", "(())()", "()(())", "()()()"
```
## 理解
初始字符串是确定的，不停的按照一定的规则进行变换。<br>
应该逐渐的拼接，当刚拼接成的字符串不符合规则时，就跳过去。<br>
当前代码的关键是不能修改当前函数调用的s，因为要用堆栈模仿二叉树。所有变量的变化都发生在函数调用那一行。值得体味。