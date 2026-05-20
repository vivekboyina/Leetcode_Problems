class Solution {
public:
    int countAsterisks(string s) {
        int ans = 0;
        bool cnt = false;
        for(char i : s)
        {
            if(i == '|') cnt = !cnt;
            if(!cnt && i == '*') ans+=1;
        }
        return ans;
    }
};