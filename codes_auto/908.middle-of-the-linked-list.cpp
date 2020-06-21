#
# @lc app=leetcode.cn id=908 lang=cpp
#
# [908] middle-of-the-linked-list
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
    ListNode* middleNode(ListNode* head) {
        ListNode* p = head;
        ListNode* q = head;
        if (p == NULL)
            return p;
        while (p->next != NULL)
        {
            if (p->next->next !=NULL)
            {
                p = p->next->next;
                q = q->next;
            }
            else
                return q->next;
        }
        return q;
    }
};

# @lc code=end