#
# @lc app=leetcode.cn id=136 lang=cpp
#
# [136] single-number
#
class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int i = 0;
		for ( i = 1; i < nums.size(); i++)
		{
			nums[i] = nums[i-1] ^ nums[i];
		}
		return nums[i-1];
	}
};

# @lc code=end