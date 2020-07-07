#
# @lc app=leetcode.cn id=1544 lang=cpp
#
# [1544] count-good-nodes-in-binary-tree
#
class Solution {
public:
    int goodNodes(TreeNode* root) {
        if (root == NULL)
            return 0;
        return goodNodes(root, root->val);
    }
    int goodNodes(TreeNode* root, int base)
    {
        int cnt = 0, lcnt = 0, rcnt = 0;
        if (root == NULL)
            return 0;
        if (root->val >= base) {
            cnt++;
			base = root->val;
        }

        lcnt = goodNodes(root->left, base);
        rcnt = goodNodes(root->right, base);
		cnt += lcnt + rcnt;
        return cnt;
    }
};
# @lc code=end