class Solution {
public:
    int countTriples(int n) {
        unordered_map<int,int>mp;
        for(int i = 1; i <= n; i++) mp[i*i]+=1;
        int cnt = 0;
        for(int i = 1; i <= (n - 1); i++) for(int j = i + 1; j <= n; j++) if(mp.find(i*i + j*j) != mp.end()) cnt++;
        return cnt*2;
    }
};