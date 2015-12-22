#include <vector>
using namespace std;


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.empty() && nums2.empty()) return 0;
        // make sure nums1 has less numbers.
        if(nums1.size()>nums2.size()){
            swap(nums1, nums2);
        }
        return findMedian(nums1, 0, nums1.size(), nums2, 0, nums2.size());
    }
    double findMedian(vector<int>& nums1, int left1, int right1, vector<int>& nums2, int left2, int right2){
        while(true){
            if(right1-left1<=4){
            // find directly
                int size1=right1-left1;
                int size2=right2-left2;
                int diff=max(0,(size2-size1)/2-1);
                vector<int> v(nums2.begin()+left2+diff, nums2.begin()+right2-diff);
                for(int i=left1; i<right1; ++i){
                    v.push_back(nums1[i]);
                }
                sort(v.begin(), v.end());
                int size=v.size();
                return (v[size/2]+v[(size-1)/2])/2.0;
            }
            else{
                int mid1=(left1+right1)/2;
                int mid2=(left2+right2)/2;
                if(nums1[mid1]<nums2[mid2]){//remove left of nums1 and right of nums2
                    int diff=min(mid1-left1, right2-mid2-1);
                    left1+=diff;
                    right2-=diff;
                }
                else{
                    int diff=min(right1-mid1-1, mid2-left2);
                    right1-=diff;
                    left2+=diff;
                }
            }
        }
        return 0;
    }
};


int main(int argc, char const *argv[])
{
    std::vector<int> v1={1,3,5,6,8};
    std::vector<int> v2={-5,-2,2,3,4,5,6,7,8,9, 10, 11};
    Solution abc;
    abc.findMedianSortedArrays(v1, v2);
    return 0;
}