class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        string a = to_string(x);
        reverse(a.begin(),a.end());
        long long k = stoll(a);
        return (k == x);
    }
};