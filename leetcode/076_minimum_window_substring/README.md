# Minimum Window Substring
==
Given a string S and a string T, find the minimum window in S which will contain all the characters in T in complexity O(n).

For example,
S = "ADOBECODEBANC"
T = "ABC"
Minimum window is "BANC".

Note:
If there is no such window in S that covers all characters in T, return the empty string "".

If there are multiple such windows, you are guaranteed that there will always be only one unique minimum window in S.

## 理解
如果只是判断有没有，是很简单的。对了，没有说T里面的字符是否会重复呀！现在认为不会重复。
当找到第一个window，再次出现window是来一个字符把第一个字符给替换掉。
随便提交了一个，T里面的字符是可以重复的。那就需要重新思考了。
不能用map来记录每个字符出现的次数，因为这样要判断是否完成，需要遍历这个map。
我觉得应该对着set用删除操作，只要set空了，就是完成了。
可是如何让left指针前进到合适的位置？也比较费劲。我还是用计数的方式先完成一个再说吧
基本上就是这样的思路，但实现上有很大的区别。仔细研读别人[这些思考](https://leetcode.com/discuss/72701/here-is-a-template-that-can-solve-most-substring-problems)
由此而产生的代码非常简短精悍。

如果不能将自己的第一直觉控制住，那代码往往会比较难看。最明显的例子就是，如果第一直觉是满足了一个条件，我就想通过一个循环来排除达到条件，一般情况下直觉是这么写：
if(sthIsTrue){
	while(otherIsFalse) process;
	do sth.
}
代码上，应该将if处换成while，就像本题中经典解法里面，试图缩短字符串的时候所作的一样。