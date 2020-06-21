#
# @lc app=leetcode.cn id=234 lang=cpp
#
# [234] palindrome-linked-list
#
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        while (head) {
            v.push_back(head->val);
            head = head->next;
        }
        vector<int> v1 =v;
        reverse(v.begin(), v.end());

        return v==v1;
    }
};
# @lc code=end