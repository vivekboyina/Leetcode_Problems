class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans = 0,cnt = nums[0] == 0 ? 1 : 0;
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] != 0)
            {
                ans+=(cnt*(cnt + 1))/2;
                cnt = 0;
            }
            else if(nums[i] == 0) cnt+=1;
        }
        ans+=(cnt*(cnt + 1))/2;
        return ans;
    }
};