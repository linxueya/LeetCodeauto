#
# @lc app=leetcode.cn id=100 lang=cpp
#
# [100] same-tree
#
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        //bool ret = 1;
        if (!p && !q)
            return true;
        if (!p || !q)
            return false;
        if (p->val != q->val)
            return false;
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
# @lc code=end