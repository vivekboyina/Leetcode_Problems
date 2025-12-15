class Solution {
public:
    long long getDescentPeriods(vector<int>& pr) {
        long long ans = 1,dp = 1;
        for(int i = 1; i < pr.size(); i++)
        {
            if((pr[i - 1] - pr[i]) == 1) dp = dp + 1;
            else dp = 1;
            ans+=dp;
        }
        return ans;
    }
};