class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int ans = 0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size();
            for(int i = 0; i < n; i++)
            {
                TreeNode *t = q.front();
                if(t -> left != nullptr)
                {
                    q.push(t -> left);
                    if(t -> left -> left == nullptr && t -> left -> right == nullptr) ans+=(t -> left -> val);
                }
                if(t -> right != nullptr) q.push(t -> right);
                q.pop();
            }
        }
        return ans;
    }
};