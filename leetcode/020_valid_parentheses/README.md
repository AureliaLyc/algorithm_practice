# Valid Parentheses
==
Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.
## 理解
这应该类似一组命令，左括号为push，右括号为pop，pop时，只能pop相应的括号，结束的时候应该为空
