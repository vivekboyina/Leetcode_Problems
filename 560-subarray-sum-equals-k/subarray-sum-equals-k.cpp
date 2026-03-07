class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int s = 0,cnt = 0;
        unordered_map<int,int>mp;
        mp[0] = 1;
        for(int i : nums)
        {
            s+=i;
            if(mp.find(s - k) != mp.end()) cnt+=mp[s - k];
            mp[s]++;
        }
        return cnt;
    }
};