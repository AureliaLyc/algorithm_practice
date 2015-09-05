class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>res(2,-1);
        auto p = lower_bound(nums.begin(), nums.end(), target);
        if(*p == target){
            auto e = upper_bound(p, nums.end(), target);
            res[0] = p - nums.begin();
            res[1] = e - nums.begin() -1;
        }
        return res;
    }
};

class Solution2
{
public:
    vector<int> searchRange(vector<int>& nums, int target){
        int start = 0, end = nums.size(), mid;
        while(start < end){
            mid = (start+end)/2;
            if (nums[mid] >= target)
            {
                end = mid;
            }
            else{
                start = mid+1;
            }
        }
        int left = start;
        end = nums.size();
        while(start < end){
            mid = (start+end)/2;
            if (nums[mid]>target)
            {
                end = mid;
            }
            else{
                start = mid+1;
            }
        }
        int right = start;
        if (left==right)
        {
            return std::vector<int> {-1,-1};
        }
        else{
            return std::vector<int> {left, right-1};
        }
    }
};