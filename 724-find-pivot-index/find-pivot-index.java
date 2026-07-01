class Solution {
    public int pivotIndex(int[] nums) {
        int ts = 0,ls = 0,rs;
        for(int i : nums) ts+=i;
        for(int i = 0; i < nums.length; i++)
        {
            rs = ts - ls - nums[i];
            if(rs == ls) return i;
            ls+=nums[i];
        }
        return -1;
    }
}