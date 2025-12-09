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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head == nullptr || head -> next == nullptr) return head;
        ListNode *c = head -> next,*p = head;
        while(c != nullptr)
        {
            int a = __gcd(p -> val,c -> val);
            p -> next = new ListNode(a,c);
            p = p -> next -> next;
            c = c -> next;
        }
        return head;
    }
};