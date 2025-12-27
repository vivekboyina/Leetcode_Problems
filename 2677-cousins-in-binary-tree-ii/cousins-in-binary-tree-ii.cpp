class Solution {
public:
    TreeNode* replaceValueInTree(TreeNode* root) {
        int c = 0;
        queue<TreeNode*>q;
        q.push(root);
        root -> val = 0;
        while(!q.empty())
        {
            int n = q.size();
            int a = 0;
            c+=1;
            if(c > 1)
            {
                for(int i = 0; i < n; i++)
                {
                    TreeNode *t = q.front();
                    if(t -> left != nullptr) a+=(t -> left -> val);
                    if(t -> right != nullptr) a+=(t -> right -> val);
                    q.pop();
                    q.push(t);
                }
            }
            for(int i = 0; i < n; i++)
            {
                if(c < 2)
                {
                    if(q.front() -> left != nullptr)
                    {
                        q.front() -> left -> val = a;
                        q.push(q.front() -> left);
                    }
                    if(q.front() -> right != nullptr)
                    {
                        q.front() -> right -> val = a;
                        q.push(q.front() -> right);
                    }
                }
                else
                {
                    int k = a,l = a;
                    if(q.front() -> left != nullptr)
                    {
                        k-=(q.front() -> left -> val);
                        if(q.front() -> right != nullptr) k-=(q.front() -> right -> val);
                        q.push(q.front() -> left);
                    }
                    if(q.front() -> right != nullptr)
                    {
                        l-=(q.front() -> right -> val);
                        if(q.front() -> left != nullptr) l-=(q.front() -> left -> val);
                        q.push(q.front() -> right);
                    }
                    if(q.front() -> left != nullptr) q.front() -> left -> val = k;
                    if(q.front() -> right != nullptr) q.front() -> right -> val = l;
                }
                q.pop();
            }
        }
        return root;
    }
};