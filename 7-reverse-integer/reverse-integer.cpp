class Solution {
public:
    int reverse(int x) {
        long long a = 0,k;
        while(x != 0)
        {
            k = x % 10;
            x/=10;
            a = a*10 + k;
        }
        if(a > INT_MAX || a < INT_MIN) return 0;
        return a;
    }
};