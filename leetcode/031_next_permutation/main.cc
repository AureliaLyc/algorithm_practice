#include <vector>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int size = nums.size();
        if(size < 2){
            return;
        }
        int right = size-1;
        int left = right;
        while(left>0 && nums[left]<=nums[left-1]){
            --left;
        }
        int shift = -1;
        if(left>0){
            shift = left-1;
        }
        while(right>left){
            swap(nums[right--], nums[left++]);
        }
        right = shift+1;
        while(shift>=0 && right<size){
            if(nums[shift]<nums[right]){
                swap(nums[shift],nums[right]);
                break;
            }
            right++;
        }
    }
};
class Solution2 {
public:
    void nextPermutation(vector<int>& nums) {
        int size = nums.size();
        if(size < 2){
            return;
        }
        int right = size-1;
        int left = right;
        while(left>0 && nums[left]<=nums[left-1]){
            --left;
        }
        int shift = -1;
        if(left>0){
            shift = left-1;
        }
        while(right>left){
            swap(nums[right--], nums[left++]);
        }
        right = shift+1;
        if(shift>=0){
            vector<int>::iterator p = nums.begin()+right;
            vector<int>::iterator fnd = lower_bound(p, nums.end(), nums[shift]+1);
            swap(nums[shift], *fnd);
        }
    }
};