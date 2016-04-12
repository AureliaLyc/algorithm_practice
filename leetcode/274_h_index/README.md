# H-Index
==
Given an array of citations (each citation is a non-negative integer) of a researcher, write a function to compute the researcher's h-index.

According to the definition of h-index on Wikipedia: "A scientist has index h if h of his/her N papers have at least h citations each, and the other N − h papers have no more than h citations each."

For example, given citations = [3, 0, 6, 1, 5], which means the researcher has 5 papers in total and each of them had received 3, 0, 6, 1, 5 citations respectively. Since the researcher has 3 papers with at least 3 citations each and the remaining two with no more than 3 citations each, his h-index is 3.

Note: If there are several possible values for h, the maximum one is taken as the h-index.

## 理解
关键公式是max(min(i, h[i])); 可以先排序，然后遍历一遍。但因为不需要排序，需要知道的信息是大于某个序号的数有几个。我因此想到后面的第一个方法。运行后发现速度很慢，因为我每次都要向前遍历所有的数。但因为这部分是重复动作。因此可以变为第二种方法