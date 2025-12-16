class Solution {
public:
    ListNode* rever(ListNode* head)
    {
        ListNode *rh = nullptr;
        while(head != nullptr)
        {
            ListNode *t = head -> next;
            head -> next = rh;
            rh = head;
            head = t;
        }
        return rh;
    }
    ListNode* doubleIt(ListNode* head) {
        head = rever(head);
        int c = 0;
        ListNode *ans = nullptr;
        while(head != nullptr)
        {
            int k = 2*(head -> val) + c;
            c = 0;
            if(k > 9) c = 1;
            k = k % 10;
            ListNode *t = new ListNode(k);
            t -> next = ans;
            ans = t;
            head = head -> next;
        }
        if(c == 1) 
        {
            ListNode *t = new ListNode(c);
            t -> next = ans;
            ans = t;
        }
        return ans;
    }
};