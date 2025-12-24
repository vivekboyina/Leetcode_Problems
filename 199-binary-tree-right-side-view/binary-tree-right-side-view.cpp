class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        if(root == nullptr) return ans;
        queue<TreeNode*>q;
        q.push(root);
        ans.push_back(root -> val);
        while(!q.empty())
        {
            int n = q.size(),a;
            for(int i = 0; i < n; i++)
            {
                TreeNode *t = q.front();
                if(t -> left != nullptr) 
                {
                    q.push(t -> left);
                    a = t -> left -> val;
                }
                if(t -> right != nullptr) 
                {
                    q.push(t -> right);
                    a = t -> right -> val;
                }
                q.pop();
            }
            if(q.size() > 0) ans.push_back(a);
        }
        return ans;
    }
};