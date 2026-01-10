class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n == 0) return 0;
        vector<int>dp(n + 1);
        dp[0] = 0,dp[1] = 1;
        for(int i = 1; i <= n; i++)
        {
            if(i*2 <= n) dp[i*2] = dp[i];
            if(i*2 + 1 <= n) dp[i*2 + 1] = dp[i] + dp[i + 1];
        }
        return *max_element(dp.begin(),dp.end());
    }
};