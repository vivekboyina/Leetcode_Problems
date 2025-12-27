class Solution {
public:
    vector<int>ans;
    void dfs(TreeNode* root)
    {
        if(root == nullptr) return;
        ans.push_back(root -> val);
        dfs(root -> left);
        dfs(root -> right);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        dfs(root1);
        dfs(root2);
        sort(ans.begin(),ans.end());
        return ans;
    }
};