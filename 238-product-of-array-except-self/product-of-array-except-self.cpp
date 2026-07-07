class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
        int z = 0;
        int pr = 1;
        for(int i : nums)
        {
            if(i == 0) z+=1;
            else pr*=i;
            if(z >= 2) return ans;
        }
        for(int i = 0; i < nums.size(); i++)
        {
            if(z == 1 && nums[i] == 0) ans[i] = pr;
            else if(nums[i] != 0 && z == 1) ans[i] = 0;
            else if(nums[i] != 0 && z == 0) ans[i] = pr/nums[i];
        }
        return ans;
    }
};
