#
# @lc app=leetcode.cn id=40 lang=cpp
#
# [40] combination-sum-ii
#
class Solution {
public:
	vector<int> v;
	vector<int> path;
	set<vector<int>> ret;
    vector<vector<int>> res;
	vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
		v = candidates;
		dfs(0, target);
        //for(auto n:ret)
           // res.push_back(n);
		return res;
	}
	void dfs(int start, int target)
	{
		if (target == 0) {
			res.push_back(path);
			return;
		}
		for (int i = start; i < v.size() && target>=v[i]; i++)
		{
            if(i>start&&v[i]==v[i-1])
            {
                continue;
            }
			path.push_back(v[i]);
			dfs(i+1, target - v[i]);
			path.pop_back();

		}
	}
};
# @lc code=end