class Solution {
public:
    vector<int> distributeCandies(int c, int n) {
        vector<int>ans(n,0);
        int k = 0;
        while(c)
        {
            for(int i = 1; i <= n; i++)
            {
                if(c >= i + k*n)
                {
                    ans[i - 1] = ans[i - 1] + i + k*n;
                    c = c - (i + k*n);
                }
                else 
                {
                    ans[i - 1] = ans[i - 1] + c;
                    c = 0;
                }
                if(c <= 0) break;
            }
            k+=1;
        }
        return ans;
    }
};