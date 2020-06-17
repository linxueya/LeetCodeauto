#
# @lc app=leetcode.cn id=64 lang=cpp
#
# [64] minimum-path-sum
#
class Solution {
public:
	int minPathSum(vector<vector<int>>& grid) {
		vector < vector<int>> v(grid);
		int i, j;
		if (0 == grid.size())
			return 0;
		for (i = 0; i < grid.size(); i++)
		{
			for (j = 0; j < grid[i].size(); j++)
			{
				if (0 == i && 0 != j)
					grid[i][j] = grid[i][j - 1] + grid[i][j];
				else if (0 != i && 0 == j)
					grid[i][j] = grid[i - 1][j] + grid[i][j];
				else if (0 == i && 0 == j)
					grid[i][j] = grid[i][j];
				else
					grid[i][j] = min(grid[i-1][j], grid[i][j-1]) + grid[i][j];
			}
		}
		return grid[i-1][j-1];
	}
};
# @lc code=end