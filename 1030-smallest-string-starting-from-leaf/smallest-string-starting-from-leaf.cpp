class Solution {
public:
    vector<string>ans;
    void dfs(TreeNode* root,string s)
    {
        if(root == nullptr) return;
        if(root -> left == nullptr && root -> right == nullptr)
        {
            s+=(root -> val + 'a');
            reverse(s.begin(),s.end());
            ans.push_back(s);
            return;
        }
        s+=(root -> val + 'a');
        dfs(root -> left,s);
        dfs(root -> right,s);
    }
    string smallestFromLeaf(TreeNode* root) {
        dfs(root,"");
        sort(ans.begin(),ans.end());
        return ans[0];    
    }
};