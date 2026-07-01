class Solution {
    public int pivotIndex(int[] nums) {
        int n = nums.length;
        int[] pr = new int[n];
        int[] sf = new int[n];
        pr[0] = nums[0];
        sf[n - 1] = nums[n - 1];
        for(int i = n - 2; i >= 0; i--) sf[i] = nums[i] + sf[i + 1];
        for(int i = 1; i < n; i++) pr[i] = nums[i] + pr[i - 1];
        for(int i = 0; i < n; i++) if(pr[i] == sf[i]) return i;
        return -1;
    }
}