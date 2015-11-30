class Solution {
public:
    int rob(vector<int>& nums) {
        int size=nums.size();
        if(size==0) return 0;
        if(size==1) return nums[0];
        if(size==2) return max(nums[0], nums[1]);
        int f0=nums[0];
        int f1=max(nums[1], nums[0]);
        for(int i=2; i<size-1; ++i){
            int t=max(f0+nums[i], f1);
            f0=f1;
            f1=t;
        }
        int res1=max(f0, f1);
        f0=nums[1];
        f1=max(nums[1], nums[2]);
        for(int i=3; i<size; ++i){
            int t=max(f0+nums[i], f1);
            f0=f1;
            f1=t;
        }
        int res2=max(f1, f0);
        return max(res1, res2);
    }
};