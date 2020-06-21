#
# @lc app=leetcode.cn id=49 lang=cpp
#
# [49] group-anagrams
#
class Solution {
public:
	vector<vector<string>> groupAnagrams(vector<string>& strs) {
		vector<vector<string>> ret;
		map<string, vector<string>> m;
		for (int i = 0; i < strs.size(); i++)
		{
			string key = strs[i];
			sort(key.begin(), key.end());
			m[key].push_back(strs[i]);
		}
		for (auto n : m)
			ret.push_back(n.second);
		return ret;
	}
};
# @lc code=end