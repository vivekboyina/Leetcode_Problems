class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        map<int,int>mp;
        for(int i : nums) mp[i]++;
        int lst = INT_MAX;
        int ans = 1;
        int cnt = 1;
        for(auto it : mp)
        {
            if(lst == INT_MAX)
            {
                lst = it.first;
                continue;
            }
            if(it.first - lst == 1) cnt+=1;
            else cnt = 1;
            lst = it.first;
            ans = max(cnt,ans);
        }
        return ans;
    }
};
