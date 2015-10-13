class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int size=triangle.size();
        int res=0;
        if(size){
            vector<int> v(size, 0);
            v[0]=triangle[0][0];
            for(int r=1; r<size; ++r){
                int t=v[0];
                for(int i=0; i<=r; ++i){
                    if(i==0 || i==r){
                        v[i]=t+triangle[r][i];
                    }
                    else{
                        int ad = min(t,v[i]);
                        t=v[i];
                        v[i]=ad+triangle[r][i];
                    }
                }
            }
            res=v[0];
            for(int i=1; i<size; ++i){
                res=min(res, v[i]);
            }
        }
        return res;
    }
};

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int size=triangle.size();
        vector<int> v(triangle[size-1]);
        for(int i=size-2; i>=0; --i){
            for(int j=0; j<=i; ++j){
                v[j]=triangle[i][j]+min(v[j],v[j+1]);
            }
        }
        return v[0];
    }
};