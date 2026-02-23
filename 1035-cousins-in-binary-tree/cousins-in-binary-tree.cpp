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
                if(q.front() -> left != nullptr)
                {
                    if(q.front() -> left -> val == x) t1 = q.front();
                    else if(q.front() -> left -> val == y) t2 = q.front();
                    q.push(q.front() -> left);
                }
                if(q.front() -> right != nullptr)
                {
                    if(q.front() -> right -> val == x) t1 = q.front();
                    else if(q.front() -> right -> val == y) t2 = q.front();
                    q.push(q.front() -> right);
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