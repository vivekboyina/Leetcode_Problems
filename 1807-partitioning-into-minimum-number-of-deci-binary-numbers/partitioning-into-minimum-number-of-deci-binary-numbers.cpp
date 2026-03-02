class Solution {
public:
    int minPartitions(string s) {
        int ans = -1;
        for(char i : s) ans = max(ans,(i - '0'));
        return ans;
    }
};