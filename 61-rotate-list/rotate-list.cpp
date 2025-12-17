class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head -> next == nullptr) return head;
        int n = 0;
        ListNode *c = head,*ans;
        while(c -> next != nullptr)
        {
            c = c -> next;
            n+=1;
        }
        n+=1;
        k = k % n;
        c -> next = head;
        c = c -> next;
        n-=(k + 1);
        cout << n;
        while(n)
        {
            c = c -> next;
            n-=1;
        }
        ans = c -> next;
        c -> next = nullptr;
        return ans;
    }
};