

class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.empty())
            return 0;
        if (nums.size() == 1)
        {
            return nums.front();
        }
        int size = nums.size();
        vector<int> f( size, 0 );
        f[0] = nums[0];
        f[1] = nums[1];

        for( int i = 2; i < size; ++i ){
            int left = max( f[i-2], i > 2 ? f[i-3] : 0 ) +nums[i];
            int right = f[i-1];

            f[i] = max(left, right);
        }

        return max( f[size-1], f[size-2] );
    }
};

class Solution {
public:
    int rob(vector<int>& nums) {
        int size=nums.size();
        if(size==0) return 0;
        if(size==1) return nums[0];
        int f0, f1;
        f0=nums[0];
        f1=max(nums[0], nums[1]);
        for(int i=2; i<size; ++i){
            int t=max(f1, f0+nums[i]);
            f0=f1;
            f1=t;
        }
        return max(f0, f1);
    }
};