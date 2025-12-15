class Solution {
public:
    long long getDescentPeriods(vector<int>& pr) {
        vector<int>dp(pr.size());
        dp[0] = 1;
        long long ans = 1;
        for(int i = 1; i < pr.size(); i++)
        {
            if((pr[i - 1] - pr[i]) == 1) dp[i] = dp[i - 1] + 1;
            else dp[i] = 1;
            ans+=dp[i];
        }
        return ans;
    }
};