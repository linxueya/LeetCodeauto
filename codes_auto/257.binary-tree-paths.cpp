#
# @lc app=leetcode.cn id=257 lang=cpp
#
# [257] binary-tree-paths
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
    vector<string> ret;
    vector<string> binaryTreePaths(TreeNode* root) {
        dfs(root,"");
        return ret;
    }
    void dfs(TreeNode* root,string str){
        if(!root){
            return;
        }
        else if(!root->left && !root->right)
        {
            str+=to_string(root->val);
            ret.push_back(str);
            return;
        }
        str += to_string(root->val);
        str += "->";
        dfs(root->left,str);
        dfs(root->right,str);
    }
};
# @lc code=end