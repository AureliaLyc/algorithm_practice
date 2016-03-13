#include <string>
#include <vector>
using namespace std;


int compareVersion(string version1, string version2) {

    do{
        int v1 = 0;
        if(!version1.empty()){
            v1 = stoi(version1);
        }
        int v2 = 0;
        if (!version2.empty()){
            v2 = stoi(version2);
        }

        if( v1 != v2 ){
            return v1 > v2 ? 1 : -1;
        }
        size_t f = version1.find('.');
        if( f != string::npos ){
            version1 = version1.substr( f+1 );
        }
        else{
            version1.clear();
        }
        f = version2.find('.');
        if( f != string::npos ){
            version2 = version2.substr( f+1 );
        }
        else{
            version2.clear();
        }
    } while( !version1.empty() || !version2.empty());
    return 0;
}
class Solution {
public:
    int compareVersion(string version1, string version2) {
        do{
            int v1=version1.empty()?0:stoi(version1);
            int v2=version2.empty()?0:stoi(version2);
            if(v1!=v2){
                return v1>v2?1:-1;
            }
            auto dot=version1.find_first_of('.');
            version1=dot==string::npos?"":version1.substr(dot+1);
            dot=version2.find_first_of('.');
            version2=dot==string::npos?"":version2.substr(dot+1);
        } while(!version1.empty()||!version2.empty());
        return 0;
    }
};