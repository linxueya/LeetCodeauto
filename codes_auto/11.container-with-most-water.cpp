#
# @lc app=leetcode.cn id=11 lang=cpp
#
# [11] container-with-most-water
#
class Solution {
public:
	int maxArea(vector<int>& height) {
		int* p = &height[0];
		int* q = &height[height.size()-1];
		int sum, max = 0;
		while (p < q) {

			sum = min(*p, *q) * (q - p);
			if (sum > max)
				max = sum;
			if (*p > * q)
				q--;
			else
				p++;
		}
		return max;
	}
};

# @lc code=end