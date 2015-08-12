# Merge Sorted Array
==
Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

## 理解
从前面开始merge肯定不合适，因为每一次merge，都意味着要挪动后面所有都元素。因此，需要从末尾开始。这样需要三个标记，一个是末尾处的标记，每次赋值都要－－，一个是nums1末尾标记，每次是大的时候－－，一个是nums2末尾标记，每次是大的时候－－。最后，如果nums2还有剩余元素，需要全部拷贝到nums1相应位置。