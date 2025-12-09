class Solution {
public:
    int minimumRefill(vector<int>& pl, int ca, int cb) {
        int ans = 0,n = pl.size() - 1,j = 0,k = n,a = ca,b = cb;
        for(int i = 0; i < pl.size(); i++)
        {
            j = i;
            k = n - i;
            if(j == k)
            {
                if(pl[j] > a && pl[j] > b) ans+=1;
                break;
            }
            if(j > k) break;
            if(pl[j] > a)
            {
                a = ca;
                ans+=1;
                a-=pl[j];
            }
            else a-=pl[j];
            if(pl[k] > b)
            {
                b = cb;
                ans+=1;
                b-=pl[k];
            }
            else b-=pl[k];
        }
        return ans;
    }
};