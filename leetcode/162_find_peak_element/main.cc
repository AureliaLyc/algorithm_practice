class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int size=nums.size();
        int left=0;
        int right=size-1;
        int mid;
        while(left<right){
            mid=(left & right) + ((left ^ right) >> 1);
            left=nums[mid]<nums[mid+1]?mid+1:left;
            right=nums[mid]<nums[mid+1]?right:mid;
        }
        return left;
    }
};

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int size=nums.size();
        int l=0, r=size-1;
        while(l<r){
            int m=(l+r)/2;
            if(nums[m]<nums[m+1]){
                l=m+1;
            }
            else{
                r=m;
            }
        }
        return l;
    }
};