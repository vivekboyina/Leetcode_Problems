class Solution {
public:
    string largestWordCount(vector<string>& msg, vector<string>& snd) {
        unordered_map<string,int>mp;
        int m = 0;
        for(int i = 0; i < snd.size(); i++)
        {
            if(mp.find(snd[i]) != mp.end()) mp[snd[i]]+=(count(msg[i].begin(),msg[i].end(),' ') + 1);
            else mp[snd[i]] = count(msg[i].begin(),msg[i].end(),' ') + 1;
            m = max(m,mp[snd[i]]);
        }
        string ans = "";
        cout << m << endl;
        for(auto i : mp) if(i.second == m) ans = max(ans,i.first);
        return ans;
    }
};