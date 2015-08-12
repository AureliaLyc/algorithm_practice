#include <string>
#include <vector>
#include <cstdio>
using namespace std;

class Solution {
public:
    bool flags[10];

    bool isValidSudoku(vector<vector<char> >& board) {
        bool a = isValidHor( board );
        bool b = isValidVer( board );
        bool c = isValidSquare( board );
        return a && b && c;
    }
    bool isValidSquare(vector<vector<char> >& board){
        for(int i=0; i<9; ++i){
            memset(flags, 0, sizeof(flags));
            for(int j=0; j<9; ++j){
                // this is critical
                int x = i/3*3+j/3;
                int y = (i*3+j%3)%9;
                // printf("%d, %d\n", x, y);
                char me = board[x][y];
                if( me != '.' ){
                    if(flags[me-'0']){
                        return false;
                    }
                    else{
                        flags[me-'0'] = true;
                    }
                }
            }
        }
        return true;
    }
    bool isValidVer(vector<vector<char> >& board){
        for(int i=0; i<9; ++i){
            memset(flags, 0, sizeof(flags));
            for(int j=0; j<9; ++j){
                char me = board[j][i];
                if( me != '.' ){
                    if(flags[me-'0']){
                        return false;
                    }
                    else{
                        flags[me-'0'] = true;
                    }
                }
            }
        }
        return true;
    }
    bool isValidHor(vector<vector<char> >& board){
        for(int i = 0; i < 9; ++i){
            memset(flags, 0, sizeof(flags));
            vector<char>& v = board[i];
            for(int j=0; j<9; ++j){
                char me = v[j];
                if( me != '.' ){
                    if( flags[me-'0'] ){
                        return false;
                    }
                    else{
                        flags[me-'0'] = true;
                    }
                }
            }
        }
        return true;
    }
};

int main(int argc, char const *argv[])
{
    //char cs[] = ".876543212........3........4........5........6........7........8........9........";
    char cs[] = "...............3.....18.......7.........1.97.............36.1..................2.";
    vector<char> a1(cs, cs+9);
    vector<char> a2(cs+9, cs+18);
    vector<char> a3(cs+18, cs+27);
    vector<char> a4(cs+27, cs+36);
    vector<char> a5(cs+36, cs+45);
    vector<char> a6(cs+45, cs+54);
    vector<char> a7(cs+54, cs+63);
    vector<char> a8(cs+63, cs+72);
    vector<char> a9(cs+72, cs+81);
    vector<vector<char> > a;
    a.push_back(a1);
    a.push_back(a2);
    a.push_back(a3);
    a.push_back(a4);
    a.push_back(a5);
    a.push_back(a6);
    a.push_back(a7);
    a.push_back(a8);
    a.push_back(a9);

    Solution abc;
    printf( "%s", abc.isValidSudoku( a ) ? "true" : "false");
    return 0;
}