#include <cstdio>

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int count = 0;
        int mask = 1;
        while(n > 0){
            if (n & mask)
            {
                count++;
                if (count > 1) return false;
            }
            n = n>>1;
        }
        return count==1;
    }
};

int main(){
    Solution sol;
    printf( "%s\n",sol.isPowerOfTwo(1073741825) ? "yes" : "no");
    return 0;
}