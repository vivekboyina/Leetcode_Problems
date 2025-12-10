class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int,int>mp;
        for(int i : nums) mp[i]++;
        ListNode *c,*ans = nullptr;
        while(head != nullptr)
        {
            if(mp.find(head -> val) == mp.end())
            {
                if(ans == nullptr) 
                {
                    ans = new ListNode(head -> val);
                    c = ans;
                }
                else
                {
                    ans -> next = new ListNode(head -> val);
                    ans = ans -> next;
                }
            }
            head = head -> next;
        }
        return c;
    }
};