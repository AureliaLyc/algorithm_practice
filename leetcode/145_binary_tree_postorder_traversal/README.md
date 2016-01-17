# Binary Tree Postorder Traversal
==
Given a binary tree, return the postorder traversal of its nodes' values.

For example:
Given binary tree {1,#,2,3},
```
   1
    \
     2
    /
   3
```
return [3,2,1].
<br>
Note: Recursive solution is trivial, could you do it iteratively?

## 理解
我好像把morris方法又给忘了。难道当时还是没吃透？我记得已经能熟练的写出来了呀。shit啊
我突然发现，按照preorder遍历方法，只需要翻转一下left和right的顺序，在输出后，再次翻转res就可以得到了。
例如，
```
   1
  / \
 2   3
```
正常前序遍历是[1,2,3], 现在让left和right翻转[1,3,2]
然后让这个数组再次全部翻转，[2,3,1]
这就是要得结果。
