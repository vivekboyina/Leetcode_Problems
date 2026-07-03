class NumArray {
public:
    vector<int>num;
    NumArray(vector<int>& nums) {
        num = nums;
    }
    
    int sumRange(int left, int right) {
        long ans = 0;
        for(int i = left; i <= right; i++) ans+=num[i];
        return ans;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */