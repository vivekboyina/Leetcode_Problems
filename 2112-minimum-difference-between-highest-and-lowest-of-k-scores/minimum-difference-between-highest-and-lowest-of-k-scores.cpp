class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size(),ans = INT_MAX;
        for(int i = 0; i < n && (i + k - 1) < n; i++) ans = min(ans,nums[i + k - 1] - nums[i]);
        return ans;
    }
};