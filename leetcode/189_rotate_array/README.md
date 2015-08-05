# Rotate Array
==
Rotate an array of n elements to the right by k steps.

For example, with n = 7 and k = 3, the array [1,2,3,4,5,6,7] is rotated to [5,6,7,1,2,3,4].

旋转一个数组，不是旋转一个矩阵。旋转的关键是先要判断向左还是向右快。比如向右转k，相当于向左转n－k。
第一个方法，可以用一个新的vector，把k个数先存起来，然后移动剩下的到末尾，然后将存的数放到开头。
第二个方法，用一个参数存第一个数，然后不停的交换，最后将第一个参数赋值给最后一个。循环k次。
第三个方法，先将后面的参数全部交换到前面，然后将中间未触动部分全部交换到末尾。