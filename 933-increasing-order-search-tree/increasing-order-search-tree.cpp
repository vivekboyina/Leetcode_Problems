class Solution {
public:
    TreeNode* ans = new TreeNode(0),*a = ans;
    void answer(TreeNode* root)
    {
        if(root == nullptr) return;
        answer(root -> left);
        ans -> right = new TreeNode(root -> val);
        ans = ans -> right;
        answer(root -> right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        answer(root);
        return a -> right;
    }
};