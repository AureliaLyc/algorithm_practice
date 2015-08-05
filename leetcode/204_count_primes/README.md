# Count Primes
==
Count the number of primes numbers less than a non-negative number, *n*.

==
我想这个问题，首先要知道什么是素数，要验证一个数是否是素数？
![Sieve of Eratosthenes](https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes)介绍了一个快速查找质数的方法。问题里面有个小关键点，就是line19那里，j从i*i开始，是因为例如在排除2的时候，2*5已经被排除了，3*5/4*5都已经被排除了，不需要重复排除，那么就从5*5开始。
