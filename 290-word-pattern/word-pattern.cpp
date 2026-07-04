class Solution {
public:
    bool wordPattern(string ptrn, string s) {
        unordered_map<string,char>sc;
        unordered_map<char,string>cs;
        stringstream ss(s);
        string wr;
        int i = 0;
        char c;
        while(ss >> wr)
        {
            if(i == ptrn.size()) return false;
            c = ptrn[i++];
            if((sc.count(wr) && sc[wr] != c) || (cs.count(c) && cs[c] != wr)) return false;
            sc[wr] = c;
            cs[c] = wr;
        }
        return i == ptrn.size();
    }
};