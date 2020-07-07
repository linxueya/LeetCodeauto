#
# @lc app=leetcode.cn id=1411 lang=cpp
#
# [1411] convert-binary-number-in-a-linked-list-to-integer
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
    int getDecimalValue(ListNode* head) {
        int ret = 0;
        while (head != NULL)
        {
            ret = 2 * ret + head->val;
            head = head->next;

        }
        return ret;
    }
};
# @lc code=end