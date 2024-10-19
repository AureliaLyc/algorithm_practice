/**
Given an integer x, return true if x is a 
palindrome
, and false otherwise.

 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
*/
class PalindromeNumberSolution {
    public boolean isPalindrome(int x) {
        if (x < 0 || (x!=0 && x % 10 == 0)){
            return false;
        } 
        else {
            if (x < 10)
                return true;
            else {
                int size = 0;
                int temp = x;
                do {
                    temp = temp/10;
                    size++;
                 } while (temp > 0);
                int[] r = new int[size];
                for (int i=size-1; i>=0; i--){
                    r[i] = x % 10;
                    x = x/10;
                }
                int left=0;
                int right=size-1;
                do{
                    if ( r[left] == r[right])  {  
                        left++;
                        right--;
                    } 
                    else
                        return false;
                } while (left <= right);
                return true;
            }
        }
    }
}