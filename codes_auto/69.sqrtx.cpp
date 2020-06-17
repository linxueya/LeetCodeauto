#
# @lc app=leetcode.cn id=69 lang=cpp
#
# [69] sqrtx
#
	class Solution {
	public:
		int mySqrt(int x) {
			int x1 = 0;
			int x2 = x / 2;
			int x3 = x;
			if (x == 1 || x == 0)
				return x;
			while ((x2 - x1) > 1 || (x3 - x2) > 1) {
				if (x2 > x/x2){
					x3 = x2;
					x2 = (x2 + x1) / 2;

				}
				else if (x2  < x/x2) {
					x1 = x2;
					x2 = (x2 + x3) / 2;
				}
				else
					return x2;
			}
			if (x2 * x2 > x)
				return x2 - 1;
			return x2;
		}
	};
# @lc code=end