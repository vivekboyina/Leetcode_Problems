class Solution {
public:
    int wateringPlants(vector<int>& pl, int ca) {
        int ans = 0,x = ca;
        for(int i = 0; i < pl.size(); i++)
        {
            int k = 1;
            if(x < pl[i]) 
            {
                k+=2*(i);
                x = ca;
                x-=pl[i];
            }
            else x-=pl[i];
            ans+=k;
        }
        return ans;
    }
};