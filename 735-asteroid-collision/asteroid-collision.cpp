class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        stack<int>st;
        st.push(ast[0]);
        int i = 1;
        while(i < ast.size())
        {
            if(ast[i] < 0 && !st.empty() && st.top() > 0)
            {
                if(!st.empty() && abs(ast[i]) >= st.top())
                {
                    while(!st.empty() && st.top() > 0 && st.top() < abs(ast[i])) st.pop();
                    if(!st.empty() && st.top() == abs(ast[i])) st.pop();
                    else if(st.empty() || st.top() < 0) st.push(ast[i]);
                }
            }
            else st.push(ast[i]);
            i+=1;
        }
        vector<int>ans;
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};