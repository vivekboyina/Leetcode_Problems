class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode *c = head;
        while(head != nullptr)
        {
            if(head -> next != nullptr)
            {
                int k = head -> val;
                head -> val = head -> next -> val;
                head -> next -> val = k;
                head = head -> next -> next;
            }
            else head = head -> next;
        }
        return c;
    }
};