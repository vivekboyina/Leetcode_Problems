class Solution {
public:
    TreeNode* insert(TreeNode* root,int v)
    {
        if(root == nullptr)
        {
            TreeNode *t = new TreeNode(v);
            return t;
        }
        if(root -> val < v) root -> right = insert(root -> right,v);
        else root -> left = insert(root -> left,v);
        return root;
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        return insert(root,val);
    }
};