class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        bool found = false;
        int sum;
        vector<int> sumNums(2);

        for (int i = 0; i < nums.size(); ++i) {
            if (found == false) {
                for (int j = 0; j < nums.size(); ++j) {
                    sum = nums[i] + nums[j];
                    if (i == j) {
                        break;
                    }
                    if (sum == target) {
                        found = true;
                        sumNums[0] = i;
                        sumNums[1] = j;
                        break;
                    }
            }
            } else {
                break;
            }
        }
        return sumNums;
    }
};

