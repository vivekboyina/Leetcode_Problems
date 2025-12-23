class Solution {
public:
    int ans = 0;
    int dfs(TreeNode* root)
    {
        if(root == nullptr) return 0;
        int l = dfs(root -> left),r = dfs(root -> right);
        ans = max(ans,l + r);;
        return max(l,r) + 1; 
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int a = dfs(root);
        return ans;
    }
};