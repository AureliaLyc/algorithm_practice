class Solution {
public:
    bool isPalindrome(int x) {
        int y = 0;
        if(x < 0 ) return false;

        while(x > y){
            y = y*10 + x%10;
            if( y == 0 ){
                return false;
            }
            if( x == y ){
                return true;
            }
            x /= 10;
        }
        return (x == y);
    }
};