class Solution {
public:
    bool isPalindrome(string s) {
        int size = s.length();

        int p = 0;
        int p_end = size - 1;

        while( p < p_end ){
            while( p < p_end && !isalnum(s[p]) ) ++p;
            while( p < p_end && !isalnum(s[p_end]) ) --p_end;
            if (p < p_end)
            {
                if ( tolower(s[p]) != tolower(s[p_end]) )
                {
                    return false;
                }
            }
            ++p;
            --p_end;
        }

        return true;
    }
};