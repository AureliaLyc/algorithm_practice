#include<vector>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(nums.empty() || k < 1)
        return false;

        initVector(nums, k);
        for (int i = 0; i < nums.size(); ++i)
        {
            int val = nums[i];
            bool fnd = binary_search(vCan.begin(), vCan.end(), val);
            if (fnd)
            {
                return true;
            }
            else{
                if ( i+1 < nums.size() )
                {
                    int nextVal = nums[i+1];
                    std::vector<int>::iterator it = lower_bound(vCan.begin(), vCan.end(), nextVal);
                    vCan.erase(it);
                }
                if ( i+1+k < nums.size() )
                {
                    int nextVal = nums[i+1+k];
                    vCan.push_back(nextVal);
                    sort(vCan.begin(), vCan.end());
                }
            }
        }
        return false;
    }
    void initVector( std::vector<int>& nums, int k ){
        for (int i = 1; i < k+1 && i < nums.size(); ++i)
        {
            vCan.push_back( nums[i] );
        }
        sort(vCan.begin(), vCan.end());
    }
private:
    std::vector<int> vCan;
};

int main(int argc, char const *argv[])
{
    Solution sol1;
    int abc[] = {1,2,1};
    std::vector<int> v(abc, abc+3);
    bool res = sol1.containsNearbyDuplicate(v, 1);
    return 0;
}