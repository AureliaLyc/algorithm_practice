# Edit Distance
==
Given two words word1 and word2, find the minimum number of steps required to convert word1 to word2. (each operation is counted as 1 step.)

You have the following 3 operations permitted on a word:

 1. Insert a character
 2. Delete a character
 3. Replace a character

 ## 理解
看起来必须要反着来，因为是因为后面的字符不同，影响前面字符的动作的改变。但看算法导论思考题里面对本题的解释，感觉是正向的。但其实我觉得也不需要管后面的字符，因为我就这四种动作，我全给做一遍，然后找到动作最少的那个就是了。对不对？
