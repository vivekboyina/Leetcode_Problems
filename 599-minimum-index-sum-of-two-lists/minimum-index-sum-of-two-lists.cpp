class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int>m1,m2;
        for(int i = 0; i < list1.size(); i++) m1[list1[i]] = i;
        int m = 0,a = INT_MAX;
        for(int i = 0; i < list2.size(); i++)
        {
            m2[list2[i]] = i;
            if(m1.find(list2[i]) != m1.end())
            {
                m = i + m1[list2[i]];
                a = min(m,a);
            }
        }
        vector<string>ans;
        for(auto i : m1)
        {
            if(m2.find(i.first) != m2.end() && (i.second + m2[i.first] == a)) ans.push_back(i.first);
        }
        return ans;
    }
};