class Solution {
public:
    int candy(vector<int>& ratings) {
        int size=ratings.size();
        vector<int> candys(size, 1);
        for(int i=1; i<size; ++i){
            if(ratings[i-1]<ratings[i]){
                candys[i]=max(candys[i], candys[i-1]+1);
            }
        }
        for(int i=size-2; i>=0; --i){
            if(ratings[i]>ratings[i+1]){
                candys[i]=max(candys[i], candys[i+1]+1);
            }
        }
        int res=0;
        for(auto i:candys){
            res+=i;
        }
        return res;
    }
};