# Happy Number
==
Write an algorithm to determine if a number is "happy". <br>
A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of it's digits, and repeat the process until the number equals 1(where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers. <br>

**Example:** 19 is a happy number.

--

这个问题，需要知道两个终止条件
# 出现计算结果为1
# 出现计算结果重复的情况。
所以，需要一个set作为结果的检查表。

<br>
2016 Mar 19<br>
wiki上面详细的解释了happynumber的问题。里面解释了为什么happynumber在计算的时候，会一直变小。因为一个数的所有digit的平方和，最多位81m。<br>
n>=10^(m-1)>81m. (m>=4)时。<br>
1~999, the largest one is 999, the result is 3*81=243. <br>
100~243, the largest is 199, produces 163<br>
100~163, the largest is 159, produces 107<br>
100~1-7, the largest is 107, produces 50<br>
1~50, largest is 49, produces, produces 97..... 1 <br>
我写了一个多线程的小程序。可以发现，所有小于100的数字，在计算他们的happy number的时候，都会进入小于10的情况。因此只需要判断当小于10的时候，是不是等于1或者7，这两个happynumber。