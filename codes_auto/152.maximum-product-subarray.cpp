#
# @lc app=leetcode.cn id=152 lang=cpp
#
# [152] maximum-product-subarray
#
class Solution {
public:
	int maxProduct(vector<int>& nums) {
		int fmax = nums[0], imax = nums[0],imin = nums[0];

		for (int i = 1; i < nums.size(); i++)
		{
			if (nums[i] <0)
			{
				int temp = imax;
				imax = imin;
				imin = temp;
			}
			imax = max(imax * nums[i], nums[i]);
			imin = min(imin * nums[i], nums[i]);
			fmax = max(imax, fmax);
		}

		return  fmax;
	}
};
# @lc code=end