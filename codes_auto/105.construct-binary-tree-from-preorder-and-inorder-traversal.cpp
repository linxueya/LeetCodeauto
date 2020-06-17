#
# @lc app=leetcode.cn id=105 lang=cpp
#
# [105] construct-binary-tree-from-preorder-and-inorder-traversal
#
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        TreeNode* node = new TreeNode(NULL);
        vector<int> pre_left, pre_right, in_left, in_right;
        int left, right, i, temp;
        if (preorder.empty())
            return NULL;
        temp = preorder[0];
        node->val = temp;
        for ( i = 0; i < inorder.size(); i++) {
            if (temp == inorder[i])
                break;
        }
        left = i; right = i+1;
        for (int j = 0; j < left; j++)
        {
            pre_left.push_back(preorder[j + 1]);
            in_left.push_back(inorder[j]);
        }
        for (int k = right; k < inorder.size(); k++)
        {
            pre_right.push_back(preorder[k]);
            in_right.push_back(inorder[k]);
        }
        node->left = buildTree(pre_left, in_left);
        node->right = buildTree(pre_right, in_right);
        return node;
    }
};
# @lc code=end