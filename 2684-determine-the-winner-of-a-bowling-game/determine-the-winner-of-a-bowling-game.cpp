class Solution {
public:
    int isWinner(vector<int>& p1, vector<int>& p2) {
        int a1 = 0,a2 = 0;
        for(int i = 0; i < p1.size(); i++)
        {
            if(i == 0)
            {
                a1+=p1[i];
                a2+=p2[i];
            }
            else if(i == 1)
            {
                if(p1[0] == 10) a1+=(2*p1[i]);
                else a1+=p1[i];
                if(p2[0] == 10) a2+=(2*p2[i]);
                else a2+=p2[i];
            }
            else
            {
                if(p1[i - 1] == 10 || p1[i - 2] == 10) a1+=(2*p1[i]);
                else a1+=p1[i];
                if(p2[i - 1] == 10 || p2[i - 2] == 10) a2+=(2*p2[i]);
                else a2+=p2[i];
            }
        }
        if(a1 == a2) return 0;
        else if(a1 > a2) return 1;
        return 2;
    }
};