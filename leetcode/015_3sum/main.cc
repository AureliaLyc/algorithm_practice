class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int> > res;
        size_t size = nums.size();
        if(size < 3){
            return res;
        }

        sort(nums.begin(), nums.end());
        typedef vector<int>::iterator iterator;
        iterator left = nums.begin();
        while(left != nums.end() && *left <= 0){
            iterator right = nums.end()-1;

            while(*right>=0 && right != left+1){
                int val = -(*left + *right);
                iterator found = lower_bound(left+1, right, val);
                if(found != right && *found == val){
                    vector<int> temp(3);
                    temp[0] = *left;
                    temp[1] = *found;
                    temp[2] = *right;
                    res.push_back(temp);
                }
                int prevRight = *right;
                while( *right == prevRight && right != left+1 ){
                    --right;
                }
            }
            int prevLeft = *left;
            while( left != nums.end() && *left == prevLeft  ) {
                ++left;
            }
        }
        return res;
    }
};