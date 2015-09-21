class Solution {
public:
    int mySqrt(int x) {
        long long a = x;
        long long left=0, right=INT_MAX;
        while(left<right){
            long long val = (left+right)/2;
            if( val*val <= a ){
                left = val+1;
            }
            else{
                right = val;
            }
        }
        return left*left <= a ? left : left-1 ;
    }
};

int mySqrt(int x){
    long r = x;
    while (r*r > x)
        r = (r + x/r) / 2;
    return r;
}