#
# @lc app=leetcode.cn id=300 lang=cpp
#
# [300] longest-increasing-subsequence
#
class Solution {
public:
	int lengthOfLIS(vector<int>& nums) {
		vector<int> v;
		int temp;
		v.push_back(1);
		if (0 == nums.size())
			return 0;
		for (int i = 1; i < nums.size(); i++)
		{
			temp = 1;
			for (int j = 0; j < i; j++)
			{
				if (nums[j] < nums[i])
					temp = max(temp, v[j] + 1);
			}
			v.push_back(temp);
		}
		sort(v.begin(), v.end());
		return v.back();
	}
};
# @lc code=end