class Solution {
public:
    int titleToNumber(string s) {
        int size = s.length();
        int res = 0;
        int carry = 1;
        for( int i = 0; i < size; ++i ){
            int t = s[size-i-1] - 'A' + 1;
            t = t * carry;
            carry *= 26;
            res += t;
        }
        return res;
    }
};
