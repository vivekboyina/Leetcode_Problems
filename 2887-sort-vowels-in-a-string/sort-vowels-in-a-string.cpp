class Solution {
public:
    string sortVowels(string s) {
        vector<char>aa;
        string a = "AEIOU",b = "aeiou";
        for(int i = 0; i < s.length(); i++)
        {
            if(find(a.begin(),a.end(),s[i]) != a.end())
            {
                aa.push_back(s[i]);
                s[i] = '-';
            }
            else if(find(b.begin(),b.end(),s[i]) != b.end())
            {
                aa.push_back(s[i]);
                s[i] = '-';
            }
        }
        if(aa.size() == 0) return s;
        sort(aa.begin(),aa.end());
        int j = 0;
        for(int i = 0; i < s.length(); i++) if(s[i] == '-') s[i] = aa[j++];
        return s;
    }
};