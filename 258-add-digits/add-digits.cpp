class Solution {
public:
    int addDigits(int num) {
        long long k,s;
        while(num >= 10)
        {
            s = 0;
            while(num > 0)
            {
                k = num % 10;
                num/=10;
                s+=k;
            }
            num = s;
        }
        return num;
    }
};