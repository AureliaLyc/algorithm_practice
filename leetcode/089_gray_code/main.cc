class Solution {
public:
    vector<int> grayCode(int n) {
        int size=1<<n;
        vector<int> res(size,0);
        for(int i=0; i<size; ++i){
            res[i]=i^i>>1;
        }
        return res;
    }
};

unsigned int grayToBinary(unsigned int num){
    unsigned int mask;
    for(mask=num>>1; mask!=0; mask=mask>>1){
        num = num ^ mask;
    }
    return num;
}