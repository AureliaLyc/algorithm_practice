#include <stdlib.h>

class Solution {
public:
    double myPow(double x, int n) {
        if(n==0){
            return 1;
        }
        long double res=1;
        bool neg = n > 0 ? false : true;
        long long t = labs(n);

        long long j=0;
        while((j+1)<=t){
            long long i=1;
            long double temp;
            bool first = true;
            long long ij;
            while(i+j<=t){
                if(first){
                    temp = x;
                }
                else{
                    temp *= temp;
                }
                first = false;
                ij = i+j;
                i = i<<1;
            }
            j=ij;
            res *= temp;
        }
        return neg ? 1/res : res;
    }
};
double myPow(double x, int n) {
    if(n==0) return 1;
    if(n<0){
        n = -n;
        x = 1/x;
    }
    return n%2==0 ? myPow(x*x, n/2) : x*myPow(x*x, n/2);
}