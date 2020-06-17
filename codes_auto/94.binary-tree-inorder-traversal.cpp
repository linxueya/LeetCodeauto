#
# @lc app=leetcode.cn id=94 lang=cpp
#
# [94] binary-tree-inorder-traversal
#
class Solution {
public:
    vector<int> res;
    vector<int> inorderTraversal(TreeNode* root) {
        if(root == NULL){
            return res;
        }
        if(root->left) inorderTraversal(root->left);
        res.push_back(root->val);
        if(root->right) inorderTraversal(root->right);
        return res;
    }

};
# @lc code=end