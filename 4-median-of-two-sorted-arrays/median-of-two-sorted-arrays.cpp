class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i : nums1) ans.push_back(i);
        for(int j : nums2) ans.push_back(j);
        sort(ans.begin(),ans.end());
        int n = nums1.size() + nums2.size();
        float an;
        if(n % 2 != 0){ 
            an = ans[n/2];
            return an;
            }
        else an = ans[(n/2)] + ans[(n/2) - 1];
        return (an/2.0); 
    }
};