class Solution {
public:
    bool asteroidsDestroyed(int m, vector<int>& ast) {
        sort(ast.begin(),ast.end());
        long long mm = m;
        for(int i : ast)
        {
            if(i > mm) return false;
            mm+=i;
        }
        return true;
    }
};