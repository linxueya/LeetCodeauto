#
# @lc app=leetcode.cn id=268 lang=cpp
#
# [268] missing-number
#
class Solution {
public:
	int missingNumber(vector<int>& nums) {
		int i;
		int ret=0;
		for (i = 0; i < nums.size(); i++)
		{
			ret ^= nums[i] ^ i;
		}
		return ret^nums.size();
	}
};
# @lc code=end