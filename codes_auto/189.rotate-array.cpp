#
# @lc app=leetcode.cn id=189 lang=cpp
#
# [189] rotate-array
#
class Solution {
public:
	void rotate(vector<int>& nums, int k) {

		reverse(nums.begin(), nums.end()-k% nums.size());
		reverse(nums.end()-k% nums.size(), nums.end());
		reverse(nums.begin(), nums.end());
	}
};
# @lc code=end