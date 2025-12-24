class Solution {
public:
    long long ans = 0;
    void dfs(TreeNode* root,int c)
    {
        if(root == nullptr) return;
        c = c*10 + root -> val;
        if(root -> left == nullptr && root -> right == nullptr) ans+=c;
        dfs(root -> left,c);
        dfs(root -> right,c);
    }
    int sumNumbers(TreeNode* root) {
        dfs(root,0);
        return ans;
    }
};