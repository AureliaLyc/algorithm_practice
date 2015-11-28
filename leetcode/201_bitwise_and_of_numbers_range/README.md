# Bitwise AND of Number Range
==
Given a range [m, n] where 0 <= m <= n <= 2147483647, return the bitwise AND of all numbers in this range, inclusive.

For example, given the range [5, 7], you should return 4.

## 理解
不能直接去做与，因为肯定有很多的无用功。只要一进位，那肯定全部为0。
 1. 我自己的思路是，只要当前位在m和n里面都是1，那么就要看当前位与gap之间的大小。如果gap更大，那肯定就是0了。
 2. 而且mask肯定不需要比m大，因为大于m的位肯定都是0.
 3. 我看了别人的解法。果真更加厉害。其原理是连续的数，只有那些相等的部分相&才能保留下来。而因为二进制的规则，导致高位更加稳定。