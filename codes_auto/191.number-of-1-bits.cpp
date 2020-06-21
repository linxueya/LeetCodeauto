#
# @lc app=leetcode.cn id=191 lang=cpp
#
# [191] number-of-1-bits
#
class Solution {
public:
	int hammingWeight(uint32_t n) {
		int ret = 0;
		while (n)
		{
			if (0 != (n & 1))
				ret++;
			n = n >> 1;
		}
		return ret;
	}
};
# @lc code=end