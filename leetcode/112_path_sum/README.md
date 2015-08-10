# Path Sum
==
 Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum. <br>
For example: <br>
Given the below binary tree and sum = 22, <br>
```
              5
             / \
            4   8
           /   / \
          11  13  4
         /  \      \
        7    2      1
```
return true, as there exist a root-to-leaf path 5->4->11->2 which sum is 22.
这个问题，首先这个二叉树没有顺序可言，也不能修改它，所以只能递归测试。