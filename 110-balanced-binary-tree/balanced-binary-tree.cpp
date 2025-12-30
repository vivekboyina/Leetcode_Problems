class Solution {
public:
    bool f = true;
    int dfs(TreeNode* root,int c)
    {
        if(root == nullptr) return 0;
        int l = dfs(root -> right,c + 1);
        int r = dfs(root -> left,c + 1);
        if(abs(l - r) > 1) f = false;
        return max(l,r) + 1;
    }
    bool isBalanced(TreeNode* root) {
        if(root == nullptr) return true;
        dfs(root,0);
        return f;
    }
};