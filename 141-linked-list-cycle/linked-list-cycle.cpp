class Solution {
public:
    bool hasCycle(ListNode *head) {
        long long int cnt = 0;
        while(head != nullptr)
        {
            head = head -> next;
            cnt++;
            if(cnt > 10000) return true;
        }
        return false;
    }
};