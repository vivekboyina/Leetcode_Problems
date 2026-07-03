class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>fr(grid.size()*grid.size(),0);
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[i].size(); j++) fr[grid[i][j] - 1]+=1;
        }
        int re = -1,np = -1;
        for(int i = 0; i < fr.size(); i++)
        {
            if(fr[i] == 0) np = i + 1;
            else if(fr[i] == 2) re = i + 1;
        }
        return {re,np};
    }
};