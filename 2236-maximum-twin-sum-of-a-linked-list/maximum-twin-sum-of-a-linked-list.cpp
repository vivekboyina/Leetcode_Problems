class Solution {
public:
    int pairSum(ListNode* head) {
        int n = 0;
        ListNode *c = head;
        while(c != nullptr)
        {
            c = c -> next;
            n+=1;
        }
        stack<int>st;
        ListNode *p = head;
        int m = 0,i = 0;
        while(p != nullptr)
        {
            if(i < (n/2)) st.push(p -> val);
            else
            {
                m = max(m,(st.top() + (p -> val)));
                st.pop();
            }
            p = p -> next;
            i+=1;
        }
        return m;
    }
};