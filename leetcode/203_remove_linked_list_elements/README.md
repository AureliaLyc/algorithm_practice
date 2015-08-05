# Remove Linked List Elements
==
Remove all elements from a linked list of integers that have value *val*. <br>

Given: 1->2->3->4->5->6, val=6 <br>
Return: 1->2->3->4->5 <br>
在遍历元素的时候，拿住前一个node，检查当前node，当前node如果需要被删除，那让前一个node指向当前node的下一个node