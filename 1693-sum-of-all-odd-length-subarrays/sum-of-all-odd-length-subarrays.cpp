class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size(),ans = 0;
        if(n == 1) return arr[0];
        vector<int>suf(n);
        suf[0] = arr[0];
        for(int i = 1; i < n; i++) suf[i] = suf[i - 1] + arr[i];
        if(n % 2 != 0) ans+=suf[n - 1]*2;
        else ans+=suf[n - 1];
        for(int i = 3; i < n; i+=2)
        {
            ans+=suf[i - 1];
            for(int j = i; j < n; j++) ans+=(suf[j] - suf[j - i]);
        }
        return ans;
    }
};