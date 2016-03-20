# Repeated DNA Sequences
==
All DNA is composed of a series of nucleotides abbreviated as A, C, G, and T, for example: "ACGAATTCCG". When studying DNA, it is sometimes useful to identify repeated sequences within the DNA.

Write a function to find all the 10-letter-long sequences (substrings) that occur more than once in a DNA molecule.

For example,
```
Given s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT",

Return:
["AAAAACCCCC", "CCCCCAAAAA"].
```

## 理解
属于字符串查找，我今晚和明天把算法导论里面的字符串匹配那一章看明白了，再回来做这个。<br>
2016 Mar 17<br>
当看见10位这个关键提示的时候，就应该想到bit，因为一个int是多少位？32bit。那么10个长，完全没有超过32bit。因此就可以用rollinghash的方法，连续的计算bit值。对于mask的理解，我应该再加强一点。F是4个1.