class Solution {
public:
    unordered_map<int,int>mp;
    int m = 1,fr = 0;
    int freq(TreeNode* root,int sum)
    {
        if(root == nullptr) return sum;
        int l = freq(root -> left,0),r = freq(root -> right,0);
        return r + l + root -> val;
    }
    void dfs(TreeNode* root)
    {
        if(root == nullptr) return;
        fr = freq(root,root -> val);
        mp[fr]++;
        m = max(m,mp[fr]);
        dfs(root -> left);
        dfs(root -> right);
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        dfs(root);
        vector<int>ans;
        for(auto i : mp) if(i.second == m) ans.push_back(i.first);
        return ans;
    }
};