class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>::iterator p = nums.begin(), p_end = nums.end();
        while( p != p_end ){
            if( *p == val ){
                --p_end;
                *p = *p_end;
            }
            else{
                ++p;
            }
        }
        nums.erase(p_end, nums.end());
        return nums.size();
    }
};