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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == nullptr) return list2;
        if(list2 == nullptr) return list1;
        ListNode *ans;
        if(list1 -> val > list2 -> val)
        {
            ans = new ListNode(list2 -> val);
            list2 = list2 -> next;
        }
        else 
        {
            ans = new ListNode(list1 -> val);
            list1 = list1 -> next;
        }
        ListNode *temp = ans;
        while(list1 != nullptr && list2 != nullptr)
        {
            ListNode *t;
            if(list1 -> val > list2 -> val)
            {
                t = new ListNode(list2 -> val);
                list2 = list2 -> next;
            }
            else 
            {
                t = new ListNode(list1 -> val);
                list1 = list1 -> next;
            }
            ans -> next = t;
            ans = ans -> next;
        }
        if(list1 != nullptr) ans -> next = list1;
        if(list2 != nullptr) ans -> next = list2;
        return temp;
    }
};