class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int>mp;
        int cnt = 0;
        for(int i : nums)
        {
            if(mp[i] < 2)
            {
                nums[cnt++] = i;
                mp[i]++;
            }
        }
        return cnt;
    }
};