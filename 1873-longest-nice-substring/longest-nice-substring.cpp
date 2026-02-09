class Solution {
public:
    string longestNiceSubstring(string s) {
        if(s.size() < 2) return "" ;
        set<char>st(s.begin() , s.end());
        string ans ;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if( s[i] == tolower(s[i]))
            {
                char ch = toupper(s[i]);
                if(st.find(ch) != st.end()) continue;
                else
                {
                    string s1 = s.substr(0 , i);
                    string s2 = s.substr(i+1);
                    string s3 = longestNiceSubstring(s1);
                    string s4 = longestNiceSubstring(s2);
                   if(s3.size() >= s4.size()) return s3;
                   return s4;
                }   
            }
            else 
            {
                char ch = tolower(s[i]);
                if(st.find(ch) != st.end()) continue;
                else
                {
                    string s1 = s.substr(0 , i);
                    string s2 = s.substr(i+1);
                    string s3 = longestNiceSubstring(s1);
                    string s4 = longestNiceSubstring(s2);
                   if(s3.size() >= s4.size()) return s3;
                   else return s4;
                }
            }
        }
        return s ;
    }
};