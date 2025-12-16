class Solution {
public:
    int countPrimes(int n) {
        vector<bool>pr(n + 1,true);
        if(n <= 2) return 0;
        pr[0] = pr[1] = false;
        for(int i = 2; i*i < n; i++)
        {
            if(pr[i] == true) for(int j = i*i; j < n; j+=i) pr[j] = false;
        }
        int cnt = 0;
        for(int i = 0; i < n; i++) if(pr[i] == true) cnt+=1;
        return cnt;
    }
};