#
# @lc app=leetcode.cn id=173 lang=cpp
#
# [173] binary-search-tree-iterator
#
class BSTIterator {
public:
    queue<int> res;

    BSTIterator(TreeNode* root) {
        res = initIterator(root);
    }
    queue<int> initIterator(TreeNode* root) {
        if (root == NULL) {
            return res;
        }
        if (root->left) initIterator(root->left);
        res.push(root->val);
        if (root->right) initIterator(root->right);
        return res;
    }
    /** @return the next smallest number */
    int next() {
        int ret = res.front();
        res.pop();
        return ret;
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !res.empty();
    }
};
# @lc code=end