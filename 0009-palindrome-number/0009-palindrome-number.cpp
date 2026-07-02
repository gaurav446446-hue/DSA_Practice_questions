class Solution {
public:
    bool isPalindrome(int x) {
        int temp =x;
        int ld = 0;
        long long y =0;
        while(x>0){
            ld = x%10;
             y = y * 10 + ld;
             x= x/10;
        }
        if(y == temp) return 1;
        else return 0;
    }
};