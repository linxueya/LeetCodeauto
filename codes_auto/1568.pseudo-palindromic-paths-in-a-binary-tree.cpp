#
# @lc app=leetcode.cn id=1568 lang=cpp
#
# [1568] pseudo-palindromic-paths-in-a-binary-tree
#
class Solution {
public:
    int pseudoPalindromicPaths(TreeNode* root) {
        if (root == NULL)
            return 0;
        vector<int> v;
        return pseudoPalindromicPaths(root, v);

    }
    int pseudoPalindromicPaths(TreeNode* root, vector<int> v) {
        int cnt,lcnt,rcnt;
        if (root == NULL)
            return 0;

        v.push_back(root->val);
                if(!root->left && !root->right)
        {
            map<int,int> m;
            int temp = 0;
            for (auto n:v)
            {
                m[n] +=1;
            }
            for (auto x : m){
                if (x.second % 2)
                    temp++;
            }        
            if(temp < 2)
                return 1;
            else
                  return 0;
        }
        lcnt = pseudoPalindromicPaths(root->left, v);
        rcnt = pseudoPalindromicPaths(root->right, v);
        cnt = lcnt + rcnt;
        return cnt;
    }
};
# @lc code=end