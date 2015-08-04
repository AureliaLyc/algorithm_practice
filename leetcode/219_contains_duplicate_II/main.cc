class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        first=0;
        for (std::vector<int>::iterator i = nums.begin(); i != nums.end(); ++i)
        {
            int val = *i;
            bool res = insertToPool( val, k, nums );
            if (!res)
            {
                return true;
            }
        }
        return false;
    }
    bool insertToPool(int val, int k, std::vector<int>& nums){
        if (myPool.size() > k)
        {
            pop(nums[first]);
            first++;
        }
        bool res = myPool.insert( val ).second;
        return res;
    }
    void pop( int val ){
        myPool.erase(val);
    }
private:
    set<int> myPool;
    int first;
};