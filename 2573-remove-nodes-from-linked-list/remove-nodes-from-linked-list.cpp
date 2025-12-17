class Solution {
public:
    ListNode* rever(ListNode* head)
    {
        ListNode *p = nullptr;
        while(head != nullptr)
        {
            ListNode *t = head -> next;
            head -> next = p;
            p = head;
            head = t;
        }
        return p;
    }
    ListNode* removeNodes(ListNode* head) {
        head = rever(head);
        ListNode *ans = nullptr,*c = head;
        int m = -1;
        while(head != nullptr)
        {
            if(head -> val >= m)
            {
                ans = head;
                m = head -> val;
            }
            else ans -> next = head -> next;
            head = head -> next;
        }
        return rever(c);
    }
};