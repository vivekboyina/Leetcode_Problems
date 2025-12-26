class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int ans = 1,data = root -> val,c = 1;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size(),s = 0;
            c+=1;
            for(int i = 0; i < n; i++)
            {
                TreeNode *t = q.front();
                if(t -> left != nullptr)
                {
                    s+=(t -> left -> val);
                    q.push(t -> left);
                }
                if(t -> right != nullptr)
                {
                    s+=(t -> right -> val);
                    q.push(t -> right);
                }
                q.pop();
            }
            if(q.size() > 0 && s > data)
            {
                data = s;
                ans = c;
            }
        }
        return ans;
    }
};