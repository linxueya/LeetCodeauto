#
# @lc app=leetcode.cn id=21 lang=cpp
#
# [21] merge-two-sorted-lists
#
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

        vector<int> a;
        while (l1 || l2)
        {
            if (l1 != NULL) {
                a.push_back(l1->val);
                l1 = l1->next;
            }
            if (l2 != NULL) {
                a.push_back(l2->val);
                l2 =l2->next;
            }

        }
        sort(a.begin(), a.end());

        ListNode  head(0);
        ListNode* tail = &head;
        for (int i = 0; i < a.size(); i++)
        {
            ListNode* mid = new ListNode(0);
            mid->val = a[i];
            tail->next = mid;
            tail = mid;
        }
        tail->next = NULL;
        return head.next;
    }
};
# @lc code=end