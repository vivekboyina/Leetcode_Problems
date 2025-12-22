class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans;
        queue<TreeNode*>q;
        ans.push_back((double)root -> val);
        q.push(root);
        while(!q.empty())
        {
            int n = q.size();
            double a = 0;
            for(int i = 0; i < n; i++)
            {
                TreeNode* t = q.front();
                q.pop();
                if(t -> right != nullptr) 
                {
                    q.push(t -> right);
                    a+=(t -> right -> val);
                }
                if(t -> left != nullptr) 
                {
                    q.push(t -> left);
                    a+=(t -> left -> val);
                }
            }
            if(q.empty()) continue;
            ans.push_back(a/q.size());
        }
        return ans;
    }
};