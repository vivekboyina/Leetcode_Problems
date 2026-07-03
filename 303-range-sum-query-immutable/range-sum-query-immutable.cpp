class NumArray {
public:
    vector<int>num;
    NumArray(vector<int>& nums) {
        num.resize(nums.size() + 1,0);
        for(int i = 0; i < nums.size(); i++) num[i + 1] = num[i] + nums[i];
    }
    
    int sumRange(int l, int r) {
        return num[r + 1] - num[l];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */