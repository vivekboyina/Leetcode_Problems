class Solution {
public:
    int cnt = 0,c = 0;
    int l,r,a,b,lr,ab;
    void sum(TreeNode* root)
    {
        if(root == nullptr) return;
        c+=(root -> val);
        sum(root -> left);
        sum(root -> right);
    }
    void num(TreeNode* root)
    {
        if(root == nullptr) return;
        c+=1;
        num(root -> left);
        num(root -> right);
    }
    void answer(TreeNode* root)
    {
        if(root == nullptr) return;
        c = 0;
        num(root -> left);
        l = c;
        c = 0;
        num(root -> right);
        r = c;
        c = 0;
        sum(root -> left);
        a = c;
        c = 0;
        sum(root -> right);
        b = c;
        lr = l + r + 1;
        ab = a + b + (root -> val);
        if(ab/lr == (root -> val))
        {
            cnt+=1;
            cout << lr << " " << ab << " " << (root -> val) << endl;
        }
        answer(root -> left);
        answer(root -> right);
    }
    int averageOfSubtree(TreeNode* root) {
        answer(root);
        return cnt;
    }
};