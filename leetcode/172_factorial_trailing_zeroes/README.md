# Factorial Trailing Zeroes
==
Given an integer n, return the number of trailing zeroes in n!.

Note: Your solution should be in logarithmic time complexity.

我好像见过这个题。好像有个奇怪的特性？什么才会造成0结尾？本身有0，2*5也会是0.所以问题变为在该数组中有多少个0结尾？
总结分析一下：
1-》10会产生2 <br>
11-》20会产生2 <br>
91-》100会产生3 <br>
20*50，会因为2 5 产生另外一个0. <br>
那么1-》100会产生2*10+2 ＝ 22. <br>

上面错了，100的阶乘，总共有24个trailing zeroes. <br>

101-》110会产生2 <br>
111-》120     2 <br>
191－》200    3 <br>
120*150      1 <br>
101-》200 会产生22个 <br>

那么对于10的N次方，有
n=1   2
n=j   2*10(j-1) + 2*10(j-2) + ... 2*10(0)

有三个关键数字，2/5/0

主要就是考虑有多少个0，多少个5，而且5可能在变为0的时候又变出一个5.<br>

这道题没有自己做出来，查了wiki，才恍然大悟，n/5 得到的是5/0 结尾的数字的个数，n/5^2，得到的是25这个特殊基数的个数，因为125*2 = 250, 250*2 = 500,也就是说25本身会化为2个0，125会化为3个0.。。

2016 Mar 14 <br>
这下应该会记住了。这个方法有个名字，<span style="color: red">de Polignac's formula</span> .