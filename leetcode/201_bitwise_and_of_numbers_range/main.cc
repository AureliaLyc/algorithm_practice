class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        if(m==n) return m;
        int res=0;
        int mask=1;
        int gap=n-m+1;
        for(int i=0; i<32; ++i){
            int x=mask&m;
            int y=mask&n;
            if(x&y && mask>=gap) res = res|mask;
            mask=mask<<1;
        }
        return res;
    }
};


class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int cnt=0;
        while(m!=n){
            m=m>>1;
            n=n>>1;
            ++cnt;
        }
        return m<<cnt;
    }
};


int main(int argc, char const *argv[])
{
    Solution abc;
    abc.rangeBitwiseAnd(2 , 3);
    return 0;
}