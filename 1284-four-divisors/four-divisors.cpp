class Solution {
public:
    int answer(int n)
    {
        if(n < 6) return 0;
        int cnt = 1,ans = 1;
        for(int i = 2; i <= n; i++)
        {
            if(n % i == 0) 
            {
                cnt+=1;
                ans+=i;
            }
            if(cnt > 4) return 0;
        }
        return cnt == 4 ? ans : 0;
    }
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;
        for(int i : nums) ans+=answer(i);
        return ans;
    }
};