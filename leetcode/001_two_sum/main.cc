class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v(2,0);
        unordered_map<int,int> nMap;
        size_t size = nums.size();
        nMap[nums.front()] = 1;
        for(int i=1; i<size; ){
            int me = nums[i];
            unordered_map<int,int>::iterator it = nMap.find(target - me);
            if( it == nMap.end() ){
                nMap[me] = ++i;
            }
            else{
                v[0] = it->second;
                v[1] = i+1;
                return v;
            }
        }
        return v;
    }
};