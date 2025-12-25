class Solution {
public:
    int ans,m = 0;
    void dfs(TreeNode* root,int c)
    {
        if(root == nullptr) return;
        if(root -> left == nullptr && root -> right == nullptr)
        {
            if(c > m)
            {
                m = c;
                ans = root -> val;
            }
        }
        if(root -> left != nullptr)
        {
            if(c > m)
            {
                m = c;
                ans = root -> left -> val;
            }
        }
        dfs(root -> left,c + 1);
        dfs(root -> right,c + 1);
    }
    int findBottomLeftValue(TreeNode* root) {
        dfs(root,1);
        return ans;
    }
};