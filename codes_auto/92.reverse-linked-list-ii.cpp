#
# @lc app=leetcode.cn id=92 lang=cpp
#
# [92] reverse-linked-list-ii
#
    class Solution {
    public:
        ListNode* reverseBetween(ListNode* head, int m, int n) {
            ListNode* root = head;
            ListNode* temp1 = new ListNode(0);
            ListNode* temp2 = NULL;
            stack<int> st;
            int i = 1;
            if (m == n )
                return root;
        
            while (root)
            {
                if (i == m-1)
                    temp1 = root;
                if (i == n+1)
                    temp2 = root;
                if (i >= m && i <= n) 
                    st.push(root->val);

                root = root->next;
                i++;
            }
            ListNode* tail = temp1;
            while (!st.empty())
            {
                ListNode* temp = new  ListNode(st.top());
                st.pop();
                tail->next = temp;
                tail = tail->next;
            }
            tail->next = temp2;
            if (m == 1)
                return temp1->next;
            else
            return head;
        }
    };
# @lc code=end