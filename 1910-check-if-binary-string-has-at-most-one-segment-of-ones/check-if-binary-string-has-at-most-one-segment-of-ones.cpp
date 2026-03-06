class Solution {
public:
    bool checkOnesSegment(string s) {
        int n = s.length();
        bool one = false;
        for(int i = n - 1; i > 0; i--)
        {
            if(s[i] == '1' && one == false) one = true;
            if(one == true && s[i] == '0') return false;
        }
        return true;
    }
};