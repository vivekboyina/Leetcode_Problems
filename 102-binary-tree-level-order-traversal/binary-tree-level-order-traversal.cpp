class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root == nullptr) return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size();
            vector<int>r;
            for(int i = 0; i < n; i++)
            {
                TreeNode *t = q.front();
                r.push_back(t -> val);
                q.pop();
                if(t -> left != nullptr) q.push(t -> left);
                if(t -> right != nullptr) q.push(t -> right);
            }
            ans.push_back(r);
        }
        return ans;
    }
};