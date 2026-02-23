class Solution {
public:
    bool ans = true;
    void dfs(TreeNode* a,TreeNode* b)
    {
        if(a == nullptr && b == nullptr) return;
        if(a == nullptr || b == nullptr || a -> val != b -> val)
        {
            ans = false;
            return;
        }
        dfs(a -> left,b -> right);
        dfs(a -> right,b -> left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root -> left == nullptr && root -> right == nullptr) return ans;
        dfs(root -> left,root -> right);
        return ans;
    }
};