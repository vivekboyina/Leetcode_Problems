/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans = 0;
    void answer(TreeNode *root,int c)
    {
        if(root == nullptr)
        {
            ans = max(ans,c);
            return;
        }
        answer(root -> left,c + 1);
        answer(root -> right,c + 1);
    }
    int maxDepth(TreeNode* root) {
        answer(root,0);
        return ans;
    }
};