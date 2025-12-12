class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr || head -> next == nullptr || head -> next -> next == nullptr) return head;
        ListNode *o = head -> next,*e = head;
        ListNode *st = e,*nd = o;
        int i = 2;
        head = head -> next -> next;
        while(head != nullptr)
        {
            if(i % 2 == 0)
            {
                e -> next = head;
                e = e -> next;
            }
            else
            {
                o -> next = head;
                o = o -> next;
            }
            head = head -> next;
            i+=1;
        }
        e -> next = nd;
        o -> next = nullptr;
        return st;
    }
};