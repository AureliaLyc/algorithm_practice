class Solution {
public:
    void reverseWords(string &s) {
        int size=s.length();
        int start=0, end=-1;
        bool status=true;
        for(int i=0; i<=size; ++i){
            if(status && i<size && s[i]!=' '){
                start=i;
                status= !status;
            }
            else if(!status && (i==size || s[i]==' ')){
                status= !status;
                reverseWord(s, end+1, i);
                end=i-(start-(end+1));
            }
        }
        s.erase(end==-1?0:end);
        reverse(s.begin(), s.end());
    }
    void reverseWord(string& s, int start, int end){
        int halfsize=(end-start)/2;
        for(int i=0; i<halfsize; ++i){
            swap(s[i+start], s[end-i-1]);
        }
    }
};

class Solution {
public:
void reverseWords(string &s) {
    int size=s.length();
    int l=0;
    for(int r=0; r<size; ++r){
        // check if r the ending char.
        if(s[r]!=' '&&(r==size-1||s[r+1]==' ')){
            // starting to reverse. But for the beginning, no space.
            int m=l==0?l:++l, n=r;
            while(m<n) swap(s[m++], s[n--]);
            while(l<size&&s[l]!=' ')++l;
        }
    }
    s.erase(l);
    reverse(s.begin(), s.end());
}};