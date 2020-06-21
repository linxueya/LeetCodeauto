#
# @lc app=leetcode.cn id=160 lang=cpp
#
# [160] intersection-of-two-linked-lists
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
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        stack<ListNode*> s1;
        stack<ListNode*> s2;
        ListNode* p = headA;
        ListNode* q = headB;
        ListNode* ret = NULL;
        while (p) {
            s1.push(p);
            p = p->next;
        }
        while (q) {
            s2.push(q);
            q = q->next;
        }
        while (!s1.empty()&& !s2.empty()) {
            if (s2.top() == s1.top()) {
                ret = s2.top();
                s1.pop();
                s2.pop();
            }
            else
                break;
        }

        return ret;
    }
};
# @lc code=end