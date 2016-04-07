int missingNumber(std::vector<int>& nums){
	int res=nums.size();
	for (int i = 0; i < nums.size(); ++i)
	{
		res ^= i;
		res ^= nums[i];
	}
	return res;
}

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size=nums.size();
        for(int i=0; i<size; ++i){
            while(nums[i]!=i){
                if(nums[i]==size) break;
                swap(nums[i], nums[nums[i]]);
            }
        }
        int i=0;
        for(; i<size&&nums[i]!=size; ++i);
        return i;
    }
};