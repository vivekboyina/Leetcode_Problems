class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int>fr(501,0);
        for(int i : arr) fr[i]+=1;
        int ans = 0;
        for(int i : arr) if(i == fr[i]) ans = max(ans,i);
        return ans > 0 ? ans : -1;
    }
};