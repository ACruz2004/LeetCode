class Solution {
public:
    int countSeniors(vector<string>& details) {
        int passNum = details.size();
        int seniorNum = 0;
        
        for (int i = 0; i < passNum; ++i) {     
            int tens = (details[i][11] - '0') * 10; // Get the number from the string by subtracting by the char value of zero
            int ones = (details[i][12] - '0');       // Same Here
            int sum = tens + ones;                   // Calculate the sum
  
            if (sum > 60) {
                ++seniorNum;                         // If the sum is greater than or equal to 60 increment seniorNUm
            }
            
        }
        return seniorNum;
    }
};