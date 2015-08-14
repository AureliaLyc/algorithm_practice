class Solution {
public:
    int reverse(int x) {
        int sign = x < 0 ? -1 : 1;
        x = abs(x);
        long long a = x;
        long long res = 0;
        while( a ){
            int residue = a % 10;
            res = res * 10 + residue;
            a /= 10;
        }
        res *= sign;
        if( res > INT_MAX ){
            res = 0;
        }
        else if ( res < INT_MIN ){
            res = 0;
        }
        return res;
    }
};