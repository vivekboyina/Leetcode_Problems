class Solution {
public:
    int minSubArrayLen(int t, vector<int>& nums) {
        int l = 0,ans = INT_MAX,sum = 0;
        unordered_map<int,int>mp;
        for(int r = 0; r < nums.size(); r++)
        {
            sum+=nums[r];
            while(sum > t && !mp.empty())
            {
                if(sum >= t) ans = min(ans,r - l + 1);
                mp[nums[l]]--;
                if(mp[nums[l]] == 0) mp.erase(nums[l]);
                sum-=nums[l];
                l++;
            }
            mp[nums[r]]++;
            if(sum >= t) ans = min(ans,r - l + 1);
        }
        if(ans == INT_MAX) return 0;
        return ans;
    }
};