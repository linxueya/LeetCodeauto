#
# @lc app=leetcode.cn id=148 lang=cpp
#
# [148] sort-list
#
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        ListNode* pre = head, * fast = head, * slow = head;
        if (!head || !head->next)
            return head;
        while (fast && fast->next) {
            pre = slow;
            fast = fast->next->next;
            slow = slow->next;
        }
        pre->next = NULL;
        ListNode* node1 = sortList(head);
        ListNode* node2 = sortList(slow);
        return mergeList(node1, node2);
    }
    ListNode* mergeList(ListNode* node1, ListNode* node2) {
        ListNode* head = new ListNode(-1);
        ListNode* root = head;
        while (node1 && node2) {
            if (node1->val < node2->val) {
                head->next = node1;
                node1 = node1->next;
            }
            else {
                head->next = node2;
                node2 = node2->next;
            }
            head = head->next;
        }
        if (node1) 
            head->next = node1;
        if (node2) 
            head->next = node2;
        return root->next;
    }
};
# @lc code=end