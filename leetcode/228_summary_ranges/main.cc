#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        std::vector<string> v;
        int start = nums.front();
        int end = start;
        std::vector<int>::iterator i = nums.begin();
        ++i;
        for ( ;i != nums.end(); ++i)
        {
            int nextVal = *i;
            if (nextVal - end == 1)
            {
                end = nextVal;
            }
            else{
                string sCreated = createString(start, end);
                v.push_back(sCreated);
                start = nextVal;
                end = nextVal;
            }
        }
        string sCreated = createString(start, end);
        v.push_back(sCreated);
        // for (std::vector<string>::iterator i = v.begin(); i != v.end(); ++i)
        // {
        //     std::cout << *i << "," ;
        // }
        // std::cout << std::endl;
        // return v;
    }
    string createString(int start, int end){
        static char buf[1024];

        if (start == end)
        {
            snprintf(buf, 1024, "%d", start);
        }
        else{
            snprintf(buf, 1024, "%d->%d", start, end);
        }
        return string(buf);
    }
};

int main(){
    int myints[] = {0,1,2,4,5,7};
    std::vector<int> v(myints, myints + sizeof(myints)/sizeof(int));
    Solution sol;
    sol.summaryRanges(v);
    return 0;
}