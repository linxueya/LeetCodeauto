#
# @lc app=leetcode.cn id=231 lang=cpp
#
# [231] power-of-two
#
class Solution {
public:
	bool isPowerOfTwo(int n) {
		int temp;
if(n<=0)
    return false;
		while (n)
		{
			temp = n;
			n = n >> 1;
			if ((temp != (n << 1)) && (n != 0))
				return false;
		}
		return true;
	}
};
# @lc code=end