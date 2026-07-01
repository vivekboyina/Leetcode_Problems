class Solution {
    public int maxAscendingSum(int[] nums) {
        int sum = nums[0],max = nums[0];
        for(int i = 1; i < nums.length; i++)
        {
            if(nums[i] > nums[i - 1]) sum+=nums[i];
            else sum = nums[i];
            max = Math.max(max,sum);
        }
        return max;
    }
}