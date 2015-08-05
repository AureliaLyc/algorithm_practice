#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        std::vector<int> v(nums.begin()+nums.size()-k, nums.end());
        for (int i = 0; i < nums.size()-k; ++i)
        {
            v.push_back(nums[i]);
        }
        swap(v, nums);
    }
};

int main(int argc, char const *argv[])
{
    int a[] = {1,2};
    std::vector<int> v(a, a+sizeof(a)/sizeof(int));
    Solution abc;
    abc.rotate(v, 1);
    return 0;
}