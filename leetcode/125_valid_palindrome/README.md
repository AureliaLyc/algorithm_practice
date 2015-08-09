# Valid Palindrome
==
 Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases. <br>

For example,
```
"A man, a plan, a canal: Panama" is a palindrome.
"race a car" is not a palindrome.
```
这个问题就是从两端开始遍历。看来需要保证正确性，而不仅仅是思路的正确。比如这里每一次p/p_end的变化，都应该检查是否越界。如果能保证这一点，那就可以证明答题人的思维缜密与否。