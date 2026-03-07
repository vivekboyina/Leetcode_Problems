class Solution {
public:
    int ans = 0;
    void dfs(TreeNode* root,int c)
    {
        if(root == nullptr)
        {
            ans = max(ans,c);
            return;
        }
        dfs(root -> left,c + 1);
        dfs(root -> right,c + 1);
    }
    int maxDepth(TreeNode* root) {
        dfs(root,0);
        return ans;
    }
};