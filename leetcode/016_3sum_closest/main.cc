class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        typedef vector<int>::iterator iterator;
        iterator left = nums.begin();
        iterator middle;
        iterator right;
        int res = nums[0]+nums[1]+nums[2];

        while(left+2 != nums.end()){
            middle = left+1;
            right = nums.end()-1;
            while(middle != right){
                int val = *left + *middle + *right;
                if(val == target){
                    return target;
                }
                else{
                    if(abs(val-target) < abs(res-target)){
                        res = val;
                    }
                }
                if(val > target){
                    int preRight = *right;
                    --right;
                    while(middle != right && *right == preRight) --right;
                }
                else{
                    int preMiddle = *middle;
                    ++middle;
                    while(middle != right && *middle == preMiddle) ++middle;
                }
            }
            int preLeft = *left;
            ++left;
            while(left+2 != nums.end() && *left == preLeft) ++left;
        }

        return res;
    }
};