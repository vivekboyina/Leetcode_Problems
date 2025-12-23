class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        if(root -> val % 2 == 0) return false;
        queue<TreeNode*>q;
        q.push(root);
        int c = 0;
        bool f = true;
        while(!q.empty() && f == true)
        {
            vector<int>a;
            int n = q.size();
            c+=1;
            for(int i = 0; i < n; i++)
            {
                if(q.front() -> left != nullptr)
                {
                    q.push(q.front() -> left);
                    int k = q.front() -> left -> val;
                    if(c % 2 == 0 && k % 2 != 0) a.push_back(k);
                    else if(c % 2 != 0 && k % 2 == 0) a.push_back(k);
                    else return false;
                }
                if(q.front() -> right != nullptr)
                {
                    q.push(q.front() -> right);
                    int k = q.front() -> right -> val;
                    if(c % 2 == 0 && k % 2 != 0) a.push_back(k);
                    else if(c % 2 != 0 && k % 2 == 0) a.push_back(k);
                    else return false;
                }
                q.pop();
            }
            if(c % 2 == 0) f = adjacent_find(a.begin(), a.end(),
        [](int a, int b) { return a >= b; }) == a.end();
            else f = adjacent_find(a.begin(), a.end(),
        [](int a, int b) { return a <= b; }) == a.end();
        }
        return f;
    }
};