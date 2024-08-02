class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int ones = 0;
        int size = nums.size();

        for (int num : nums) {           // Check how many ones are present
            if (num == 1){
                ++ones;
            }
        }

        if (size == 0 || size == ones) { // If size if zero return zero
            return 0;
        }

        int current = 0;
        for (int i = 0; i < ones; ++i) {
            if (nums[i] == 0) {
                ++current;               
            }
        }

        int minimum = current;

        for (int i = 1; i < size; ++i) {
            if (nums[i - 1] == 0) {
                --current;
            }
            if (nums[(i + ones - 1) % size] == 0) {
                ++current;
            }
            if (current < minimum) {
                minimum = current;
            }
        }
        return minimum;
    }
};