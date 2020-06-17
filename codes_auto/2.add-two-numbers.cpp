#
# @lc app=leetcode.cn id=2 lang=cpp
#
# [2] add-two-numbers
#
/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    
        ListNode vHead(0), *p = &vHead;
        int flag = 0;
        while (l1 || l2 || flag) {
            int tmp = 0;
            if (l1 != nullptr) tmp += l1->val;
            if (l2 != nullptr) tmp += l2->val;
            tmp += flag;
            flag = tmp / 10;
    
            ListNode *next = new ListNode(tmp%10);
            p->next = next;
            p = next;
            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
        }
        return vHead.next;
    }
};
# @lc code=end