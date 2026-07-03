class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>mp;
        for(char i : text) if(i =='b'|| i == 'a' || i == 'l' || i == 'n' || i == 'o') mp[i]+=1;
        int ans = INT_MAX;
        if(mp.size() < 5) return 0;
        for(auto it : mp)
        {
            if(it.first == 'l' || it.first == 'o') ans = min(ans,it.second/2);
            else ans = min(ans,it.second);
        }
        return ans;
    }
};