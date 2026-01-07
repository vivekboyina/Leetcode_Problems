class Solution {
public:
    long long ts = 0,ans = LLONG_MIN,mm = 1e9 + 7;
    long long sumy(TreeNode* root)
    {
        if(root == nullptr) return 0;
        int l = sumy(root -> left),r = sumy(root -> right);
        int val = (l + r + root -> val);
        root->val = val;
        return val;
    }
    void ansy(TreeNode* root)
    {
        if(root == nullptr) return;
        int l = root->val;
        ans = max(ans,l*(ts - l));
        ansy(root -> left);
        ansy(root -> right);
    }
    int maxProduct(TreeNode* root) {
        ts = sumy(root);
        ansy(root);
        return ans % mm;
    }
};