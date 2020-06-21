#
# @lc app=leetcode.cn id=606 lang=cpp
#
# [606] construct-string-from-binary-tree
#
 class Solution {
public:
    string str;
    string tree2str(TreeNode* t) {
        if (t ==NULL)
            return "";
        if (!t->left && !t->right)
            return to_string(t->val)+"";
        if (!t->right)
            return to_string(t->val) + "(" + tree2str(t->left) + ")";

        return to_string(t->val) + "(" + tree2str(t->left) + ")(" + tree2str(t->right) + ")";
    }
};

# @lc code=end