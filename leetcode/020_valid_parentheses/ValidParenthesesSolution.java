/**
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"

Output: true

Example 2:

Input: s = "()[]{}"

Output: true

Example 3:

Input: s = "(]"

Output: false

Example 4:

Input: s = "([])"

Output: true
*/

class ValidParenthesesSolution {
    public boolean isValid(String s) {
        List<Character> stack = new ArrayList<Character>();
        if (s.length() < 2)
            return false;
        for (int i=0; i<s.length(); i++){
            if (s.charAt(i) == '(' || s.charAt(i) == '{' || s.charAt(i) == '[')
                stack.add(s.charAt(i));
            else {
                if (stack.size()==0)
                    return false;
                else {
                    if (stack.get(stack.size()-1) == '(' && s.charAt(i)==')')
                        stack.remove(stack.size()-1);
                    else if (stack.get(stack.size()-1)=='{' && s.charAt(i)=='}')
                        stack.remove(stack.size()-1);
                    else if (stack.get(stack.size()-1)=='[' && s.charAt(i)==']')
                        stack.remove(stack.size()-1);
                    else
                        return false;
                }
            }
        }
        if (stack.size() !=0)
            return false;
        else
            return true;
    }
}