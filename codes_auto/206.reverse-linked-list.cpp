#
# @lc app=leetcode.cn id=206 lang=cpp
#
# [206] reverse-linked-list
#
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* root=new ListNode(NULL);
        ListNode* tail = root;
        stack<int> st;
        while (head)
        {
            st.push(head->val);
            head = head->next;
        }
        while (!st.empty())
        {
            ListNode* temp =new  ListNode(st.top());
            st.pop();
            tail->next = temp;
            tail = tail->next;

        }
        return root->next;
    }
};
# @lc code=end