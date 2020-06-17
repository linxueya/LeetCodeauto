#
# @lc app=leetcode.cn id=122 lang=cpp
#
# [122] best-time-to-buy-and-sell-stock-ii
#
class Solution {
public:
	int maxProfit(vector<int>& prices) {

		int ret = 0;
		for (int i = 1; i < prices.size(); i++)
		{
			if (prices[i] > prices[i - 1])
				ret += prices[i] - prices[i - 1];
		}
		return ret;
	}
};

# @lc code=end