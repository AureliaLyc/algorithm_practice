class Solution {
public:
    int climbStairs(int n) {
        if( n < 1){
            return 0;
        }
        int step1 = 1, step2=0;
        for( int i=1; i<n; ++i ){
            int t = step1;
            step1 += step2;
            step2 = t;
        }
        return step1 + step2;
    }
};