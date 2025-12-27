class Solution {
public:
    int sumEvenGrandparent(TreeNode* root) {
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
                    if(t -> val % 2 == 0)
                    {
                        if(t -> left -> right != nullptr) ans+=(t -> left -> right -> val);
                        if(t -> left -> left != nullptr) ans+=(t -> left -> left -> val);
                    }
                    q.push(t -> left);
                }
                if(t -> right != nullptr)
                {
                    if(t -> val % 2 == 0)
                    {
                        if(t -> right -> right != nullptr) ans+=(t -> right -> right -> val);
                        if(t -> right -> left != nullptr) ans+=(t -> right -> left -> val);
                    }
                    q.push(t -> right);
                }
                q.pop();
            }
        }
        return ans;
    }
};