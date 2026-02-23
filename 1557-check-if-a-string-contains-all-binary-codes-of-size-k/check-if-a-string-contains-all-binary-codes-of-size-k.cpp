class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(s.length() <= k) return false; 
        unordered_set<string>st;
        string a = "";
        for(int i = 0; i < k; i++) a+=s[i];
        st.insert(a);
        for(int i = k; i < s.length(); i++)
        {
            a.erase(a.begin());
            a+=s[i];
            st.insert(a);
        }
        return (st.size() == 1 << k);
    }
};