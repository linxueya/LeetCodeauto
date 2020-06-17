#
# @lc app=leetcode.cn id=120 lang=cpp
#
# [120] triangle
#
class Solution {
public:
	int minimumTotal(vector<vector<int>>& triangle) {
		vector<vector<int>> dp(triangle);

		if (dp.size() == 0)
			return 0;
		else if (dp.size() == 1)
			return dp[0][0];
		dp[1][0] = dp[0][0] + dp[1][0];
		dp[1][1] = dp[0][0] + dp[1][1];

		for (int i = 2; i < dp.size(); i++)
		{
			for (int j = 0; j < dp[i].size(); j++)
			{
				if (j == 0)
					dp[i][j] = dp[i - 1][j] + triangle[i][j];
				else if (j == dp[i].size() - 1)
					dp[i][j] = dp[i - 1][j-1] + triangle[i][j];
				else
					dp[i][j] = min(dp[i - 1][j - 1], dp[i - 1][j]) + triangle[i][j];
			}
		}
		sort(dp[dp.size() - 1].begin(), dp[dp.size() - 1].end());
		return dp[dp.size() - 1][0];
	}
};
# @lc code=end