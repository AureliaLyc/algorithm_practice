#include <math.h>

class Solution {
public:
    int trailingZeroes(int n) {
        int number = 0;
        while( n > 1 ){
            n = n/5;
            number += n;
        }
        return number;
    }
};
