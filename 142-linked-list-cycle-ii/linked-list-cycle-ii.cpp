class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == nullptr || head -> next == nullptr) return nullptr;
        ListNode *r = head,*t = head;
        while(r != nullptr && r -> next != nullptr)
        {
            r = r -> next -> next;
            t = t -> next;
            if(r == t) break;
        }
        r = head;
        while(r != nullptr && t != nullptr)
        {
            if(r == t) return r;
            r = r -> next;
            t = t -> next;
        }
        return nullptr;
    }
};