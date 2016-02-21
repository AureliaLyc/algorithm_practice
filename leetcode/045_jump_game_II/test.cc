class Solution {
public:
    int jump(vector<int>& nums) {
        int size=nums.size();
        int l=0;
        int r=1;
        int res=0;
        while(r<size){
            int n=r;
            for(int i=l; i<n; ++i){
                r=max(r, i+nums[i]+1);
            }
            l=n;
            ++res;
        }
        return res;
    }
};