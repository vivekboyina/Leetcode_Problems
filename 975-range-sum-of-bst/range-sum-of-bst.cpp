class Solution {
public:
    int ans = 0,l,h;
    void answer(TreeNode* root)
    {
        if(root != nullptr)
        {
            if(root -> val >= l && root -> val <= h) ans+=(root -> val);
            answer(root -> right);
            answer(root -> left);
        }
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        l = low,h = high;
        answer(root);
        return ans;
    }
};