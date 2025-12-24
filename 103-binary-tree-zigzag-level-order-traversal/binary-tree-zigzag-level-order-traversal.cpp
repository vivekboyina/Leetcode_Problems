class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root == nullptr) return ans;
        int c = 0;
        queue<TreeNode*>q;
        q.push(root);
        ans.push_back({root -> val});
        while(!q.empty())
        {
            int n = q.size();
            vector<int>r;
            c+=1;
            for(int i = 0; i < n; i++)
            {
                TreeNode *t = q.front();
                if(t -> left != nullptr)
                {
                    q.push(t -> left);
                    r.push_back(t -> left -> val);
                }
                if(t -> right != nullptr)
                {
                    q.push(t -> right);
                    r.push_back(t -> right -> val);
                }
                q.pop();
            }
            if(r.size() > 0)
            {
                if(c % 2 != 0) reverse(r.begin(),r.end());
                ans.push_back(r);
            }
        }
        return ans;
    }
};