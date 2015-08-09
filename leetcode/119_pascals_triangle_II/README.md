# Pascal's Triangle II
==
Given an index k, return the kth row of the Pascal's triangle.

For example, given k = 3,
Return [1,3,3,1]. <br>

Note:
Could you optimize your algorithm to use only O(k) extra space? <br>

问题的关键是：在一个vector中，实现增加。<br>
这是考虑算法方面，还有从公式方面入手的解法。每一项的值由 n!/(k!*(n-k)!)决定，也就是说，如果知道第n-1项是它，那下一项，就是n项的值就是，v(n-1)*(n-i+1)/i;注意，这里v(n-1)已经包括了上面的n!，变化的只有k，k每增加一步，k!多乘一个i，(n-k)!多除一个(n-i+1), 所以由上面的式子。这是一个非常数学的方法，因为知道这个公式的不多，至少我不知道。