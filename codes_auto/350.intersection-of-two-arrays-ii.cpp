#
# @lc app=leetcode.cn id=350 lang=cpp
#
# [350] intersection-of-two-arrays-ii
#
class Solution {
public:
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
		multimap<int, int> m;
		vector<int> v;
		multimap<int, int>::iterator pos;
		if (nums1.size() > nums2.size()) {
			for (auto n : nums1)
				m.insert(make_pair(n, 1));
			for (auto n : nums2)
				if ((pos = m.find(n)) != m.end()) {
					v.push_back(n);
					m.erase(pos);
				}
		}
		else {
			for (auto n : nums2)
				m.insert(make_pair(n, 1));
			for (auto n : nums1)
				if ((pos = m.find(n)) != m.end()) {
					v.push_back(n);
					m.erase(pos);
				}
		}
		return v;
	}
};
# @lc code=end