class Solution {
public:
    vector<string>ans;
    void dfs(TreeNode* root,string s)
    {
        if(root == nullptr) return;
        s+=to_string(root -> val);
        if(root -> right != nullptr || root -> left != nullptr) s+="->";
        else if(root -> right == nullptr && root -> left == nullptr) ans.push_back(s);
        dfs(root -> left,s);
        dfs(root -> right,s);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        dfs(root,"");
        return ans;        
    }
};