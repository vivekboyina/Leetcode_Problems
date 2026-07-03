class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int ans[26] = {0};
        for(char i : text) ans[i - 'a']+=1;
        return min({ans['a' - 'a'],ans['b' - 'a'],ans['n' - 'a'],ans['l' - 'a']/2,ans['o' - 'a']/2});
    }
};