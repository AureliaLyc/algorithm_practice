#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string numberToWords(int num) {
        if(num==0) return "zero";
        vector<string> td={"", "Thousand", "Million", "Billion"};
        vector<string> di={"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
        vector<string> dj={"", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
        vector<string> ti={"", "Ten", "Twenty", "Thirty", "Fourty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
        vector<string> v;
        int t=0;
        while(num){
            int loc=num%1000;
            int n1=loc%10;
            int n2=(loc/10)%10;
            int n3=loc/100;
            if(t){
                v.push_back(td[t]);
            }
            if(n2==1&&n1){
                v.push_back(dj[(loc%100)-10]);
            }
            else if(n1){
                v.push_back(di[n1]);
            }
            if(n2>1){
                v.push_back(ti[n2]);
            }
            if(n3){
                v.push_back("Hundred");
                v.push_back(di[n3]);
            }
            ++t;
            num/=1000;
        }
        int size=v.size();
        string res;
        for(int i=size-1; i>=0; --i){
            res+=v[i];
            if(i!=0) res+=" ";
        }
        return res;
    }
};
int main(int argc, char const *argv[])
{
    Solution abc;
    abc.numberToWords(12345);
    return 0;
}