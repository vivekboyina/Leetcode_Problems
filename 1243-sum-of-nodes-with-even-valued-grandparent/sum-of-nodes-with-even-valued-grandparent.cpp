class Solution {
public:
    int ans = 0;
    void dfs(TreeNode* root)
    {
        if(root == nullptr) return;
        if(root -> val % 2 == 0)
        {
            if(root -> left != nullptr)
            {
                if(root -> left -> left != nullptr) ans+=(root -> left -> left -> val);
                if(root -> left -> right != nullptr) ans+=(root -> left -> right -> val);
            }
            if(root -> right != nullptr)
            {
                if(root -> right -> left != nullptr) ans+=(root -> right -> left -> val);
                if(root -> right -> right != nullptr) ans+=(root -> right -> right -> val);
            }
        }
        dfs(root -> left);
        dfs(root -> right);
    }
    int sumEvenGrandparent(TreeNode* root) {
        dfs(root);
        return ans;
    }
};