# Interleaving String
==
Given s1, s2, s3, find whether s3 is formed by the interleaving of s1 and s2.

For example,
Given:
s1 = "aabcc",
s2 = "dbbca",

When s3 = "aa db bc bc ac", return true.
When s3 = "aa db bb accc", return false.

## 理解
竟然不等长的也算，例如"a","", "a"
那就不能按照我刚才写的那样来做了
那怎么样设定状态呢？我需要将它前面和后面都去掉，变成等长的。不然太复杂了。怎么去掉前面和后面呢？
对了，让长的那个前面跟s3，对比，
"aabc"
"abad"
"aabacbad"
这个也是？？shit
晕啊，早就做出来，但差了一点点，可能是因为头有点晕，一直没看出来。