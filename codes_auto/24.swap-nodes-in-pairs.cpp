#
# @lc app=leetcode.cn id=24 lang=cpp
#
# [24] swap-nodes-in-pairs
#
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {

        ListNode* pre = new ListNode(-1);//哨兵节点
        pre->next = head;
        ListNode* cur = pre;
        if (cur->next == NULL)
            return head;
        while (cur->next) {
            if (cur->next->next) {
                ListNode* temp = cur->next;
                cur->next = cur->next->next;
                temp->next = cur->next->next;//需注意此时cur已经发生改变
                cur->next->next = temp;
                cur = cur->next;
            }
            cur = cur->next;
        }
            
        return pre->next;
    }
};
# @lc code=end