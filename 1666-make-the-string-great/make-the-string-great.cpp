class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        for(char i : s)
        {
            if(i >= 'A' && i <= 'Z' && !st.empty())
            {
                if((i - 'A') == (st.top() - 'a')) st.pop();
                else st.push(i);
            }
            else if(i >= 'a' && i <= 'z' && !st.empty())
            {
                if((i - 'a') == (st.top() - 'A')) st.pop();
                else st.push(i);
            }
            else st.push(i);
        }
        string ans = "";
        while(!st.empty()) 
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};