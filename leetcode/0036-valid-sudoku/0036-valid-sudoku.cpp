class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& bd) {
        unordered_set<char>st;
        for(int i = 0; i < 9; i++)
        {
            st.clear();
            for(int j = 0; j < 9; j++)
            {
                if(bd[i][j] == '.') continue;
                if(st.count(bd[i][j])) return false;
                st.insert(bd[i][j]);
            }
        }
        for(int i = 0; i < 9; i++)
        {
            st.clear();
            for(int j = 0; j < 9; j++)
            {
                if(bd[j][i] == '.') continue;
                if(st.count(bd[j][i])) return false;
                st.insert(bd[j][i]);
            }
        }
        int r,c;
        for(int sq = 0; sq < 9; sq++)
        {
            st.clear();
            for(int i = 0; i < 3; i++)
            {
                for(int j = 0; j < 3; j++)
                {
                    r = (sq / 3) * 3 + i;
                    c = (sq % 3) * 3 + j;
                    if(bd[r][c] == '.') continue;
                    if(st.count(bd[r][c])) return false;
                    st.insert(bd[r][c]);
                }
            }
        }
        return true;
    }
};
