# Remove Duplicates from Sorted Array
==
 Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this in place with constant memory.<br>

For example,<br>
Given input array nums = [1,1,2],<br>

Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. It doesn't matter what you leave beyond the new length.

## 理解
需要三个指针，第一个指向最终数组的末尾，用于将数据拷贝过来，以及用于删除后面无用的数据，第二个用于指向刚刚拷贝过去的那个数据，第三个用于寻找是否跟第二个数据不同的数据。