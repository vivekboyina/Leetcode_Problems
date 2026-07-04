class Solution {
public:
    bool wordPattern(string ptrn, string s) {
        unordered_map<string,char>mp;
        vector<bool>ch(26,false);
        int j = 0,n = s.length();
        string k = "";
        for(int i = 0; i < n; i++)
        {
            if(s[i] == ' ' || i == n - 1)
            {
                if(i == n - 1) k+=s[i];
                if(mp.find(k) == mp.end() && !ch[ptrn[j] - 'a'])
                {
                    ch[ptrn[j] - 'a'] = true;
                    mp[k] = ptrn[j];
                    j+=1;
                }
                else if(mp.find(k) != mp.end() && ch[ptrn[j] - 'a'] && mp[k] == ptrn[j]) j+=1;
                else return false;
                k = "";
            }
            else k+=s[i];
            if(i < n - 1 && j >= ptrn.length()) return false;
        }
        return j == ptrn.length();
    }
};