# Sort Colors
==
Given an array with n objects colored red, white or blue, sort them so that objects of the same color are adjacent, with the colors in the order red, white and blue.

Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.

Note:
You are not suppose to use the library's sort function for this problem.

## 理解
正反两个角度来理解
 * 中间的指针扫描，遇到不是1的数字，0向左swap，2向右swap，同时缩小左右边界，同时保证mid不落后于left。如果是1，那mid向前继续扫描。
 * 两边扫描，左边遇到0继续前进，保证mid大于等于left，右边遇到2，继续后退，保证right大于mid。左边遇到非0，即1/2时，与右边遇到0/1时，总共有四种状态，最容易处理的是，左边遇到2，右边遇到0，直接交换，然后各自前进。若左边遇到2，右边遇到1，则交换后，右边前进，左边不变。总之，这样的思考方式导致逻辑变得很复杂。不如第一种清楚明白。