class Solution {
public:
    int minimumLength(string s) {
        int ans = 0;
        unordered_map<int,int>mp;
        for(char i : s) mp[i]++;
        for(auto i : mp)
        {
            while(i.second >= 3) 
            {
                ans+=2;
                i.second-=2;
            }
        }
        return (s.length() - ans);
    }
};