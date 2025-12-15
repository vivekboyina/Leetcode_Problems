class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long ans = 0;
        for(int i = 0; i < nums.size(); i++) nums[i] = abs(nums[i]);
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            if(i >= (n/2)) ans+=nums[i]*nums[i];
            else ans-=nums[i]*nums[i];
        }
        return ans;
    }
};