# Group Anagrams
==
Given an array of strings, group anagrams together.

For example, given: ["eat", "tea", "tan", "ate", "nat", "bat"],
Return:
```
[
  ["ate", "eat","tea"],
  ["nat","tan"],
  ["bat"]
]
```
Note:
 * For the return value, each inner list's elements must follow the lexicographic order.
 * All inputs will be in lower-case.

## 理解
 * 所有都是小写字母，意味着可以用包含26个元素的vector来建立一个key，
 * 如何排序呢？排序和找要一起完成才是关键所在，否则复杂度增加
 * 最终，用了hash