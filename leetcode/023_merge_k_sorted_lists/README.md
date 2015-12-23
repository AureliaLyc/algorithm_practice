# Merge K Sorted Lists
==
Merge k sorted linked lists and return it as one sorted list. Analyze and describe its complexity.

## 理解
我能想到的是，两两merge，最后就变成一个了。比如第一个和最后一个merge，merge到第一个上面，然后pop出最后一个。