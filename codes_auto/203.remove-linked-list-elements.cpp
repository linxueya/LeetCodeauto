#
# @lc app=leetcode.cn id=203 lang=cpp
#
# [203] remove-linked-list-elements
#
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* sen = new ListNode(0);
        sen->next = head;

        ListNode* prev =  sen;
        ListNode* cuur = head;
        if (head == NULL)
        {
            return head;
        }

        while (cuur != NULL )
        {
            if (val == cuur->val)
                prev->next = cuur->next;
            else
                prev = cuur;
            cuur = cuur->next;
        }
        return sen->next;
    }
};
# @lc code=end