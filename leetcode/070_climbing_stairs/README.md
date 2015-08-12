# Climbing Stairs
==
You are climbing a stair case. It takes n steps to reach to the top.
<br>
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

## 理解
有一点类似DP。不过思考的方法是如果给定F(n-1)的所有方法，又给了一个新的台阶，那么会产生多少种新的方法？原来最后一步迈两个台阶的无法发生变化，原来最后一步迈一个台阶的还可以变化为了以2结尾的。因此，这就是计算结尾是迈一个台阶？还是两个台阶？
```
f1(n-1)+f2(n-1)
f1(n) = f1(n-1)+f2(n-1)
f2(n) = f1(n-1)
```
