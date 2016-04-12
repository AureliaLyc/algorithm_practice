class Solution {
public:
    int hIndex(vector<int>& citations) {
        int size=citations.size();
        vector<int> d(size, 0);
        int res=0;
        for(auto i: citations){
            int j=min(size, i);
            if(j>0){
                ++d[j-1];
            }
        }
        int sum=0;
        for(int i=size; i>0; --i){
            sum+=d[i-1];
            res=max(min(i, sum), res);
        }
        return res;
    }
};

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int size=citations.size();
        vector<int> d(size, 0);
        int res=0;
        --size;
        for(auto i: citations){
            int j=min(size, i-1);
            while(j>=0&&d[j]<=j){
                res=max(res, ++d[j--]);
            }
        }
        return res;
    }
};

class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        int size=citations.size();
        int res=0;
        for(int i=0; i<size; ++i){
            res=max(res, min(citations[i], size-i));
        }
        return res;
    }
};