class Solution {
public:
    Solution() {
        std::ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
    }
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>ans;
        if(root == nullptr) return ans;
        queue<Node*>q;
        q.push(root);
        ans.push_back({root -> val});
        while(!q.empty())
        {
            int n = q.size();
            vector<int>r;
            for(int i = 0; i < n; i++)
            {
                Node *t = q.front();
                for(Node* j : t -> children)
                {
                    q.push(j);
                    r.push_back(j -> val);
                }
                q.pop();
            }
            if(r.size() > 0) ans.push_back(r);
        }
        return ans;
    }
};