# Word Ladder
==
Given two words (beginWord and endWord), and a dictionary's word list, find the length of shortest transformation sequence from beginWord to endWord, such that:

Only one letter can be changed at a time
Each intermediate word must exist in the word list
For example,

Given:
```
beginWord = "hit"
endWord = "cog"
wordList = ["hot","dot","dog","lot","log"]
```
As one shortest transformation is "hit" -> "hot" -> "dot" -> "dog" -> "cog",
return its length 5.

Note:
 * Return 0 if there is no such transformation sequence.
 * All words have the same length.
 * All words contain only lowercase alphabetic characters.

## 理解
 * 这应该是一个backtracking的问题。但里面有几个点很巧妙的设置了障碍。例如你需要拿beginWord跟候选的来比较，看看是不是差了一个字符。那是从哪里找？直观上是遍历wordList，但如果endWord本身就和beginWord相差一个怎么办？所以应该先跟endWord比较。如果合适那就是0。如果不合适，就从wordList里面拿一个出来，看看有没有用过，没用过。我不理解为何参数是unordered_set. 这意味着什么？
 * 奇怪，如果将所有字符串竖着看，会是什么结果？
 * 这不是一个backtracking的问题，是一个图搜索的问题，需要用BFS！！
 * 好手段，如果用两端BFS，会更加快。我看了quora上面的建议，说道理上一端搜索和两端搜索应该是一样快的，但实际中，通常要快很多。其原因大概是说，一个搜索全长 VS 两个搜索半长。


