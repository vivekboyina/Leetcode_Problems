class Solution {
public:
    int minimumBoxes(vector<int>& app, vector<int>& cap) {
        int a = 0,c = 0,ans = 0;
        for(int i : app) a+=i;
        sort(cap.begin(),cap.end(),greater<int>());
        for(int i : cap)
        {
            if(i > a && a != 0)
            {
                ans+=1;
                break;
            }
            else
            {
                ans+=1;
                a-=i;
            } 
            if(a == 0) break;
        }
        return ans;
    }
};