class Solution {
public:
    int romanToInt(string s) {
    int sum = 0;
        for (int i = 0; i < s.size(); ++i) {
            // For I
            if (s[i] == 'I') {
                // IV is four
                if (s[i + 1] == 'V') {
                    sum = sum - 1;
                }
                // IX is Nine
                else if (s[i + 1] == 'X') {
                    sum = sum - 1;
                }
                // If it's at the end of the string
                else {
                    sum = sum + 1;
                }
            }
            // For V (Easy)
            if (s[i] == 'V') {
                sum = sum + 5;
            }
            // For X
            if (s[i] == 'X') {
                if (s[i + 1] == 'L') {
                    sum = sum - 10;
                }
                else if (s[i + 1] == 'C') {
                    sum = sum - 10;
                }
                else {
                    sum = sum + 10;
                }
            }
            // For L (Easy)
            if (s[i] == 'L') {
                sum = sum + 50;
            }
            // For C
            if (s[i] == 'C') {
                if (s[i + 1] == 'D') {
                    sum = sum - 100;
                }
                else if (s[i + 1] == 'M') {
                    sum = sum - 100;
                }
                else {
                    sum = sum + 100;
                }
            }
            // For D (EZ)
            if (s[i] == 'D') {
                sum = sum + 500;
            }
            // For M (EZ)
            if (s[i] == 'M') {
                sum = sum + 1000;
            }
        }
        return sum;
    }
};