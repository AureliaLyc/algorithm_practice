#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        build(res, nums, 0);
        return res;
    }
    void build(vector<vector<int>>& res, vector<int>& nums, int start){
        if(start=nums.size()){
            res.push_back(nums);
        }
        else{
            build(res, nums, start+1);
            for(int i=start+1; i<nums.size(); ++i){
                swap(nums[start], nums[i]);
                build(res, nums, start+1);
                swap(nums[start], nums[i]);
            }
        }
    }
};

int main(int argc, char const *argv[])
{
    vector<int> v={0,1};
    Solution abc;
    abc.permute(v);
    return 0;
}