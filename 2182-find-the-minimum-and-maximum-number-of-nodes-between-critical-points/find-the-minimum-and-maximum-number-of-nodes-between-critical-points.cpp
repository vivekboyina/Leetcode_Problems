class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>ans;
        int i = 0;
        ListNode *p = nullptr;
        while(head != nullptr)
        {
            if(p != nullptr && head -> next != nullptr)
            {
                if(p -> val > head -> val && head -> next -> val > head -> val) ans.push_back(i);
                else if(p -> val < head -> val && head -> next -> val < head -> val) ans.push_back(i);
            }
            p = head;
            head = head -> next;
            i+=1;
        }
        if(ans.size() > 1)
        {
            int a = -1,b = INT_MAX;
            int n = ans.size();
            a = ans[n - 1] - ans[0];
            for(int i = 1; i < n; i++) b = min(ans[i] - ans[i - 1],b);
            return {b,a};
        }
        return {-1,-1};
    }
};