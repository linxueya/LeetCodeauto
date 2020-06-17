#
# @lc app=leetcode.cn id=104 lang=cpp
#
# [104] maximum-depth-of-binary-tree
#
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        int lh, rh;
        if (root == NULL)
            return 0;

            lh = maxDepth(root->left) + 1;
   
            rh = maxDepth(root->right) + 1;
        return lh > rh ? lh : rh;
    }
};
# @lc code=end