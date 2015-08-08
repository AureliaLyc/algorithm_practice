class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int maj = 0;
        int size = nums.size();
        for( int i = 0; i < size; ++i ){
            if(count == 0){
                maj = nums[i];
                count++;
            }
            else{
                maj == nums[i] ? count ++ : count--;
            }
        }
        return maj;
    }
};