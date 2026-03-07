class Solution {
public:
    int equalSubstring(string s, string t, int mc) {
        int l = 0,c = 0,ans = 0;
        for(int r = 0; r < t.length(); r++)
        {
            if(s[r] != t[r]) c+=abs(s[r] - t[r]);
            while(c > mc)
            {
                c-=abs(s[l] - t[l]);
                l++;
            }
            ans = max(ans,r - l + 1);
        }
        return ans;
    }
};