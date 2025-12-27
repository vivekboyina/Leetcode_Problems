class Solution {
public:
    int countBalls(int l, int h) {
        vector<int>freq(46,0);
        for(int i = l; i <= h; i++)
        {
            int sum = 0,n = i;
            for (; n > 0; sum += n % 10, n /= 10);
            freq[sum - 1]++;
        }
        return *max_element(freq.begin(),freq.end());
    }
};