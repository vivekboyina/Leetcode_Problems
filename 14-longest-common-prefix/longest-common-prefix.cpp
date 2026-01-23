class Solution {
public:
    string longestCommonPrefix(vector<string>& st) {
        vector<pair<char,int>>vp;
        for(char i : st[0]) vp.push_back({i,1});
        for(int i = 1; i < st.size(); i++)
        {
            for(int j = 0; j < st[i].length(); j++)
            {
                if(j >= vp.size() || st[i][j] != vp[j].first) break;
                if(vp[j].first == st[i][j]) vp[j].second+=1;
            }
        }
        int k = st.size();
        string ans = "";
        for(int i = 0; i < vp.size(); i++) 
        {
            if(vp[i].second == k) ans+=vp[i].first;
            else break;
        }
        return ans;
    }
};