class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        int m = s1.length(),n = s2.length();
        int dp[m + 1][n + 1],ans = 0;
        for(int i = 0; i <= m; i++) dp[i][0] = 0;
        for(int i = 0; i <= n; i++) dp[0][i] = 0;
        for(int i = 1; i <= m; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(s1[i - 1] == s2[j - 1]) dp[i][j] = (int)s1[i - 1] + dp[i - 1][j - 1];
                else dp[i][j] = max(dp[i - 1][j],dp[i][j - 1]);
            }
        }
        int t = 0;
        for(char i : s1) t+=(int)i;
        for(char i : s2) t+=(int)i;
        return t - 2*dp[m][n];
    }
};