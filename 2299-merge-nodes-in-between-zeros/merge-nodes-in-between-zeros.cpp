/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode *ans = nullptr,*c = head -> next,*a;
        int k = head -> val;
        while(c != nullptr)
        {
            if(c -> val == 0)
            {
                if(ans == nullptr)
                {
                    ans = new ListNode(k);
                    a = ans;
                }
                else
                {
                    ans -> next = new ListNode(k);
                    ans = ans -> next;
                }
                k = 0;
            }
            else k+=(c -> val);
            c = c -> next;
        }
        return a;
    }
};