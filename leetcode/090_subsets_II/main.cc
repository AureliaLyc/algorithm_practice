class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int> > res(1, vector<int>() );
        sort(nums.begin(), nums.end());
        int prev;
        int dupCnt=0;
        for(int i=0; i<nums.size(); ++i){
            dupCnt = (i>0 && nums[i]==prev) ? dupCnt+1 : 0;
            int size=res.size();
            for(int j=0; j<size; ++j){
                int vSize=res[j].size();
                if(dupCnt==0 || (vSize >= dupCnt && res[j][vSize-dupCnt] == prev) ){
                    res.push_back(res[j]);
                    res.back().push_back(nums[i]);
                }
            }
            prev=nums[i];
        }
        return res;
    }
};

class SolutionBackTracking {
public:
    void create(vector<vector<int>>& res, vector<int>& v, vector<int>& nums, int start){
        res.push_back(v);
        int pre;
        for(int i=start; i<nums.size(); ++i){
            while( i > start && i < nums.size() && pre==nums[i]) ++i;
            if(i<nums.size()){
                v.push_back(nums[i]);
                create(res, v, nums, i+1);
                v.pop_back();
                pre=nums[i];
            }
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int> > res;
        sort(nums.begin(), nums.end());
        vector<int> v;
        v.reserve(nums.size());
        create(res, v, nums, 0);
        return res;
    }
};