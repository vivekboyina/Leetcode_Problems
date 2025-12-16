class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>ans;
        while(head != nullptr)
        {
            int i = head -> val;
            ListNode *c = head -> next;
            while(c != nullptr)
            {
                if(c -> val > i)
                {
                    i = c -> val;
                    break;
                }
                c = c -> next;
            }
            if(i == head -> val) ans.push_back(0);
            else ans.push_back(i);
            head = head -> next;
        }
        return ans;
    }
};