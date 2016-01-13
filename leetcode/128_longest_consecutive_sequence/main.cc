class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> um;
        int res=INT_MIN;
        for(auto i:nums){
            if(um[i]==0){
                um[i]=um[i-um[i-1]]=um[i+um[i+1]]=um[i-1]+um[i+1]+1;
                res=max(res, um[i]);
            }
        }
        return res;
    }
};
