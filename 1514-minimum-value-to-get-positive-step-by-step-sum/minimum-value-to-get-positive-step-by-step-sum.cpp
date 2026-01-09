class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int a = 0,miny = INT_MAX;
        bool f = true;
        for(int i = 0; i < nums.size(); i++) 
        {
            a+=nums[i];
            if(a < 0) f = false;
            miny = min(a,miny);
        }
        if(f == true) return 1;
        if(miny > 0) return miny;
        return abs(miny) + 1;
    }
};