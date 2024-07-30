class Solution {
public:
    bool isPalindrome(int x) {
        long revNum = 0;
        long ogNum = x;
        long mod = 0;
        for (int i = 0; i < x; ++i) {
            while (x != 0) {
                revNum = revNum * 10;
                mod = x % 10;
                revNum = revNum + mod;
                x = x / 10;
            }
        }
        //Checking for negatives
        if (revNum < 0 || ogNum < 0) {
            return false;
        }
        else { 
            return (revNum == ogNum);
        }
    }
};