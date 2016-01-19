#include <vector>
#include <cstdlib>
#include <unordered_map>
#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
    Point() : x(0), y(0) {}
    Point(int a, int b) : x(a), y(b) {}
};

/**
 * Definition for a point.
 * struct Point {
 *     int x;
 *     int y;
 *     Point() : x(0), y(0) {}
 *     Point(int a, int b) : x(a), y(b) {}
 * };
 */
class Solution {
public:
    int maxPoints(vector<Point>& points) {
        int size=points.size();
        int res=0;
        for(int i=0; i<size; ++i){
            int dups=0;
            map<int, map<int, int>> um;
            for(int j=i+1; j<size; ++j){
                int diffX=points[i].x-points[j].x;
                int diffY=points[i].y-points[j].y;
                if(diffX==0 && diffY==0){
                    ++dups;
                }
                else if(diffX==0){
                    um[0][INT_MAX]++;
                }
                else{
                    int g=gcd(diffX, diffY);
                    um[diffX/g][diffY/g]++;
                }
            }
            int cur=0;
            for(auto m:um){
                for(auto n:m.second){
                    cur=max(cur, n.second);
                }
            }
            res=max(res, cur+1+dups);
        }
        return res;
    }
    int gcd(int a, int b){
        if(a==0) return b;
        return gcd(b%a, a);
    }
};
int main(int argc, char const *argv[])
{
    vector<Point> v{{0,0},{0,1}};
    Solution abc;
    abc.maxPoints(v);
    return 0;
}