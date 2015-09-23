# Set Matrix Zeroes
==
Given a m x n matrix, if an element is 0, set its entire row and column to 0. Do it in place.

## 理解
如果遇到一个0就立刻做，是有问题的，因为会冲掉其他的0. 我想把行和列都记录下来，这就不是in place的方法了。一定是通过某种技巧，能记录
最后我将第一列和第一排拿出来作为标记位，得到84ms成绩。