#include <vector>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int size=height.size();
        int l=0;
        int r=size-1;
        int res=0;
        int pl=0;
        while(l<r){
            int lh=min(height[r], height[l]);
            int water=(r-l-1)*(lh>pl?(lh-pl):0); // newly added higher water.
            res+=water;
            res-=min(lh, pl);
            pl=max(pl, lh);
            height[l]<height[r]?++l:--r;
        }
        return res;
    }
};

int main(int argc, char const *argv[])
{
    vector<int> v={2,1,0,2};
    Solution abc;
    abc.trap(v);
    return 0;
}