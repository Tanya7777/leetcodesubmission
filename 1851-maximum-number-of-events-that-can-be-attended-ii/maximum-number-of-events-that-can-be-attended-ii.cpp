class Solution {
public:
    int maxValue(vector<vector<int>>& events, int k) {
        int n = events.size();
        sort(events.begin(), events.end());

        vector<int> startDays(n);
        for (int i = 0; i < n; ++i) {
            startDays[i] = events[i][0];
        }

        vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));

        for (int i = n - 1; i >= 0; --i) {
            for (int t = 1; t <= k; ++t) {
                int next = upper_bound(startDays.begin(), startDays.end(), events[i][1]) - startDays.begin();
                int take = events[i][2] + dp[next][t - 1];
                int skip = dp[i + 1][t];
                dp[i][t] = max(take, skip);
            }
        }

        return dp[0][k];
    }
};
