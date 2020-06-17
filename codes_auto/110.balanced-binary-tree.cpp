#
# @lc app=leetcode.cn id=110 lang=cpp
#
# [110] balanced-binary-tree
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

    bool isBalanced(TreeNode* root) {
        if(!root)
            return true;
        return dfs(root)!=-1;

    }
    int dfs(TreeNode* root){
        int left,right;
        if(!root){
            return 0;
        }
        left = dfs(root->left);
        if(left == -1) return -1;
        right = dfs(root->right);
        if(right == -1) return -1;
        return abs(left - right) > 1 ? -1 : 1+max(left, right);
    }
};
# @lc code=end