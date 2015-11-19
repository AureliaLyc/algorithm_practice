# 图的基本算法 Elementary Graph Algorithms
==
因自觉图相关算法欠缺，因此单列一个目录来记录一下。基于算法导论第二十二章的内容。

## 图的表示
两种标准方法来表示一个图：
 * 邻接表 （稀疏的）
 * 邻接矩阵（稠密图，或需要立即判断给定的两个顶点是否存在连接）
图 G=(V, E) 的邻接表表示由一个包含|V|个列表的数组Adj所组成，其中每个列表对应于V中的一个顶点。所需存储空间为O(V+E)

## 广度优先搜索
广度优先搜索（breadth-first search）是最简单的图搜索算法之一，也是很多重要的图算法原型。在Prim最小生成树算法，和Dijkstra单源最短路径算法中，都采用了与BFS类似的思想。
在给定图G=(V, E)和一个特定的源顶点s的情况下，BFS系统的搜索G中的边，以期发现可从s到达的所有顶点，并计算s到所有这些可达顶点之间的距离（即最少的边数）。该搜索算法同时还能生成一颗根为s，且包括所有s的可达顶点的广度优先树。
 * 最短路径

## 深度优先搜索
深度优先搜索的先辈子图形成了一个由数棵深度优先树所组成的深度优先森林。