class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int left=0;
        int right=0;
        int size=nums.size();
        int total=0;
        int cnt=0;
        int res=INT_MAX;
        while(true){
            if(total<s){
                if(right==size) break;
                total+=nums[right++];
                ++cnt;
            }
            else{
                total-=nums[left++];
                --cnt;
            }
            if(total>=s) {
                res=min(res, cnt);
            }
        }
        return res==INT_MAX?0:res;
    }
};
class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int left=0;
        int size=nums.size();
        int total=0;
        int res=INT_MAX;
        for(int right=0; right<size; ++right){
            total+=nums[right];
            while(total>=s){
                res=min(res, right-left+1);
                total-=nums[left++];
            }
        }
        return res==INT_MAX?0:res;
    }
};