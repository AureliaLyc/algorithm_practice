# Word Ladder II
==
Given two words (beginWord and endWord), and a dictionary's word list, find all shortest transformation sequence(s) from beginWord to endWord, such that:

 1. Only one letter can be changed at a time
 2. Each intermediate word must exist in the word list

For example,

Given: <br>
beginWord = "hit" <br>
endWord = "cog" <br>
wordList = ["hot","dot","dog","lot","log"] <br>
Return
```
  [
    ["hit","hot","dot","dog","cog"],
    ["hit","hot","lot","log","cog"]
  ]
```
Note:
 1. All words have the same length.
 2. All words contain only lowercase alphabetic characters.

## 理解
这题比Word Ladder非常类似，只不过在找完一个后，还要找相同长度的组合。所以就需要BFS来找，只要找到了，就不再继续深入了。
还是非常的难的。我明天再做吧，今天力不从心了。
本题与其前一道类似的题有很大的区别。因为需要记录，同时，还需要直到wordlist的状态。
单纯考虑一个结果是不行的，因为仅考虑一个结果，就不是BFS了。也就是说，这个wordList，只要上一级用过了，就不能在下一级里面出现。但下一级里面，可以重复出现，否则最后那个node如何到达？
但是也不是不能出现在下一级里面，
在求得长度后，也不能用DSF，因为不能保证它不在水平范围内查找。
我看了别人的解法。两个重要的地方，一个是双向BFS，会极大的加快速度。一个是记录任意一个node的下一个node。这用空间换来的时间会很大。但本次我不准备写了。下次回来写这个方法。通过这两道题，我学会了双向BFS，这会极大的加快速度，在实际应用中