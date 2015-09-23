# Simplify Path
==
Given an absolute path for a file (Unix-style), simplify it.

For example,
path = "/home/", => "/home"
path = "/a/./b/../../c/", => "/c"

## 理解
应该是类似堆栈遇到一个命令，就push或pop一下，最终自己产生结果。关键的问题是想到哪些特殊情况。
```
/../
```
上面这个我没想到，我以为这种是非法的，但实验一下，cd命令的确会处理它
