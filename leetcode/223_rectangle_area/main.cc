#include <algorithm>

class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int area1 = getArea(C-A, D-B);
        int area2 = getArea(G-E, H-F);
        int Y = getIntersection(B, D, F, H);
        int X = getIntersection(A, C, E, G);
        return area2+area1- getArea(X, Y);
    }

    int getIntersection(int y1, int y2, int y3, int y4){
        int res1 = std::max(y1, y3);
        int res2 = std::min(y2, y4);
        return res2 > res1 ? res2-res1 : 0;
    }

    inline int getArea(int x, int y){
        return x*y;
    }
};


int main(int argc, char const *argv[])
{
    Solution sol;
    int a = sol.computeArea(-1500000001, 0, -1500000000, 1, 1500000000, 0, 1500000001, 1);
    return 0;
}