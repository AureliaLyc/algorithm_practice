class Solution {
public:
    void process(string& s, int val, char f, char o, char t){
        if(val == 0){
            return;
        }
        if(val < 4){
            for(int i=0; i<val; ++i){
                s.push_back(o);
            }
        }
        else if(val == 4){
            s.push_back(o);
            s.push_back(f);
        }
        else if(val >= 5 && val < 9){
            s.push_back(f);
            for(int i=0; i<val-5; ++i){
                s.push_back(o);
            }
        }
        else{
            s.push_back(o);
            s.push_back(t);
        }
    }
    string intToRoman(int num) {
        string res;
        int one = num%10;
        int ten = 0, hund=0, thou=0;
        int result = num/10;
        if(result){
            ten = result%10;
            result /= 10;
        }
        if(result){
            hund = result%10;
            thou = result/10;
        }
        for(int i =0; i<thou; ++i){
            res.push_back('M');
        }
        process(res, hund, 'D', 'C', 'M');
        process(res, ten, 'L', 'X', 'C');
        process(res, one, 'V', 'I', 'X');
        return res;
    }
};