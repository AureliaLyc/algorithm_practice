# Implement Trie (Prefix Tree)
==
Implement a trie with insert, search, and startsWith methods.

Note:
You may assume that all inputs are consist of lowercase letters a-z.

## 理解
好像是上周还是上上周，第一次听说Trie。现在大概能知道它的结构，但对几个关键问题不清楚，例如，如何确认有某个字符串？
是通过给TrieNode里面添加一个标识位，可以是编号，也可以是bool这样的flag。奇怪的是，如果用vector会比TrieNode* next[26]慢好多。这是为什么？难道是因为少调用了一次new？