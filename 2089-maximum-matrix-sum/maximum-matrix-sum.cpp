class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& m) {
        long long ans = 0,cnt = 0,miny = LLONG_MAX;
        for(auto i : m)
        {
            for(auto j : i)
            {
                if(abs(j) < miny) miny = abs(j);
                if(j < 0) cnt+=1;
                ans+=abs(j);
            }
        }
        if(cnt % 2 == 0) return ans;
        return ans - 2*miny;
    }
};