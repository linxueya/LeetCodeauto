#
# @lc app=leetcode.cn id=142 lang=cpp
#
# [142] linked-list-cycle-ii
#
class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        ListNode* p = head;
        ListNode* q = head;
        while (1) {
            if(!p || !p->next)
                return NULL;
            p = p->next->next;
            q = q->next;
            if (p == q)
                break;
        }
        p = head;
        while (p) {
            if (p == q)
                return p;
            p = p->next;
            q = q->next;
        }
        return NULL;
    }
};
# @lc code=end