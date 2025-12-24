class Solution {
public:
    Node* connect(Node* root) {
        if(root == nullptr) return root;
        root -> next = nullptr;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size();
            vector<Node*>v;
            for(int i = 0; i < n; i++)
            {
                Node *t = q.front();
                if(t -> left != nullptr)
                {
                    v.push_back(t -> left);
                    q.push(t -> left);
                }
                if(t -> right != nullptr)
                {
                    v.push_back(t -> right);
                    q.push(t -> right);
                }
                q.pop();
            }
            if(v.size() > 0)
            {
                for(int i = 0; i < v.size() - 1; i++) v[i] -> next = v[i + 1];
                v[v.size() - 1] -> next = nullptr;
            }
        }
        return root;
    }
};