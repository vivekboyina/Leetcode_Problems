class Solution {
public:
    bool ans = false;
    unordered_map<int,bool>mp;
    void dfs(TreeNode* root,int k)
    {
        if(root == nullptr) return;
        if(mp.find(k - root -> val) != mp.end()) 
        {
            ans = true;
            return;
        }
        mp[root -> val] = true;
        dfs(root -> left,k);
        dfs(root -> right,k);
    }
    bool findTarget(TreeNode* root, int k) {
        dfs(root,k);
        return ans;   
    }
};