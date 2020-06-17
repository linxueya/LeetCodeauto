#
# @lc app=leetcode.cn id=54 lang=cpp
#
# [54] spiral-matrix
#
class Solution {
public:
	vector<int> spiralOrder(vector<vector<int>>& matrix) {
		vector<int> v;
		if (0 == matrix.size())
			return v;
		int left = 0, right = matrix[0].size()-1;
		int up = 0, down = matrix.size()-1;
		while (left <= right && up <= down) {
			for (int j = left; j <= right && avoid(left, right, up, down); j++)
				v.push_back(matrix[up][j]);
			up++;
			for (int i = up; i <= down && avoid(left,right,up,down); i++)
				v.push_back(matrix[i][right]);
			right--;
			for (int j = right; j >= left && avoid(left, right, up, down); j--)
				v.push_back(matrix[down][j]);
			down--;
			for (int i = down; i >= up && avoid(left, right, up, down); i--)
				v.push_back(matrix[i][left]);
			left++;
		}
		return v;
	}
	bool avoid(int left, int right, int up, int down) {
		return left <= right&& up <= down;
	}
};
# @lc code=end