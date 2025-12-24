class Solution {
public:
    bool f = true;
    void dfs(TreeNode *p,TreeNode *q)
    {
        if(p == nullptr && q == nullptr) return;
        if((p == nullptr && q != nullptr) || (p != nullptr && q == nullptr) || (p -> val != q -> val)) 
        {
            f = false;
            return;
        }
        dfs(p -> left,q -> left);
        dfs(p -> right,q -> right);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        dfs(p,q);
        return f;
    }
};