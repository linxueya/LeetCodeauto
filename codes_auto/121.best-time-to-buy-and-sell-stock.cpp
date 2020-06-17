#
# @lc app=leetcode.cn id=121 lang=cpp
#
# [121] best-time-to-buy-and-sell-stock
#
class Solution {
public:
	int maxProfit(vector<int>& prices) {

		int ret = 0;
		vector<int> cost;
		prices.push_back(-1);//哨兵节点
		for (int i = 0; i < prices.size(); i++)
		{
			while (!cost.empty() && cost.back() > prices[i]) {
				ret = max(ret, cost.back() - cost.front());
				cost.pop_back();
			}
			cost.push_back(prices[i]);
		}
		return ret;
	}
};
# @lc code=end