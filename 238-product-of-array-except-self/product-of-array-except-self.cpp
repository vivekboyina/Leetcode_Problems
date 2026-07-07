class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>pr(n),sf(n);
        int p = 1;
        for(int i = 0; i < n; i++)
        {
            pr[i] = p;
            p*=nums[i];
        }
        p = 1;
        for(int i = n - 1; i >= 0; i--)
        {
            sf[i] = p;
            p*=nums[i];
        }
        vector<int>ans(n);
        for(int i = 0; i < n; i++) ans[i] = pr[i]*sf[i];
        return ans;
    }
};
