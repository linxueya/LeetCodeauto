#
# @lc app=leetcode.cn id=109 lang=cpp
#
# [109] convert-sorted-list-to-binary-search-tree
#
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {

        return dfs(head);
    }
    TreeNode* dfs(ListNode* head)
    {
        ListNode* pre = head, * fast = head, * slow = head;
        if (head == NULL)
            return NULL;
        if (!head->next) {
            TreeNode* root = new TreeNode(head->val);
            return root;
        }
        while (fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
        }
        while (pre->next != slow)
            pre = pre->next;
        TreeNode* root = new TreeNode(slow->val);
        pre->next = NULL;
        root->left = dfs(head);
        root->right = dfs( slow->next);
        return root;
    }
};
# @lc code=end