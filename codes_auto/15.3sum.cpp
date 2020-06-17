#
# @lc app=leetcode.cn id=15 lang=cpp
#
# [15] 3sum
#
class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		vector<vector<int>> v;
		if (nums.size() < 3)
			return v;
		sort(nums.begin(), nums.end());
		for (int i = 0; i < nums.size()-2; i++)
		{
			int sum = 0;
			int p = i + 1;
			int q = nums.size() - 1;
			if (nums[i] > 0)
				return v;
			if (i > 0 && nums[i] == nums[i - 1])
				continue;
			while (p < q)
			{
				sum = nums[i] + nums[p] + nums[q];
				if (sum < 0)
					p++;
				else if (sum > 0)
					q--;
				else
				{
					vector<int> v1{ nums[i],nums[p],nums[q] };
					v.push_back(v1);
					while (p < q && nums[p] == nums[p + 1])
						p++;
					while (p < q && nums[q] == nums[q - 1])
						q--;
					p++;
					q--;
					
				}
			}
		}
		return v;
	}
};
# @lc code=end