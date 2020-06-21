#
# @lc app=leetcode.cn id=199 lang=cpp
#
# [199] binary-tree-right-side-view
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
    vector<int> rightSideView(TreeNode* root) {
        dfs(root,0);
        return v;
    }
    void dfs(TreeNode* root,int hight){
        if(!root)
            return;
        if(v.size() <= hight)
            v.push_back(0);
        v[hight] = root->val;
        dfs(root->left,hight+1);
        dfs(root->right,hight+1);
    }
};
# @lc code=end