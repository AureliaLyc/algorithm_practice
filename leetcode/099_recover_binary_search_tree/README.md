# Recover Binary Search Tree
==
Two elements of a binary search tree (BST) are swapped by mistake.

Recover the tree without changing its structure.

Note:
A solution using O(n) space is pretty straight forward. Could you devise a constant space solution?

## 理解

没搞懂，什么叫swapped？是说只要交换两处有问题的node就是OK的？
   0
  /
  1
这样的就是不对的，应该变成
   1
  /
  0
说不能改变它的结构。
要改node，就必须记住parent。是不是说，本来inorder遍历，是严格的从小到大，但现在恰好有两个数被交换了，只要把他们交换回来，就又是严格的从小到大了？
如果用constant space，就不能是递归的方法，因为stack会用空间。那就只能循环。难道真的用morris方法？好难的，我现在做不出来。

递推法遍历二叉树的关键两点：
 1. move left after pushing a node. So that we will pop and visit nodes from left to right.
 2. move right after poping and visiting a node. Because the left subtree must have been manipulated.

 那么步骤就是：
 1. 拿到一个node，就push进去，立刻向左移动，移动到NULL为止。
 2. 弹出一个，立刻访问它。如果弹不出来，就是已经是NULL的了，那么结束循环。
 3. 向右移动，然后继续步骤1.

Morris Traverse
The NULL right child of a node P is used to point to P's inorder successor (P$).
 1. The right link of any node without a right child will be used as the start of a thread.
 2. If a node P has left subtree, then P is the end of a thread whose start point is $P (P's inorder predecessor). Therefore, we can add this thread (from $P to P) when reaching P and remove it after coming back to P from $P.

![morris img](http://forrestyu.net/media/fig/MorrisAlgorithm/right-threaded-bintree.png)

 There are 4 nodes that have left subtrees: A, B, C and F, so there are 4 thread that point to them. The key point is that the nodes pointing to them are their inorder predecessors B, D, G, and H. (D, B, A, E, G, C, H, F, J). Therefore, we do not need to push A, B, C, and F into stack, since we can reach them via the right links of their inorder predecessors.

