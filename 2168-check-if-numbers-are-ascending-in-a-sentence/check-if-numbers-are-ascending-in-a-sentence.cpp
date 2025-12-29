class Solution {
public:
    bool areNumbersAscending(string s) {
        int c = -1,k,i = 0;
        char ch;
        while(i < s.length())
        {
            ch = s[i];
            if(ch >= '0' && ch <= '9')
            {
                k = 0;
                while(isdigit(s[i]))
                {
                    k = k*10 + (s[i] - '0');
                    i++;
                }
                if(c != -1 && c >= k) return false;
                else c = k;
            }
            i++;
        }
        return true;
    }
};