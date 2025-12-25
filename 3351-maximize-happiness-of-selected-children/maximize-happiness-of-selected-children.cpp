class Solution {
public:
    long long maximumHappinessSum(vector<int>& hap, int k) {
        long long ans = 0,t = 0;
        sort(hap.begin(),hap.end(),greater<int>());
        for(int i = 0; i < hap.size(); i++)
        {
            if(k > 0 && hap[i] - t > 0)
            {
                ans+=(hap[i] - t);
                t+=1;
                k-=1;
            }
            if(k == 0) break;
        }
        return ans;
    }
};