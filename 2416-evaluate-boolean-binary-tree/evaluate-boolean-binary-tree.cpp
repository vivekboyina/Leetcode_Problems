class Solution {
public:
    void answer(TreeNode* root)
    {
        if(root == nullptr) return;
        answer(root -> left);
        answer(root -> right);
        if(root -> val == 2)
        {
            int a = root -> right -> val,b = root -> left -> val;
            root -> val = a | b;
        }
        if(root -> val == 3)
        {
            int a = root -> right -> val,b = root -> left -> val;
            root -> val = a & b;
        }
    }
    bool evaluateTree(TreeNode* root) {
        answer(root);
        return (root -> val);
    }
};