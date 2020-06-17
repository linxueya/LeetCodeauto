#
# @lc app=leetcode.cn id=48 lang=cpp
#
# [48] rotate-image
#
class Solution {
public:
    void rotate(vector<vector<int>>& m) {
		int len = m.size();

        for (int i = 0; i < len / 2; i++) {
            int start = i;
            int end = len - i - 1;
            for (int j = 0; j < end - start; j++) {
                int temp = m[start][start + j];
                m[start][start + j] = m[end - j][start];
                m[end - j][start] = m[end][end - j];
                m[end][end - j] = m[start + j][end];
                m[start + j][end] = temp;
            }
        } 
    }
};
# @lc code=end