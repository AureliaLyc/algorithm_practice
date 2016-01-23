# Maximum Gap
==
Given an unsorted array, find the maximum difference between the successive elements in its sorted form.

Try to solve it in linear time/space.

Return 0 if the array contains less than 2 elements.

You may assume all elements in the array are non-negative integers and fit in the 32-bit signed integer range.

## 理解
给定一个未排序的数组，如果排序好后，相邻两个数之间的最大差值是多少？
linear的时间和空间复杂度。
题里面说全是非负的数，而且是32bit长的，这意味着需要用bit操作。
这是一个诱饵。用radix sort会比较慢，因为进行bit操作会拖慢速度。
为了线性排序，算法导论给出三个算法，分别是计数排序 count_sort, 基数排序 radix_sort, 桶排序 bucket_sort。
计数排序是说在一个数据范围内，数的个数更多，例如，数组内最小值和最大值为5，10， 数组总共有15个数，需要对他们排序。那么就要数出来每一个数一共有几个，有几个5？有几个6？有几个7？然后向外摘得时候，这个计数会减小。这样就稳定排序了
基数排序是说，从低位到高位，对数组进行排序。对每一位进行排序时，可以用计数排序，如果仅仅是0、1，那就不用计数排序了，直接就排好了。
桶排序是说，在这个范围内，均匀分布的数，那么他们可以进行等比例的划分，第一个桶范围内放多少个数，第二放多少？也可能没有落在第二个桶的数。对每一个桶内的数进行排序，用最简单的插入排序，当然也可以用sort，但不太合适，因为对于本来就是排序好得数组，要插入一个元素，最好就是插入排序。如果仅仅是放入，最后统一排序，那可以用sort。但对于本题，无需排序，因为需要知道的是范围。所以只记录最大值和最小值。