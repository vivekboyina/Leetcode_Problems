class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int ans = n;
        for (int i = 0; i < n; i++) {
            long long limit = 1LL * nums[i] * k;
            int j = upper_bound(nums.begin() + i, nums.end(), limit) - nums.begin();
            int kept = j - i;
            ans = min(ans, n - kept);
        }
        return ans;
    }
};
