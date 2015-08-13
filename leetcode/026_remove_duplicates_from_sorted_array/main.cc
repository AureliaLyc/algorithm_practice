class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        vector<int>::iterator pend = nums.begin(), p = nums.begin(), pnext = nums.begin();
        ++pend;
        while( pnext != nums.end() ){
            if( *p != *pnext ){
                *pend = *pnext;
                p = pnext;
                ++pend;
            }
            ++pnext;
        }
        nums.erase( pend, nums.end() );
        return nums.size();
    }
};