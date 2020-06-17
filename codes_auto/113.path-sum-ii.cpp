#
# @lc app=leetcode.cn id=113 lang=cpp
#
# [113] path-sum-ii
#
class Solution {
public:
	vector<vector<int>> v;
	vector<int > v1;
	vector<vector<int>> pathSum(TreeNode* root, int sum) {

		dfs(root,  sum);
		return v;
	}
	void dfs(TreeNode* root,  int sum) {

		if (root == NULL) {
			return;
		}
		sum = sum - root->val;
		v1.push_back(root->val);
		if ((root->left == NULL) && (root->right == NULL))
			if (sum == 0)
				v.push_back(v1);

		dfs(root->left,sum);
		dfs(root->right,sum);

		v1.pop_back();
		return;
	}
};
# @lc code=end