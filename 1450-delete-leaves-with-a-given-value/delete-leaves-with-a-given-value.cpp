class Solution {
public:
    bool f = true;
    void dfs(TreeNode* root,int t)
    {
        if(root == nullptr) return;
        if(root -> left != nullptr && root -> left -> val == t && root -> left -> left == nullptr && root -> left -> right == nullptr) 
        {
            root -> left = nullptr;
            f = false;
        }
        if(root -> right != nullptr && root -> right -> val == t && root -> right -> left == nullptr && root -> right -> right == nullptr) 
        {
            root -> right = nullptr;
            f = false;
        }
        dfs(root -> left,t);
        dfs(root -> right,t);
    }
    TreeNode* removeLeafNodes(TreeNode* root, int t) {
        do{
            f = true;
            dfs(root,t);
        }while(f == false);
        if(root -> val == t && root -> left == nullptr && root -> right == nullptr) root = nullptr;
        return root;
    }
};