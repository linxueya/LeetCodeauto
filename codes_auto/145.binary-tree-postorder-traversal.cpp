#
# @lc app=leetcode.cn id=145 lang=cpp
#
# [145] binary-tree-postorder-traversal
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
    vector<int> v;
    vector<int> postorderTraversal(TreeNode* root) {

        if (root == NULL)
            return {};

        postorderTraversal(root->left);
        postorderTraversal(root->right);
        v.push_back(root->val);
        return v;
    }
};
# @lc code=end