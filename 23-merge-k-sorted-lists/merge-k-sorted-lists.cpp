class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& l) {
        priority_queue<
            pair<int, ListNode*>,
            vector<pair<int, ListNode*>>,
            greater<pair<int, ListNode*>>
        > pq;
        for (int i = 0; i < l.size(); i++) {
            while (l[i] != nullptr) {
                pq.push({l[i]->val, l[i]});
                l[i] = l[i]->next;
            }
        }
        ListNode* a = nullptr;
        ListNode* ans = nullptr;
        while (!pq.empty()) {
            auto node = pq.top().second;
            pq.pop();

            if (a == nullptr) {
                a = node;
                ans = a;
            } else {
                a->next = node;
                a = a->next;
            }
        }
        if (a) a->next = nullptr;
        return ans;
    }
};