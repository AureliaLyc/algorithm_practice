# Multiply Strings
==
Given two numbers represented as strings, return multiplication of the numbers as a string.
Note: The numbers can be arbitrarily large and are non-negative.

## 理解
 1. 两个数（n位和m位）相乘，得到的结果最大的位数是n＋m，这是一个性质，我开始想找到这个规律，没想清楚就开始做题了
 2. 我最初想直接按照手动的方法来做，但忽然想起一个事情，如果当前这位上的数字，曾经算过，我可以把前面的结果拿来直接用，因此想着把计算的结果放到一个字符串里面缓存。然后不停的用字符串拼接的方法。现在看来，方法还是可以的，但字符串的拼接与产生花费了太多的计算时间
 3. 相比起来，按照手动计算的乘法的方法虽然可能有重复的计算，但相比字符串拼接，要好的多。
 4. 而且这里有个特别的窍门，就是如何将最后的那个carry加上？应该是刚计算完的res[j+i+1], j=0时。也就是res[i+1], 那carry要放到下一位，就是res[i]上。看着很高深，但仔细一想，还就是这么回事。
 5. 别忘了 string::find_first_not_of().
### 教训
就是宁可重复计算，也不要用字符串拼接