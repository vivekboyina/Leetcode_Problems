class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int>ans;
        int m = mat.size(),n = mat[0].size();
        int i = 0,j = n - 1,t = 0,b = m - 1;
        while(i <= j && t <= b)
        {
            for(int k = i; k <= j; k++) ans.push_back(mat[t][k]);
            t++;
            for(int k = t; k <= b; k++) ans.push_back(mat[k][j]);
            j--;
            if(t <= b)
            {
                for(int k = j; k >= i; k--) ans.push_back(mat[b][k]);
                b--;
            }
            if(i <= j)
            {
                for(int k = b; k >= t; k--) ans.push_back(mat[k][i]);
                i++;
            }
        }
        return ans;
    }
};