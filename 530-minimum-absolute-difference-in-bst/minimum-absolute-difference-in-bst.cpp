class Solution {
public:
    vector<int>arr;
    void dfs(TreeNode* root)
    {
        if(root == nullptr) return;
        arr.push_back(root -> val);
        dfs(root -> left);
        dfs(root -> right);
    }
    int getMinimumDifference(TreeNode* root) {
        dfs(root);
        int ans = INT_MAX;
        sort(arr.begin(),arr.end());
        for(int i = 1; i < arr.size(); i++) ans = min(ans,arr[i] - arr[i - 1]);
        return ans;
    }
};