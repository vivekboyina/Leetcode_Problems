class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& in) {
        vector<int>ans;
        for(int i = 0; i < nums.size(); i++) ans.insert(ans.begin() + in[i],nums[i]);
        return ans;
    }
};