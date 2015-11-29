# Course Schedule
==
There are a total of n courses you have to take, labeled from 0 to n - 1.

Some courses may have prerequisites, for example to take course 0 you have to first take course 1, which is expressed as a pair: [0,1]

Given the total number of courses and a list of prerequisite pairs, is it possible for you to finish all courses?

For example:

2, [[1,0]]
There are a total of 2 courses to take. To take course 1 you should have finished course 0. So it is possible.

2, [[1,0],[0,1]]
There are a total of 2 courses to take. To take course 1 you should have finished course 0, and to take course 0 you should also have finished course 1. So it is impossible.

Note:
The input prerequisites is a graph represented by a list of edges, not adjacency matrices. Read more about how a graph is represented.

## 理解
对题的数据输入理解有误。我以为这种数据结构只是一直向后查找的。但应该是先建立好需要DFS的数据结构才行。<br>
还需要看一下别人写的拓扑排序的算法。

### Kahn's algorithm
利用一个特性：如果能找到一个没有被其他vertex指的vertex，那就能肯定，至少此时还不能肯定有cycle。然后将这个vertex拿掉，并且将这个vertex指向的所有vertex遍历：将edge拿掉，也就是将indegree减1，看看他们是不是也变成了没有indegree的vertex。重复下去，看看最后删除的vertex是不是全都删除了。如果还剩下，就说明有cycle的存在。
```
L ← Empty list that will contain the sorted elements
S ← Set of all nodes with no incoming edges
while S is non-empty do
    remove a node n from S
    add n to tail of L
    for each node m with an edge e from n to m do
        remove edge e from the graph
        if m has no other incoming edges then
            insert m into S
if graph has edges then
    return error (graph has at least one cycle)
else
    return L (a topologically sorted order)
```