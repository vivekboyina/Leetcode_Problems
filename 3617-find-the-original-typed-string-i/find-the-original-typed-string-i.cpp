class Solution {
public:
    int possibleStringCount(string w) {
        int cnt = 1;
        for(int i = 1; i < w.length(); i++) if(w[i] == w[i - 1]) cnt+=1;
        return cnt;
    }
};