class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size=nums.size();
        int i=0, j=-1;
        while(i<size && j<size){
            // find first zero.
            while(i<size && nums[i]) ++i;
            // find following nonzero right after zero
            j = j==-1 ? i : j;
            while(j<size && !nums[j])++j;
            if( j<size ){
                swap(nums[i],nums[j]);
            }
        }
    }
};

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size=nums.size();
        int i=0;
        for(int j=0; j<size; ++j){
            if(nums[j]){
                if( i!=j ){
                    nums[i] = nums[j];
                }
                ++i;
            }
        }
        for(; i<size; ++i){
            nums[i]=0;
        }
    }
};