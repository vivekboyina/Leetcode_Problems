class Solution {
public:
    int maxVowels(string s, int k) {
        string c = "";
        int ans = 0,cnt = 0;
        for(int i = 0; i < k; i++) c+=s[i];
        string a = "aeiou";
        for(int i = 0; i < 5; i++) cnt+=count(c.begin(),c.end(),a[i]);
        ans = max(ans,cnt);
        for(int i = k; i < s.length(); i++)
        {
            if(a.find(s[i - k]) != string::npos) cnt-=1;
            if(a.find(s[i]) != string::npos) cnt+=1;
            ans = max(ans,cnt);
        }
        return ans;
    }
};