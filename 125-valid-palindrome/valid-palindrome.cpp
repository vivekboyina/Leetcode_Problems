class Solution {
public:
    bool isPalindrome(string s) {
        string ans,check;
        for(char i : s)
        {
            if(isalpha(i) || isdigit(i))
            {
                i = tolower(i);
                ans.push_back(i);
                check.push_back(i);
            }
        }
        reverse(ans.begin(),ans.end());
        if(check == ans) return true;
        else return false;   
    }
};