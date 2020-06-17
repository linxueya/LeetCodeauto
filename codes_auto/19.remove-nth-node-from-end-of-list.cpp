#
# @lc app=leetcode.cn id=19 lang=cpp
#
# [19] remove-nth-node-from-end-of-list
#
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* ret = new ListNode(-1);
        ret->next = head;
        ListNode* p = ret, * q = ret,*pre = ret;
        int cnt = 0;
        while (p) {
            p = p->next;

            if (cnt > n-1) {
                pre = q;
                q = q->next;
            }

            cnt++;
        }
        pre->next = pre->next->next;
        return ret->next;
    }
};
# @lc code=end