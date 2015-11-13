# Clone Graph
==

Clone an undirected graph. Each node in the graph contains a label and a list of its neighbors.

## 理解
复制一个node容易，new一下，难的是，接下来，要根据neighbors里面的东西，全都new出来或者从之前已经new过的里面找出来设置上。
如何能消除一个queue？直觉是对的，我的那个map里面已经存了这个被复制的node了，为什么还要另外一个queue来存它？没必要。