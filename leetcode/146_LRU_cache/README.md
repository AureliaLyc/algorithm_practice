# LRU Cache
==
Design and implement a data structure for Least Recently Used (LRU) cache. It should support the following operations: get and set.

get(key) - Get the value (will always be positive) of the key if the key exists in the cache, otherwise return -1.
set(key, value) - Set or insert the value if the key is not already present. When the cache reached its capacity, it should invalidate the least recently used item before inserting a new item.

## 理解
我以前略微想过cache的实现。但没有听过LRU这个算法，第一次看见。看了wiki网页，对它介绍甚少。google了一阵子，感觉是明白了
 1. 通过key来找value
 2. 但是否能找到，要看在不在cache里面
 3. cache里元素的排序，要按照最后访问的时间进行。
 4. 越是很早以前访问的，越要被清除出去。
 5. 这就需要记录三个东西
    1. key
    2. value
    3. 访问次序的编号或者排序
 6. List::size()竟然是O(n)复杂度，我看cpp网页上写的是常熟复杂度呀。什么情况