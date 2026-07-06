class Solution {
public:
    void merge(vector<int>& vc,int l,int m,int h)
    {
        int n1 = m - l + 1,n2 = h - m;
        vector<int>a(n1),b(n2);
        for(int i = 0; i < n1; i++) a[i] = vc[l + i];
        for(int i = 0; i < n2; i++) b[i] = vc[m + 1 + i];
        int i = 0,j = 0,k = l;
        while(i < n1 && j < n2)
        {
            if(a[i] < b[j]) vc[k++] = a[i++];
            else vc[k++] = b[j++];
        }
        while(i < n1) vc[k++] = a[i++];
        while(j < n2) vc[k++] = b[j++];
    }
    void mergesort(vector<int>& vc,int l,int h)
    {
        if(l >= h) return;
        int m = (l + h)/2;
        mergesort(vc,l,m);
        mergesort(vc,m + 1,h);
        merge(vc,l,m,h);
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        mergesort(nums,0,nums.size() - 1);
        vector<pair<int,int>>vp;
        int a = 1;
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] != nums[i - 1])
            {
                vp.push_back({nums[i - 1],a});
                a = 1;
            }
            else a+=1;
        }
        vp.push_back({nums[nums.size() - 1],a});
        sort(vp.begin(),vp.end(),[](pair<int,int>&a,pair<int,int>&b){
            return a.second > b.second;
        });
        vector<int>ans;
        for(int i = 0; i < k; i++) ans.push_back(vp[i].first);
        return ans;
    }
};