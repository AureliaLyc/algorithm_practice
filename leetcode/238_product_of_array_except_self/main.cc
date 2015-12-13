class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size=nums.size();
        vector<int> left(size-1);
        vector<int> right(size-1);
        for(int i=0; i<size-1; ++i){
            left[i]=i==0?nums[i]:left[i-1]*nums[i];
        }
        for(int j=size-1; j>0; --j){
            right[j-1]=(j==size-1)?nums[j]:right[j]*nums[j];
        }
        vector<int> res(size, 0);
        res[0]=right[0];
        res[size-1]=left[size-2];
        for(int i=1; i<size-1; ++i){
            res[i]=right[i]*left[i-1];
        }
        return res;
    }
};

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size=nums.size();
        vector<int> res(size, 1);
        res[0]=1;
        for(int i=1; i<size; ++i){
            res[i]=res[i-1]*nums[i-1];
        }
        int right=1;
        for(int i=size-1; i>=0; --i){
            res[i]*=right;
            right*=nums[i];
        }
        return res;
    }
};