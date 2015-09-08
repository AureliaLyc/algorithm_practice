#include <vector>
using namespace std;
void permute(vector<vector<int> >& ans, vector<int>& perm, int begin);
vector<vector<int> > permute(vector<int>& nums) {
    vector<vector<int> > ans;
    permute(ans, nums, 0);
    return ans;
}

void permute(vector<vector<int> >& ans, vector<int>& perm, int begin)
{
    if (begin == perm.size()) {
        ans.push_back(perm);
        return;
    }

    for (int i=begin; i<perm.size(); i++) {
        if (i!=begin && perm[i] == perm[begin]) continue;
        swap(perm[i], perm[begin]);
        permute(ans, perm, begin+1);
        swap(perm[i], perm[begin]);
    }

}


int main(int argc, char const *argv[])
{
    int a[]={1,2,3};
    std::vector<int> v(a, a+sizeof(a)/sizeof(int));
    permute(v);
    return 0;
}