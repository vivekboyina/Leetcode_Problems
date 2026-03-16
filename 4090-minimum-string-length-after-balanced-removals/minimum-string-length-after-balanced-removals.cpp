class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int a = 0,b = 0;
        for(char i : s)
            {
                if(i == 'a') a+=1;
                else b+=1;
            }
        return (a == b) ? 0 : max(a,b) - min(a,b); 
    }
};