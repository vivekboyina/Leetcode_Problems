class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int ans = 0;
        int cnt = 0;
        for(int i : st)
        {
            if(st.find(i - 1) == st.end())
            {
                cnt = 1;
                while(st.find(i + cnt) != st.end()) cnt+=1;
            }
            ans = max(cnt,ans);
        }
        return ans;
    }
};
