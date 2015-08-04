class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> mySet;
        for (std::vector<int>::iterator it = nums.begin(); it != nums.end(); ++it)
        {
            int val = *it;
            if (!mySet.insert(val).second)
            {
                return true;
            }
        }
        return false;
    }
};