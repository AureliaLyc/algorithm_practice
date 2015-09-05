#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left=0, right=nums.size(), mid;
        while(left<right){
            mid = (left+right)/2;
            if(nums[mid]>=target){
                right = mid;
            }
            else{
                left = mid+1;
            }
        }
        return left;
    }
};

int main(int argc, char const *argv[])
{
    Solution sol;
    int b[] = {1,3,5,7};
    std::vector<int>v (b, b+sizeof(b)/sizeof(int));
    int a = sol.searchInsert(v, 4);
    cout<< a;
    return 0;
}