// Done on Friday, October 5th 2024
class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        // If the size of the even array is 2 then return them multiplied
        if (skill.size() == 2) {
            return skill[0] * skill[1];
        }
        // Also find out how many teams there will be for sorting
        int teamNum = skill.size() / 2;

        // Sort the numbers in order from largest to smallest
        sort(skill.begin(), skill.end());

        // Group the largest and the smallest number
        // Array of totals
        vector<int> teamSkills(teamNum);
        vector<int> chemistry(teamNum);
        int amount = skill.size();
        for (int i = 0; i < teamNum; i++) {
            teamSkills[i] = skill[i] + skill[amount - 1]; 
            chemistry[i] = skill[i] * skill[amount - 1];
            amount = amount - 1;
        }

        // Is the teams fair
        bool isFair = true;
        for (int i = 1; i < teamNum; ++i) {
            if (teamSkills[i] != teamSkills[i - 1]) {
                isFair = false;
                break;
            }
        }

        // Finding what overall chemistry is
        int chemSize = chemistry.size();
        long sum = 0;
        if (isFair) {
            for (int i = 0; i < chemSize; ++i) {
                sum = sum + chemistry[i];
            }
            return sum;
        }
        // Returns -1 if the requirements aren't met
        return -1;
    }
};
