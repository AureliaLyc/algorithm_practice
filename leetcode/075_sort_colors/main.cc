class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left=0, mid=left, right=nums.size();
        while(mid<right){
            if(nums[mid]==0 && left != mid){
                swap(nums[left++], nums[mid]);
            }
            else if(nums[mid]==2){
                swap(nums[--right], nums[mid]);
            }
            else{
                ++mid;
            }
        }
    }
};