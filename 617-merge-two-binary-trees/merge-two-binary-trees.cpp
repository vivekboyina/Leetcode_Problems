class Solution {
public:
    void answer(TreeNode* r1,TreeNode* r2)
    {
        if(r2 == nullptr) return;
        if(r1 -> left == nullptr && r2 -> left != nullptr) r1 -> left = new TreeNode(0);
        if(r1 -> right == nullptr && r2 -> right != nullptr) r1 -> right = new TreeNode(0);
        r1 -> val = r1 -> val + r2 -> val;
        answer(r1 -> left,r2 -> left);
        answer(r1 -> right,r2 -> right);
    }
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1 == nullptr) return root2;
        if(root2 == nullptr) return root1;
        answer(root1,root2);
        return root1;
    }
};