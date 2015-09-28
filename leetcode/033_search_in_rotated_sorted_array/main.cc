#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0, right=nums.size()-1;
        while(left<right){
            int mid=(left+right)/2;
            bool first = nums[left]<=nums[mid] && nums[mid]<=nums[right] && nums[mid]<target;
            bool second = nums[left]>=nums[right] && nums[mid]<=nums[right] && nums[mid]<target && target<=nums[right];
            bool third = nums[left]<=nums[mid] && nums[right]<=nums[left] && !(nums[mid]>=target && target>=nums[left]);
            if(first || second || third){
                left=mid+1;
            }
            else{
                right=mid;
            }
        }
        if(left!=nums.size() && nums[left]==target){
            return left;
        }
        else{
            return -1;
        }
    }
};
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0, right=nums.size()-1;
        while(left<right){
            // needs to know where to go.
            int mid=(left+right)/2;
            // the right part is fully sorted.
            if(nums[right]>nums[mid]){
                if(nums[mid]<target && target<=nums[right]){
                    left=mid+1;
                }
                else{
                    right=mid;
                }
            }
            else{
                if(nums[mid]>=target && target>=nums[left]){
                    right=mid;
                }
                else{
                    left=mid+1;
                }
            }
        }
        if(left!=nums.size() && nums[left]==target){
            return left;
        }
        return -1;
    }
};

// concise version for soln. 2
class Solution {
public:
int search(vector<int>& nums, int target) {
    int left=0, right=nums.size()-1;
    while(left<right){
        int mid=(left+right)/2;
        // for traditional binary problems, nums[mid]<target is enough to know
        // which part the target should be in.
        // for this problem, needs more conditions
        if((nums[right]>nums[mid] && nums[mid]<target && target<=nums[right]) || (nums[right]<=nums[mid] && !(nums[mid]>=target && target>=nums[left]))){
            left=mid+1;
        }
        else{
            right=mid;
        }
    }
    if(left!=nums.size() && nums[left]==target){
        return left;
    }
    return -1;
}};