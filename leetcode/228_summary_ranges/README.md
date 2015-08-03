Given a sorted integer array without duplicates, return the summary of its ranges.
==
For example, given [0,1,2,4,5,7], return ["0->2","4->5","7"].

我想问题的关键是在遍历的时候，需要探测下一个元素到底是否符合规则，如果符合就接着循环，如果不符合，当前循环就是结束并输出字符串。
也就是说，遍历到的当前元素，只决定是否输出，不输出，让end前进，输出，就让start和end都前进。由于存在探测，退出时，无论如何要输出一次。
