class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int fir=0;
        int sec=0;
        int firCnt=0;
        int secCnt=0;
        for(auto i:nums){
            if(i==fir){
                ++firCnt;
            }
            else if(i==sec){
                ++secCnt;
            }
            else if(firCnt==0){
                fir=i; ++firCnt;
            }
            else if(secCnt==0){
                sec=i; ++secCnt;
            }
            else{
                --firCnt; --secCnt;
            }
        }
        firCnt=0; secCnt=0;
        for(auto i:nums){
            if(i==fir) ++firCnt;
            else if(i==sec) ++secCnt;
        }
        vector<int> res;
        if(firCnt*3>nums.size()) res.push_back(fir);
        if(secCnt*3>nums.size()) res.push_back(sec);
        return res;
    }
};