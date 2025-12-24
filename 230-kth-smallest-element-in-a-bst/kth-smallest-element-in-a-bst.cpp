class Solution {
public:
    vector<int>ans;
    void dfs(TreeNode* root)
    {
        if(root == nullptr) return;
        dfs(root -> left);
        ans.push_back(root -> val);
        dfs(root -> right);
    }
    int kthSmallest(TreeNode* root, int k) {
        dfs(root);
        return ans[k - 1];
    }
};