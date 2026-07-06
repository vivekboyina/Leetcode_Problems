class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z = 0;
        int o = 0;
        int t = 0;
        for(int i : nums)
        {
            if(i == 0) z+=1;
            else if(i == 1) o+=1;
            else t+=1;
        }
        for(int i = 0; i < nums.size(); i++)
        {
            if(z > 0)
            {
                nums[i] = 0;
                z-=1;
            }
            else if(o > 0)
            {
                nums[i] = 1;
                o-=1;
            }
            else if(t > 0)
            {
                nums[i] = 2;
                t-=1;
            }
        }
    }
};