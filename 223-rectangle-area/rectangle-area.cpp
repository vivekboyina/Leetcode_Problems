class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int l1 = min(ax1,bx1),l2 = max(ax2,bx2);
        int w1 = min(ay1,by1),w2 = max(ay2,by2);
        int a1 = abs(ax1 - ax2)*abs(ay1 - ay2),a2 = abs(bx1 - bx2)*abs(by1 - by2);
        int l = 0,w = 0;
        for(int i = l1; i <= l2; i++)
        {
            if(i >= ax1 && i <= ax2 && i >= bx1 && i <= bx2)
            {
                cout << i << " ";
                l+=1;
            }
        }
        cout << endl;
        for(int i = w1; i <= w2; i++)
        {
            if(i >= ay1 && i <= ay2 && i >= by1 && i <= by2)
            {
                cout << i << " ";
                w+=1;
            }
        }
        if(l > 0 && w > 0) return (a1 + a2 - (l - 1)*(w - 1));
        return a1 + a2;
    }
};