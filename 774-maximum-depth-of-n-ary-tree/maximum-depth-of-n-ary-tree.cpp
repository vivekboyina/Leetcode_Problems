class Solution {
public:
    int maxDepth(Node* root) {  
        int ans = 1;
        if(root == nullptr) return 0;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size();
            for(int i = 0; i < n; i++)
            {
                Node* t = q.front();
                for(Node* c : t -> children) q.push(c);
                q.pop();
            }
            if(q.size() > 0) ans+=1;
        }
        return ans;
    }
};