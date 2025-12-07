class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr) return head;
        while(head != nullptr && head -> val == val) head = head -> next;
        if(head == nullptr) return nullptr;
        ListNode *p = new ListNode(-1),*c = head;
        ListNode *a = p;
        while(c != nullptr)
        {
            if(c -> val != val)
            {
                p -> next = c;
                p = p -> next;
            }
            c = c -> next;
        }
        p -> next = nullptr;
        return a -> next;
    }
};