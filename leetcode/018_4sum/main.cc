class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        size_t size = nums.size();
        if(size<4){
            return res;
        }
        sort(nums.begin(), nums.end());
        size_t le = 0;
        while(le<size-3){
            size_t m1 = le+1;
            while(m1<size-2){
                size_t m2 = m1+1;
                size_t ri = size-1;
                int leftTwo = nums[le]+nums[m1];
                int targetResidue = target - leftTwo;
                while(m2<ri){
                    int val = nums[m2]+nums[ri];
                    if(val == targetResidue){
                        res.push_back({nums[le], nums[m1], nums[m2], nums[ri]});
                        int preM2 = nums[m2++];
                        while(m2<ri&&nums[m2]==preM2)++m2;
                        int preRi = nums[ri--];
                        while(m2<ri && nums[ri]==preRi)--ri;
                    }
                    else if(val<targetResidue){
                        m2++;
                    }
                    else if(val>targetResidue){
                        ri--;
                    }
                }
                int preM1 = nums[m1++];
                while(m1<size-2 && nums[m1]==preM1) ++m1;
            }
            int preLe = nums[le++];
            while(le<size-3 && nums[le] == preLe) ++le;
        }
        return res;
    }
};