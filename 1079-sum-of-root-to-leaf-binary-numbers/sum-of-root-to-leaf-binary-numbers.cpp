class Solution {
public:
    long long ans = 0;
    void answer(TreeNode* root,string s)
    {
        if(root == nullptr) return;
        s+=char(root -> val + '0');
        if(root -> left == nullptr && root -> right == nullptr)
        {
            ans+=stoi(s,nullptr,2);
            return;
        }
        answer(root -> left,s);
        answer(root -> right,s);
    }
    int sumRootToLeaf(TreeNode* root) {
        answer(root,"");
        return ans;
    }
};