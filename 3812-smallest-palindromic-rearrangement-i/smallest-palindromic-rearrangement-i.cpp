class Solution {
public:
    string smallestPalindrome(string s) {
        sort(s.begin(), s.end());

        string a = "", b = "";
        char ch = '\0';

        int n = s.length();

        for (int i = 0; i < n; ) {
            if (i + 1 < n && s[i] == s[i + 1]) {
                a += s[i];
                b.insert(b.begin(), s[i + 1]);
                i += 2;
            } else {
                if (ch == '\0') {
                    ch = s[i];
                } else {
                    a += s[i];
                    b.insert(b.begin(), s[i]);
                }
                i += 1;
            }
        }
        if (ch != '\0')
            return a + ch + b;
        else
            return a + b;
    }
};