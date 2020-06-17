#
# @lc app=leetcode.cn id=107 lang=cpp
#
# [107] binary-tree-level-order-traversal-ii
#
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> v;
        vector<vector<int>> v1;
        levelOrderTop(root,  v, 1);
        for (int i = 0; i < v.size(); i++)
            v1.push_back(v[v.size() - i - 1]);

        return v1;
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