#
# @lc app=leetcode.cn id=112 lang=cpp
#
# [112] path-sum
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
	bool hasPathSum(TreeNode* root, int sum) {

		if (root == NULL)
		{
			return NULL;
		}
		sum = sum - root->val;
		if ((root->left == NULL) && (root->right == NULL))
			return (sum == 0);

		return hasPathSum(root->left, sum ) || hasPathSum(root->right, sum);
	}
};
# @lc code=end