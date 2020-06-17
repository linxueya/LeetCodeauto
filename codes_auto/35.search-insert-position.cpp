#
# @lc app=leetcode.cn id=35 lang=cpp
#
# [35] search-insert-position
#
class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		int left = 0, right =nums.size()-1;
		int mid = 0;
		while (left <= right)
		{
			mid = (left + right) / 2;
			if (target < nums[mid])
				right = mid - 1;
			else if (target > nums[mid])
				left = mid + 1;
			else
				return mid;
		}
		return left;
	}
};
# @lc code=end