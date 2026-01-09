class Solution {
public:
    int maxSatisfaction(vector<int>& s) {
        sort(s.begin(),s.end(),greater<int>());
        int ans = 0,cs = 0;
        for(int i = 0; i < s.size(); i++)
        {
            cs+=s[i];
            if(cs > 0) ans+=cs;
            else break;
        }
        return ans;
    }
};