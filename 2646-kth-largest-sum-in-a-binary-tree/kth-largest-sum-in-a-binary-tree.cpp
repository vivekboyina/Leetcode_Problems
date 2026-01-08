class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long>ans;
        ans.push_back(root -> val);
        long long s = 0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            s = 0;
            int n = q.size();
            for(int i = 0; i < n; i++)
            {
                if(q.front() -> left != nullptr)
                {
                    s+=q.front() -> left -> val;
                    q.push(q.front() -> left);
                }
                if(q.front() -> right != nullptr)
                {
                    s+=q.front() -> right -> val;
                    q.push(q.front() -> right);
                }
                q.pop();
            }
            if(q.size() > 0) ans.push_back(s);
        }
        if(k > ans.size()) return -1;
        sort(ans.begin(),ans.end(),greater<long long>());
        return ans[k - 1];
    }
};