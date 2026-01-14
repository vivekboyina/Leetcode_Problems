class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();
        while (i < n && s[i] == ' ') i++;
        int k = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') k = -1;
            i++;
        }
        long long num = 0;
        while (i < n && isdigit(s[i])) {
            num = num*10 + (s[i] - '0');
            if (num*k >= INT_MAX) return INT_MAX;
            if (num*k <= INT_MIN) return INT_MIN;
            i++;
        }
        return num*k;
    }
};
