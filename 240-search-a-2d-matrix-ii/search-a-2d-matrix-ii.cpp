class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        bool ans = false;
        int n = mat.size(),m = mat[0].size();
        for(int i = 0; i < n; i++)
        {
            if(mat[i][0] <= tar && mat[i][m - 1] >= tar) ans = binary_search(mat[i].begin(),mat[i].end(),tar);
            if(ans == true || mat[i][0] > tar) break;
        }
        return ans;
    }
};