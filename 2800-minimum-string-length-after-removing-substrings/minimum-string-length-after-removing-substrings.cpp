class Solution {
public:
    int minLength(string s) {
        stack<char>st;
        for(char i : s)
        {
            if(!st.empty() && i == 'B' && st.top() == 'A') st.pop();
            else if(!st.empty() && i == 'D' && st.top() == 'C') st.pop();
            else st.push(i);
        }
        return st.size();
    }
};