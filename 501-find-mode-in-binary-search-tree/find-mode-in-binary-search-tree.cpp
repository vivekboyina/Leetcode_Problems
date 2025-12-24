class Solution {
public:
    unordered_map<int,int>mp;
    int m = 0;
    void dfs(TreeNode* root)
    {
        if(root == nullptr) return;
        mp[root -> val]++;
        m = max(m,mp[root -> val]);
        dfs(root -> left);
        dfs(root -> right);
    }
    vector<int> findMode(TreeNode* root) {
        dfs(root);
        vector<int>ans;
        for(auto i : mp) if(i.second == m) ans.push_back(i.first);
        return ans;
    }
};