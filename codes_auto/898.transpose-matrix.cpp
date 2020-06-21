#
# @lc app=leetcode.cn id=898 lang=cpp
#
# [898] transpose-matrix
#
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {

        vector<vector<int>> res(A[0].size());
        for (int i = 0; i < A[0].size(); ++i) {
            for (int j = 0; j < A.size(); ++j)
                res[i].emplace_back(A[j][i]);
        }
        return res;
    }
};

# @lc code=end