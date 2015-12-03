class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        int size=nums.size();
        if(size<2 || k==0 ) return false;
        multiset<int> s;
        for(int i=0; i<size; ++i){
            if(i>k){
                s.erase(nums[i-k-1]);
            }
            auto it=s.lower_bound(nums[i]-t);
            if(it!=s.end() && *it-t<=nums[i]){
                return true;
            }
            s.insert(nums[i]);
        }
        return false;
    }
};