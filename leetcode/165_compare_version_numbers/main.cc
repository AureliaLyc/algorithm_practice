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

int main(int argc, char const *argv[])
{
    string v1("1.0");
    string v2("1.1");
    compareVersion(v1, v2);
    return 0;
}