class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a = 1;
        for(int i : nums)
        {
            if(i == a) a+=1;
            else if(i > a) break;
        }
        return a;
    }
};