#
# @lc app=leetcode.cn id=101 lang=cpp
#
# [101] symmetric-tree
#
class Solution {
public:
	bool isSymmetric(TreeNode* root) {
		if (!root) return true; //常规 
		return box(root->left, root->right);
	}
	bool box(TreeNode* l, TreeNode* r) {
		if (l == NULL && r == NULL)  return true;
		if (l == NULL || r == NULL)  return false;
		return (l->val == r->val) //对应node的值要相同
			&& (box(l->left, r->right)) //注意这两句，为了对称，对比左节点的左子节点和右节点的右子节点
			&& (box(r->left, l->right)); //右节点的左子节点和左节点的右子节点
	}
};
# @lc code=end