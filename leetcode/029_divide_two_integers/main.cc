class Solution {
public:
    int divide(int dividend, int divisor) {
        // only two overflow.
        if(divisor == 0){
            return INT_MAX;
        }
        if(dividend == INT_MIN && divisor == -1){
            return INT_MAX;
        }

        int sign = (dividend<0) ^ (divisor<0) ? -1 : 1;
        long long divd = labs(dividend);
        long long divi = labs(divisor);
        int ret = 0;
        long long result = 0;
        long long temp;
        while( divd >= (temp = (result + divi) ) ){
            int res = 0;
            res++;
            result = temp;
            long long ad = divi;
            while( divd >= (temp = result + ad )){
                result = temp;
                ad = ad << 1;
                res = res << 1;
            }
            ret += res;
        }
        return sign == -1 ? -ret : ret;
    }
};