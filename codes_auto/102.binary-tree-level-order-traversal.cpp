#
# @lc app=leetcode.cn id=102 lang=cpp
#
# [102] binary-tree-level-order-traversal
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        levelOrderTop(root,  v, 1);
        return v;
    }
    void levelOrderTop(TreeNode* root, vector<vector<int>>& v,int layer) {

        if (root == NULL)
            return;
        if (v.size() == layer - 1) {
            vector<int> v1;
            v.push_back(v1);
        }
        v[layer-1].push_back(root->val);
        levelOrderTop(root->left, v, layer + 1);
        levelOrderTop(root->right, v, layer + 1);

    }
};
# @lc code=end