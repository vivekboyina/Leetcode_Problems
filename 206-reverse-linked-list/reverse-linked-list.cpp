class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* a = nullptr,*c = head,*p = nullptr;
        while(c != nullptr)
        {
            p = c;
            c = c -> next;
            p -> next = a;
            a = p;
        }
        return a;
    }
};