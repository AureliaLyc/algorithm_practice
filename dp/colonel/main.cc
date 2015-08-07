#include <vector>
#include <iostream>
int e1 = 2;
int e2 = 4;

int a[2][6] = {{7, 9, 3, 4, 8, 4}, {8, 5, 6, 4, 5, 7}};
int t[2][5] = {{2, 3, 1, 3, 4}, {2, 1, 2, 2, 1}};

int x1 = 3;
int x2 = 2;

class Solution{
public:
    void fastWay(){
        std::vector<std::vector<int> > f(2, std::vector<int> (6, 0));
        std::vector<int> line1;
        std::vector<int> line2;

        // this is initial state.
        f[0][0]=e1 + a[0][0];
        f[1][0]=e2 + a[1][0];
        int finalF, finalL;

        // recursive. I will calculate all of f, and save them.
        for (int j = 1; j < 6; ++j)
        {
            int left = f[0][j-1] + a[0][j];
            int right = f[1][j-1] + t[1][j-1] + a[0][j];

            if (left < right)
            {
                f[0][j] = left;
                line1.push_back(1);
            }
            else{
                f[0][j] = right;
                line1.push_back(2);
            }

            if(f[1][j-1] + a[1][j] < f[0][j-1] + t[0][j-1] + a[1][j]){
                f[1][j] = f[1][j-1] + a[1][j];
                line2.push_back(2);
            }
            else{
                f[1][j] = f[0][j-1] + t[0][j-1] + a[1][j];
                line2.push_back(1);
            }
        }

        if (f[0][5] + x1 < f[1][5] + x2)
        {
            finalF = f[0][5] + x1;
            finalL = 1;
        }
        else{
            finalF = f[1][5] + x2;
            finalL = 2;
        }


        for (int i = 0; i <= 4; ++i)
        {
            std::cout << "line: " << ((finalL == 1) ? line1[i] : line2[i] ) << ", station: " << i+1 << std::endl;
        }
        std::cout << "line: " << finalL << ", station: " << 6 << std::endl;
    }
};

int main(int argc, char const *argv[])
{
    Solution abc;
    abc.fastWay();
    return 0;
}