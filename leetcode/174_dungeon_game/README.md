# Dungeon Game
==
The demons had captured the princess (P) and imprisoned her in the bottom-right corner of a dungeon. The dungeon consists of M x N rooms laid out in a 2D grid. Our valiant knight (K) was initially positioned in the top-left room and must fight his way through the dungeon to rescue the princess.

The knight has an initial health point represented by a positive integer. If at any point his health point drops to 0 or below, he dies immediately.

Some of the rooms are guarded by demons, so the knight loses health (negative integers) upon entering these rooms; other rooms are either empty (0's) or contain magic orbs that increase the knight's health (positive integers).

In order to reach the princess as quickly as possible, the knight decides to move only rightward or downward in each step.


Write a function to determine the knight's minimum initial health so that he is able to rescue the princess.

For example, given the dungeon below, the initial health of the knight must be at least 7 if he follows the optimal path RIGHT-> RIGHT -> DOWN -> DOWN.

## 理解
这是一个比较难的动态规划问题。
如果全是负数，就很简单，找一个值最大的路径就好了。由于有了正数，那就不能简单的求最后的那个值，因为可能最初就会有一个极低的值让武士挂了。
本题可真难！
其实只要这个矩阵给定了，那它的结果就是一定的。有点像那个D算法呀。
如果以每一个点为起点，看看它到达终点时最少能掉多少血？这个与以每一个点为终点没什么区别呀。
难道记忆可以解决？我觉得解决不了，因为一个正数就能阻断记忆呀。
以每个点为起点最终解决这个问题。必须要试验呀。<br>

2016 mar 15 <br>
本题第二个解法的的意思是说，如果我已经站在当前点，想要去前和下两个点，怎么走合适？前提是我已经知道了到前和下两个点后，最起码要剩多少血。当然到那个需要剩下血少的点合适了。然后，就是考虑，如果知道要去哪个点了，那结合本点的值，最起码需要多少血才能支持下去。注意，必须血为大于等于1的值，否则就死了。