Power of Two
==
Given an integer, write a function to determine if it's a power of two.

--
一个integer，如果它小于2，那么肯定不是，大于等于2的数，求它除以2后的余数，如果在商等于2时，余数仍然为0，就是，否则就不是。
但这个题显然不应该这么简单，不知道编译器会不会做优化？
应该用位移，这样2的power应该只有第一位是1，其他剩余位只能为0.
更应该理解为只有一位是1，所以目标变为数1的个数。不为1，都是false。