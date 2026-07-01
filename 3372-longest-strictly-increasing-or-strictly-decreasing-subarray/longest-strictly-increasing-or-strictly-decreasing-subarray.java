class Solution {
    public int longestMonotonicSubarray(int[] nums) {
        boolean in = false,de = false;
        int cnt = 1,ans = 1;
        for(int i = 1; i < nums.length; i++)
        {
            if(!in && !de && nums[i] > nums[i - 1])
            {
                in = true;
                cnt+=1;
            }
            else if(!in && !de && nums[i] < nums[i - 1])
            {
                de = true;
                cnt+=1;
            }
            else if((in && nums[i] > nums[i - 1]) || (de && nums[i] < nums[i - 1])) cnt+=1;
            else if(in && nums[i] < nums[i - 1])
            {
                in = false;
                de = true;
                cnt = 2;
            }
            else if(de && nums[i] > nums[i - 1])
            {
                de = false;
                in = true;
                cnt = 2;
            }
            else
            {
                in = false;
                de = false;
                cnt = 1;
            }
            ans = Math.max(ans,cnt);
        }
        return ans;
    }
}