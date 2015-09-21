# Rotate List
==
Given a list, rotate the list to the right by k places, where k is non-negative.

```
For example:
Given 1->2->3->4->5->NULL and k = 2,
return 4->5->1->2->3->NULL.
```

## 理解
一次就要找到倒数第三个，然后截断，然后让第五个指向head->nex