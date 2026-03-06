class Solution {
public:
    int minSubArrayLen(int t, vector<int>& nums) {
        int l = 0,ans = INT_MAX,sum = 0;
        for(int r = 0; r < nums.size(); r++)
        {
            sum+=nums[r];
            while(sum > t)
            {
                if(sum >= t) ans = min(ans,r - l + 1);
                sum-=nums[l];
                l++;
            }
            if(sum >= t) ans = min(ans,r - l + 1);
        }
        if(ans == INT_MAX) return 0;
        return ans;
    }
};