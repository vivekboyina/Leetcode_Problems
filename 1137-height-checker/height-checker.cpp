class Solution {
public:
    int heightChecker(vector<int>& hgts) {
        vector<int>fr(101,0);
        for(int i : hgts) fr[i]+=1;
        int curr = -1,k = 0,ans = 0;
        while(fr[k] == 0) k+=1;
        curr = k;
        for(int i = 0; i < hgts.size(); i++)
        {
            if(curr != hgts[i]) ans+=1;
            fr[k]-=1;
            while(k < 101 && fr[k] == 0) k+=1;
            curr = k;
        }
        return ans;
    }
};