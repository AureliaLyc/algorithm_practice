class Solution {
public:
    int largestRectangleArea(vector<int>& height) {
        int size=height.size();
        stack<int> acs;
        int i=0;
        int area=0;
        while(i<=size){
            int h=i==size?0:height[i];
            if(acs.empty() || height[acs.top()]<h){
                acs.push(i++);
            }
            else{
                int pos=acs.top();
                acs.pop();
                area=max(area, height[pos]*(acs.empty()? i : i-acs.top()-1));
            }
        }
        return area;
    }
};