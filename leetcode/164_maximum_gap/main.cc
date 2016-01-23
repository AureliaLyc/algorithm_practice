class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int size=nums.size();
        if(size<2) return 0;
        auto ret=minmax_element(nums.begin(), nums.end());
        int low=*ret.first;
        int high=*ret.second;
        int gap=max(1, (high-low)/(size-1));
        int m=(high-low)/gap + 1;
        vector<int> lows(m, INT_MAX);
        vector<int> highs(m, INT_MIN);
        for(auto i:nums){
            int k=(i-low)/gap;
            lows[k]=min(lows[k], i);
            highs[k]=max(highs[k], i);
        }
        int i=0;
        int j=0;
        int res=highs[0]-lows[0];
        while(i<m){
            j=i+1;
            while(j<m && lows[j]==INT_MAX) ++j;
            if(j==m) break;
            res=max(res, lows[j]-highs[i]);
            i=j;
        }
        return res;
    }
};