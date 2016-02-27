


class Solution {
public:
    int trap(vector<int>& height) {
        int res=0;
        int left=0;
        int right=height.size()-1;
        int safeHeight=0;
        while(left<right){
            int low=height[left]<=height[right]?height[left++]:height[right--];
            safeHeight=max(safeHeight, low);
            res+=safeHeight-low;
        }
        return res;
    }
};