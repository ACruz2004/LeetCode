class Solution {
public:
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
       int n = books.size();
        std::vector<int> dp(n + 1, INT_MAX); // Dynamic programming, read about 
        dp[0] = 0;  

        // Iterate over all books
        for (int i = 1; i <= n; ++i) {
            int width = 0;
            int height = 0;
            
            for (int j = i; j > 0; --j) {
                width += books[j - 1][0];
                if (width > shelfWidth) break;
                height = std::max(height, books[j - 1][1]);
                dp[i] = std::min(dp[i], dp[j - 1] + height);
            }
        }

        return dp[n];
    }
};