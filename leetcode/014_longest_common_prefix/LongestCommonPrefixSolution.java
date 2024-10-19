/**
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.

*/

 class LongestCommonPrefixSolution {
    public String longestCommonPrefix(String[] strs) {
        if (strs.length == 0)
            return "";
        if (strs.length == 1)
            return strs[0];
        String rs = "";
        String first = strs[0];
        for (int i=0; i<first.length();i++){
            for (int j=1; j<strs.length;j++) {
                if (i > strs[j].length()-1 || first.charAt(i) != strs[j].charAt(i))
                    return rs;
            }
            rs = rs + String.valueOf(first.charAt(i));
        }        

        return rs;
    }
}