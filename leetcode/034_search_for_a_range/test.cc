#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int size=nums.size();
        int l=0;
        int r=size;
        while(l<r){
            int m=(l+r)/2;
            if(nums[m]<target){
                l=m+1;
            }
            else{
                r=m;
            }
        }
        int start=l;
        r=size;
        while(l<r){
            int m=(l+r)/2;
            if (nums[m]<=target)
            {
                l=m+1;
            }
            else{
                r=m;
            }
        }
        if (start==l)
        {
            return std::vector<int> v{-1,-1};
        }
        return std::vector<int> v{start, l-1};
    }
};

int main(int argc, char const *argv[])
{
    std::vector<int> v{0,0,0,0,2,2,3,3,4,4,5,5,5,6,7,7,8,9,9,9,10};
    Solution abc;
    abc.searchRange(v, 10);
    return 0;
}