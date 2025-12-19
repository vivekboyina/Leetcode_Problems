class Solution {
public:
    vector<int>ans;
    void answer(TreeNode* root)
    {
        if(root == nullptr) return;
        answer(root -> left);
        ans.push_back(root -> val);
        answer(root -> right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        answer(root);
        return ans;
    }
};