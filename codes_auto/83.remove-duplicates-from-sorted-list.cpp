#
# @lc app=leetcode.cn id=83 lang=cpp
#
# [83] remove-duplicates-from-sorted-list
#
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* p = head;
        if (p == NULL)
            return NULL;
        while (p->next != NULL)
        {
            if (p->val == p->next->val)
            {
                p->next = p->next->next;
            }
            else
                p = p->next;
        }
        return head;
    }
};
# @lc code=end