#
# @lc app=leetcode.cn id=349 lang=cpp
#
# [349] intersection-of-two-arrays
#
class Solution {
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		map<int, int> m;
		vector<int> v;
		for (auto n : nums1)
			m.insert(make_pair(n, 1));
		for (auto n : nums2)
			if (m[n] != NULL) {
				v.push_back(n);
				m.erase(n);
			}
		return v;
	}
};
# @lc code=end