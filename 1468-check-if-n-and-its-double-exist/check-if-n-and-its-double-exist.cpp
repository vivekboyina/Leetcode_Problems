class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int cnt = 0;
        unordered_map<int,int>mp;
        for(int i = 0; i < arr.size(); i++) mp[arr[i]] = i;
        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i] % 2 == 0)
            {
                int f = arr[i] / 2;
                if(mp.find(f) != mp.end() && mp[f] != i) cnt++;
            }
        }
        return (cnt != 0);
    }
};