#
# @lc app=leetcode.cn id=129 lang=cpp
#
# [129] sum-root-to-leaf-numbers
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
    int sumNumbers(TreeNode* root) {
        return dfs(root,0);
    }
    int dfs(TreeNode* root,int num){
        if(!root)
            return 0;
        else if(!root->left && !root->right)
            return num+root->val;
        num += root->val;
        return dfs(root->left,10*num)+dfs(root->right,10*num);
        
    }
};
# @lc code=end