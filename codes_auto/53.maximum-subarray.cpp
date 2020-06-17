#
# @lc app=leetcode.cn id=53 lang=cpp
#
# [53] maximum-subarray
#
class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		vector<int> v;
		v.push_back(nums[0]);
		int ret = nums[0];
		for (size_t i = 1; i < nums.size(); i++)
		{
			if (v[i-1] < 0)
				v.push_back(nums[i]);
			else
				v.push_back(nums[i]+v[i-1]);
			ret = max(ret, v[i]);
		}

		return ret;
	}
};
# @lc code=end