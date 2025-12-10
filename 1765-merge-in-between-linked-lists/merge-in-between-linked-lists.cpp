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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *ans = new ListNode(list1 -> val),*an = ans;
        list1 = list1 -> next;
        int i = 1;
        while(list1 != nullptr)
        {
            if(i == a) ans -> next = list2;
            else if(i < a)
            {
                ans -> next = new ListNode(list1 -> val);
                ans = ans -> next;
            }
            list1 = list1 -> next;
            if(i == b) break;
            i+=1;
        }
        while(ans -> next != nullptr) ans = ans -> next;
        ans -> next = list1;
        return an;
    }
};