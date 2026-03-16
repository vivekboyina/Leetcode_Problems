class Solution {
public:
    string removeOccurrences(string s, string p) {
        size_t pos = s.find(p);
        while(pos != string::npos)
        {
            s.erase(pos,p.length());
            pos = s.find(p);
        }
        return s;
    }
};