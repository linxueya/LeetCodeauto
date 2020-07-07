#
# @lc app=leetcode.cn id=1063 lang=cpp
#
# [1063] best-sightseeing-pair
#
class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& A) {
        int res = 0, left = A[0] + 0;
        for (int i = 1; i < A.size(); i ++) {
            res = max(res, left + A[i] - i);
            left = max(left, A[i] + i);
        }
        return res;
    }
};

# @lc code=end