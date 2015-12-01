class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int size=nums.size();
        return find(nums, size-k, 0, size-1);
    }
    int find(vector<int>& nums, int k, int p, int r){
        if(p>=r) return nums[p];
        int q = partition(nums, p, r);
        if(q==k){
            return nums[q];
        }
        return q<k?find(nums, k, q+1, r):find(nums, k, p, q-1);
    }
    int partition(vector<int>& nums, int p, int r){
        int x = nums[r];
        int i=p-1;
        for(int j=p; j<r; ++j){
            if(nums[j]<=x){
                ++i;
                swap(nums[i], nums[j]);
            }
        }
        swap(nums[i+1], nums[r]);
        return i+1;
    }
};