class Solution {
public:
    vector<string> topKFrequent(vector<string>& wo, int k) {
        unordered_map<string,int>mp;
        for(string i : wo) mp[i]++;
        vector<pair<int,string>>vp;
        for(auto i : mp) vp.push_back({i.second,i.first});
        sort(vp.begin(), vp.end(),
            [](pair<int,string>& a, pair<int,string>& b) {
                if(a.first == b.first)
                    return a.second < b.second;
                return a.first > b.first;
            });
        vector<string>ans;
        for(int i = 0; i < k; i++) ans.push_back(vp[i].second);
        return ans;
    }
};