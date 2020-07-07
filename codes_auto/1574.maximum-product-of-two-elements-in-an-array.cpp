#
# @lc app=leetcode.cn id=1574 lang=cpp
#
# [1574] maximum-product-of-two-elements-in-an-array
#
class Solution {
public:
	int maxProduct(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		return (nums[nums.size() - 1] - 1) * (nums[nums.size() - 2] - 1);

	}
};

# @lc code=end