class Solution {
public:
    vector<int>ans;
    void in(TreeNode* root)
    {
        if(root == nullptr) return;
        in(root -> left);
        ans.push_back(root -> val);
        in(root -> right);
    }
    bool isValidBST(TreeNode* root) {
        in(root);
        for(int i = 0; i < ans.size() - 1; i++) if(ans[i] >= ans[i + 1]) return false;
        return true;
    }
};