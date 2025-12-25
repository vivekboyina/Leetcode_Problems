class Solution {
public:
    long long ans = 0;
    void dfs(TreeNode* root)
    {
        if(root == nullptr) return;
        dfs(root -> right);
        ans+=(root -> val);
        root -> val = ans;
        dfs(root -> left);
    }
    TreeNode* convertBST(TreeNode* root) {
        dfs(root);
        return root;
    }
};