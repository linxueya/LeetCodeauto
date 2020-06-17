#
# @lc app=leetcode.cn id=106 lang=cpp
#
# [106] construct-binary-tree-from-inorder-and-postorder-traversal
#
class Solution {
public:
    TreeNode* buildTree(vector<int>& in, vector<int>& post) {

        TreeNode* node = new TreeNode(NULL);
        vector<int> post_left, post_right, in_left, in_right;
        int left, right, i, temp;
        if (in.empty())
            return NULL;
        temp = post[post.size()-1];
        node->val = temp;
        for (i = 0; i < in.size(); i++) {
            if (temp == in[i])
                break;
        }
        left = i; right = i + 1;
        for (int j = 0; j < left; j++)
        {
            post_left.push_back(post[j]);
            in_left.push_back(in[j]);
        }
        for (int k = right; k < in.size(); k++)
        {
            post_right.push_back(post[k - 1]);
            in_right.push_back(in[k]);
        }
        node->left = buildTree( in_left,post_left);
        node->right = buildTree(in_right,post_right);
        return node;
    }
};
# @lc code=end