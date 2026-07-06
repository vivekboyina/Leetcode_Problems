class Solution {
public:
    void merge(vector<int>&nums,int l,int m,int h)
    {
        int n1 = m - l + 1;
        int n2 = h - m;
        vector<int>ll(n1),rr(n2);
        for(int i = 0; i < n1; i++) ll[i] = nums[l + i];
        for(int i = 0; i < n2; i++) rr[i] = nums[m + 1 + i];
        int i = 0;
        int j = 0;
        int k = l;
        while(i < n1 && j < n2)
        {
            if(ll[i] < rr[j]) nums[k++] = ll[i++];
            else nums[k++] = rr[j++];
        }
        while(i < n1) nums[k++] = ll[i++];
        while(j < n2) nums[k++] = rr[j++];
    }
    void mergesort(vector<int>&nums,int l,int h)
    {
        if(l >= h) return;
        int m = l + (h - l)/2;
        mergesort(nums,l,m);
        mergesort(nums,m + 1,h);
        merge(nums,l,m,h);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size() - 1);
        return nums;
    }
};