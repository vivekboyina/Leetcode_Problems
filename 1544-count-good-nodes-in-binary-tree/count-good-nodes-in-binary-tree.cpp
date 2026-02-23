class Solution {
public:
    int ans = 0;
    void dfs(TreeNode* root,int m)
    {
        if(root == nullptr) return;
        if(root -> val >= m) 
        {
            ans+=1;
            m = max(m,root -> val);
        }
        dfs(root -> left,m);
        dfs(root -> right,m);
    }
    int goodNodes(TreeNode* root) {
        dfs(root,INT_MIN);
        return ans;
    }
};