class Solution {
public:
    int timeRequiredToBuy(vector<int>& ti, int k) {
        int c = ti[k],cnt = 0;
        ti[k] = -1;
        queue<int>q;
        for(int i : ti)
        {
            cout << i << " ";
            q.push(i);
        }
        bool f = false;
        while(f == false)
        {
            if(q.front() == -1)
            {
                if(c == 1) f = true;
                else 
                {
                    c-=1;
                    q.push(-1);
                    q.pop();
                }
            }
            else
            {
                if(q.front() == 1) q.pop();
                else
                {
                    q.push(q.front() - 1);
                    q.pop();
                }
            }
            cnt = cnt + 1;
        }
        return cnt;
    }
};