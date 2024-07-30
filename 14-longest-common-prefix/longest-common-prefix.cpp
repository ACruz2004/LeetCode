class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        std::string prefix = strs[0];
        
        // Check if it's empty
        if (strs.empty()) {
            prefix = "";
        }

        //For strings you can use substr()
        for (int i = 0; i < strs.size(); ++i) {
            int j = 0;
            while (j < prefix.size() && j < strs[i].size() && prefix[j] == strs[i][j]) {
            ++j;
            }
            //substr
            prefix = prefix.substr(0,j);
        }
        return prefix;
    }
};