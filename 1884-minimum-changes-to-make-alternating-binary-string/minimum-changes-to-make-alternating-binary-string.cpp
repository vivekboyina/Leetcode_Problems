class Solution {
public:
    int minOperations(string s) {
        int min1=0,min2 = 1;
        string s2 = s;
        if(s2[0] == '1') {
            s2[0] = '0';
        }
        else {
            s2[0] = '1';
        }
        for(int i=1;i<s.size();i++) {
            if(s[i-1] == '0' && s[i] == '0') {
                s[i] = '1';
                min1++;
            }
            else if(s[i-1] == '1' && s[i] == '1') {
                s[i] = '0';
                min1++;
            }
        }
        for(int i=1;i<s2.size();i++) {
            if(s2[i-1] == '0' && s2[i] == '0') {
                s2[i] = '1';
                min2++;
            }
            else if(s2[i-1] == '1' && s2[i] == '1') {
                s2[i] = '0';
                min2++;
            }
        }
        return min(min1,min2);
    }
};