Rectangle Area
==
Find the total area covered by two rectilinear rectangles in a 2D plane.
Each rectangle is defined by its bottom left corner and top right corner as shown in the figure.
![figure](https://leetcode.com/static/images/problemset/rectangle_area.png) <br>
Assume that the total area is never beyond the maximum possible value of int.

==
这个问题，我想第一要知道Y坐标是否交叉，X坐标是否交叉，如果交叉，那重合部分多长。X／Y的求值过程一样。在求它的过程中，容易溢出，因为是对较大大数值进行运算，所以要避免进行加减运算。我最开始，先计算出res2-res1，然后看它是否大于0，这样很不好，因为容易溢出。需要直接比较res2与res1.
