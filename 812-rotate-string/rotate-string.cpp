class Solution {
public:
    bool rotateString(string s, string g) {
        string t = s;
        while(t != g)
        {
            char c = t[0];
            t.erase(0,1);
            t.push_back(c);
            if(t == s) return false;
        }
        return true;
    }
};