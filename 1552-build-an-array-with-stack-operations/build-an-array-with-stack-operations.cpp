class Solution {
public:
    vector<string> buildArray(vector<int>& t, int n) {
        vector<string>ans;
        int j = 0,k = t[j];
        stack<int>st;
        for(int i = 1; i <= n; i++)
        {
            if(j >= t.size()) break;
            if(t[j] == i)
            {
                st.push(i);
                j+=1;
                ans.push_back("Push");
            }
            else
            {
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        }
        return ans;
    }
};