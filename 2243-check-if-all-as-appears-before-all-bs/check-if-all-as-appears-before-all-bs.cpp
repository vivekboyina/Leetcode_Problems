class Solution {
public:
    bool checkString(string s) {
        bool b = false;
        for(int i = 0; i < s.length(); i++) 
        {
            if(b == false && s[i] == 'b') b = true;
            else if(b == true && s[i] == 'a') return false;
        }
        return true;
    }
};