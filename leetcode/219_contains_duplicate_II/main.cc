class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> mySet;
        int first = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            int val = nums[i];
            if (mySet.size() > k)
            {
                mySet.erase(nums[first++]);
            }
            if (!mySet.insert(val).second)
            {
                return true;
            }
        }
        return false;
    }
};