#
# @lc app=leetcode.cn id=111 lang=cpp
#
# [111] minimum-depth-of-binary-tree
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
	int minDepth(TreeNode* root) {

		int lh = 1, rh = 1;
		if (root == NULL)
			return 0;
		lh += minDepth(root->left);
		rh += minDepth(root->right);
		if (lh == 1)
			return rh;
		else if (rh == 1)
			return lh;
		return lh <= rh ? lh : rh;
	}
};
# @lc code=end