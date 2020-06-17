#
# @lc app=leetcode.cn id=119 lang=cpp
#
# [119] pascals-triangle-ii
#
class Solution {
public:
	vector<int> getRow(int numRows) {
		if (numRows == 0)
			return {1};
		if (numRows == 1)
			return {1,1};
		vector<int> v = {1,1};
		for (int i = 2; i <= numRows; i++)
		{
			int len = i + 1;
			vector<int> v2;
			for (int j = 0; j < len; j++)
			{
				if (0 == j || len - 1 == j)
					v2.push_back(1);
				else
					v2.push_back(v[j - 1] + v[j]);
			}
			v = v2;
		}
		return v;
	}
};
# @lc code=end