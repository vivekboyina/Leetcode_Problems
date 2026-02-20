class Solution {
public:
    bool ans = false;
    void check(TreeNode* root,TreeNode* sub)
    {
        if(!ans) return;
        if(root == nullptr && sub == nullptr) return;
        if(!root || !sub || root -> val != sub -> val)
        {
            ans = false;
            return;
        }
        check(root -> left,sub -> left);
        check(root -> right,sub -> right);
    }
    void dfs(TreeNode* root,TreeNode* sub)
    {
        if(!root) return;
        if(root -> val == sub -> val && ans == false) 
        {
            ans = true;
            check(root,sub);
        }
        dfs(root -> left,sub);
        dfs(root -> right,sub);
    }
    bool isSubtree(TreeNode* root, TreeNode* sub) {
        dfs(root,sub);
        return ans;
    }
};