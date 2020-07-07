#
# @lc app=leetcode.cn id=1556 lang=cpp
#
# [1556] make-two-arrays-equal-by-reversing-sub-arrays
#
class Solution {
public:
	bool canBeEqual(vector<int>& target, vector<int>& arr) {
		map<int,int> mt, ma;
		for (auto n : target)
			mt[n]++;
		for (auto n : arr)
			ma[n]++;
		return mt == ma;

	}
};
# @lc code=end