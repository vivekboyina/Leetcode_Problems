class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        unordered_map<int,int> mp, ma;
        const long long MOD = 1000000007;

        for(int i : nums) mp[i]++;

        long long cnt = 0;

        for(int i : nums)
        {
            if(mp.find(i*2) != mp.end() && ma.find(i*2) != ma.end())
            {
                if(i == 0)
                    cnt = (cnt + ( (1LL * ma[i*2] * (mp[i*2] - ma[i*2] - 1)) % MOD )) % MOD;
                else
                    cnt = (cnt + ( (1LL * ma[i*2] * (mp[i*2] - ma[i*2])) % MOD )) % MOD;
            }

            ma[i]+=1;
        }

        return (int)(cnt % MOD);
    }
};
