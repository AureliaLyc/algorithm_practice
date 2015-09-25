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


// this is the most smart idea I have ever seen.
void sortColors(vector<int>& nums) {
    int r=0, w=0, b=0; // label the end of different colors;
    for(int num: nums)
        (nums[b++]=2) && num<2 && (nums[w++]=1) && num<1 && (nums[r++]=0);
}