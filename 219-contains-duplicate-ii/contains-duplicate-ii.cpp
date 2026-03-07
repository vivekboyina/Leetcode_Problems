class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int l = 0;
        for(int r = 0; r < nums.size(); r++)
        {
            if(mp.find(nums[r]) != mp.end()) if(r - mp[nums[r]] <= k) return true;
            mp[nums[r]] = r;
        }
        return false;
    }
};