class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int>st1,st2;
        while(l1)
        {
            st1.push(l1 -> val);
            l1 = l1 -> next;
        }
        while(l2)
        {
            st2.push(l2 -> val);
            l2 = l2 -> next;
        }
        int a = 0,c = 0;
        ListNode *ans = nullptr;
        while(!st1.empty() || !st2.empty() || c)
        {
            if(!st1.empty())
            {
                a = a + st1.top();
                st1.pop();
            }
            if(!st2.empty())
            {
                a = a + st2.top();
                st2.pop();
            }
            if(c == 1)
            {
                a = a + c;
                c = 0;
            }
            if(a > 9) c = 1;
            a = a % 10;
            ListNode *t = new ListNode(a);
            t -> next = ans;
            ans = t;
            a = 0;
        }
        return ans;
    }
};
