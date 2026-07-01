class Solution {
    void merge(int[] nums,int l,int m,int h)
    {
        int n1 = m - l + 1,n2 = h - m;
        int[] left = new int[n1];
        int[] right = new int[n2];
        for(int i = 0; i < n1; i++) left[i] = nums[i + l];
        for(int i = 0; i < n2; i++) right[i] = nums[i + m + 1];
        int i = 0,j = 0,k = l;
        while(i < n1 && j < n2)
        {
            if(left[i] < right[j]) nums[k++] = left[i++];
            else nums[k++] = right[j++];
        }
        while(i < n1) nums[k++] = left[i++];
        while(j < n2) nums[k++] = right[j++];
    }
    void mergesort(int[] nums,int l,int h)
    {
        if(l >= h) return;
        int m = l + (h - l)/2;
        mergesort(nums,l,m);
        mergesort(nums,m + 1,h);
        merge(nums,l,m,h);
    }
    public int majorityElement(int[] nums) {
        int n = nums.length,ans = -1;
        mergesort(nums,0,n - 1);
        long cnt = 0,max = -1;
        for(int i = 0; i < nums.length; i++)
        {
            if(i == 0) cnt+=1;
            else if(nums[i] != nums[i - 1]) cnt = 1;
            else cnt+=1;
            if(cnt > n/2 && cnt > max)
            {
                max = Math.max(cnt,max);
                ans = nums[i];
            }
        }
        return ans;
    }
}