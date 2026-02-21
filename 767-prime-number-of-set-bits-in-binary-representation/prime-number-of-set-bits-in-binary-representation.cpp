class Solution {
public:
    int check(int n )
    {
        if(n <= 1 ) return 0 ;
        if(n <= 3) return 1;
        if(n % 2 == 0 || n%3 == 0) return 0 ;
        for(int i = 5 ; i*i <= n ; i+=6) if(n%i == 0 || n % (i+2) == 0) return 0;
        return 1; 
    }
    int countPrimeSetBits(int left, int right) {
        int ans = 0 ;
        for(int i = left ; i <= right ; i++)
        {
            int n = i;
            int c = __builtin_popcount(i);
            if(check(c)) ans++;
        }
        return ans ;
    }
};