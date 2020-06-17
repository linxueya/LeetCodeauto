#
# @lc app=leetcode.cn id=118 lang=cpp
#
# [118] pascals-triangle
#
class Solution {
public:
	vector<vector<int>> generate(int numRows) {
		vector<vector<int>> v;
		if (numRows == 0)
			return v;
		if (numRows == 1)
			return { {1} };
		vector<int> v1 = { 1, 1 };
		v.push_back({1});
		v.push_back(v1);
		if (numRows == 2)
			return v;
		for (int i = 2; i < numRows; i++)
		{
			int len = i + 1;
			vector<int> v2;
			for (int j = 0; j < len; j++)
			{
				if (0 == j || len - 1 == j)
					v2.push_back(1);
				else
					v2.push_back(v[i - 1][j - 1] + v[i - 1][j]);
			}
			v.push_back(v2);
		}
		return v;
	}
};
# @lc code=end