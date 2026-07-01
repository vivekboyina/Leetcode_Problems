class Solution {
    public int longestMonotonicSubarray(int[] nums) {
        int in = 1,de = 1,ans = 1;
        for(int i = 1; i < nums.length; i++)
        {
            if(nums[i] > nums[i - 1])
            {
                in+=1;
                de = 1;
            }
            else if(nums[i] < nums[i - 1])
            {
                de+=1;
                in = 1;
            }
            else
            {
                in = 1;
                de = 1;
            }
            ans = Math.max(ans,Math.max(in,de));
        }
        return ans;
    }
}