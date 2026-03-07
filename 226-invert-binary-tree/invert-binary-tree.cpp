class Solution {
public:
    void dfs(TreeNode* root)
    {
        if(root == nullptr) return;
        if(root -> left != nullptr || root -> right != nullptr)
        {
            TreeNode* temp = root -> left;
            root -> left = root -> right;
            root -> right = temp;
        }
        dfs(root -> left);
        dfs(root -> right);
    }
    TreeNode* invertTree(TreeNode* root) {
        dfs(root);
        return root;
    }
};