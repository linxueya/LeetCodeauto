#
# @lc app=leetcode.cn id=39 lang=cpp
#
# [39] combination-sum
#
class Solution {
public:
	vector<int> v;
	vector<int> path;
	vector<vector<int>> ret;
	vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
		v = candidates;
		dfs(0, target);
		return ret;
	}
	void dfs(int start, int target)
	{
		if (target == 0) {
			ret.push_back(path);
			return;
		}
		for (int i = start; i < v.size() && target>=v[i]; i++)
		{
			path.push_back(v[i]);
			dfs(i, target - v[i]);
			path.pop_back();
		}
	}
};

# @lc code=end