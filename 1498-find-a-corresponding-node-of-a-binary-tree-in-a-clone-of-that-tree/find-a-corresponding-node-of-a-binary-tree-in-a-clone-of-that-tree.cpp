class Solution {
public:
    TreeNode *ans = nullptr;
    void answer(TreeNode* o,TreeNode* c,TreeNode* t)
    {
        if(o == nullptr) return;
        if(o == t)
        {
            ans = c;
            return;
        }
        answer(o -> left,c -> left,t);
        answer(o -> right,c -> right,t);
    }
    TreeNode* getTargetCopy(TreeNode* o, TreeNode* c, TreeNode* t) {
        answer(o,c,t);
        return ans;
    }
};