#
# @lc app=leetcode.cn id=792 lang=cpp
#
# [792] binary-search
#
class Solution {
public:
	int search(vector<int>& nums, int target) {
		int left = 0, right = nums.size() - 1;
		int mid = (left + right) / 2;
		while (left <= right) {
			if (nums[mid] < target)
				left = mid + 1;
			else if (nums[mid] > target)
				right = mid - 1;
			else
				return mid;
			mid = (left + right) / 2;
		}
		return -1;
	}
};

# @lc code=end