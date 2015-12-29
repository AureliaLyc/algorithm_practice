class Solution {
public:
    int jump(vector<int>& nums) {
        int size=nums.size();
        int left=0;
        int right=1;
        int res=0;
        while(right<size){
            ++res;
            int r=0;
            int l=0;
            for(int i=left; i<right; ++i){
                r=max(r, i+nums[i]);
                l=min(right-1, i+nums[i]);
            }
            left=l;
            right=r+1;
        }
        return res;
    }
};