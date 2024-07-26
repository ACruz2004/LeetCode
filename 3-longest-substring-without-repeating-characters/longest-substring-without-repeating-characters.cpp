class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLength = 0;

        // Iterate over each character as the start of the substring
        for (int start = 0; start < s.size(); ++start) {
            bool found[256] = {false}; // To track characters in the current window
            int currentLength = 0;

            // Expand the window
            for (int end = start; end < s.size(); ++end) {
                char currentChar = s[end];

                // If the character is already in the window, break out
                if (found[currentChar]) {
                    break;
                }

                // Mark the character as found and increase the current length
                found[currentChar] = true;
                ++currentLength;
            }

            // Update maxLength if the current window is larger
            maxLength = std::max(maxLength, currentLength);
        }

        return maxLength;
    }
};
