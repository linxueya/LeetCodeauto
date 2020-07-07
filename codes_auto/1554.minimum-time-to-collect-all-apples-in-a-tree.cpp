#
# @lc app=leetcode.cn id=1554 lang=cpp
#
# [1554] minimum-time-to-collect-all-apples-in-a-tree
#
class Solution {
public:
	int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
		vector<bool> haspass(n-1, 0);
		int ret = 0;
		map<int,int> edgesr;
		for (int i = 0; i < n-1; i++)
		{
			edgesr.insert(make_pair(edges[i][1], edges[i][0]));
		}
		for (int i = 1; i < n; i++)
		{
			if (false == hasApple[i])
				continue;
			else {
				int j = i;
				while (edgesr[j] != 0) {
					if (haspass[j] == 0)
						ret++;
					haspass[j] = 1;
					j = edgesr[j];

				}
				if (edgesr[j] == 0) {
					if (haspass[j] == 0)
						ret++;
					haspass[j] = 1;
				}

			}
		}
		return ret*2;
	}
};
# @lc code=end