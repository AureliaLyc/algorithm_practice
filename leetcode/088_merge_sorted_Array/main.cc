class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1, j = n-1;
        int pend = m+n-1;
        while( i>=0 && j>=0 ){
            nums1[pend--] = max(nums1[i], nums2[j]);
            nums1[i] >= nums2[j] ? i-- : j--;
        }
        if( j >= 0 ){
            for(int p=0, q=0; p<=j; ++p){
                nums1[q++] = nums2[p];
            }
        }
    }
};