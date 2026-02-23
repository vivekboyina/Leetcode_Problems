class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*>q;
        TreeNode *t1 = nullptr,*t2 = nullptr;
        q.push(root);
        int n;
        while(!q.empty())
        {
            n = q.size();
            for(int i = 1; i <= n; i++)
            {
                TreeNode* t = q.front();
                if(t -> left != nullptr)
                {
                    if(t -> left -> val == x) t1 = t;
                    else if(t -> left -> val == y) t2 = t;
                    q.push(t -> left);
                }
                if(t -> right != nullptr)
                {
                    if(t -> right -> val == x) t1 = t;
                    else if(t -> right -> val == y) t2 = t;
                    q.push(t -> right);
                }
                q.pop();
            }
            if(t1 != nullptr && t2 == nullptr) return false;
            else if(t1 == nullptr && t2 != nullptr) return false;
            else if(t1 != nullptr && t2 != nullptr && t1 == t2) return false;
            else if(t1 != nullptr && t2 != nullptr && t1 != t2) return true;
        }
        return false;
    }
};