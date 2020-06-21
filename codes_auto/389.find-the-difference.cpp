#
# @lc app=leetcode.cn id=389 lang=cpp
#
# [389] find-the-difference
#
class Solution {
public:
	char findTheDifference(string s, string t) {
		int i;
		int ret = 0;
		for ( i = 0; i < s.size(); i++)
		{
			ret ^= (int)s[i] ^ (int)t[i];
		}
		return ret ^ (int)t[i];
	}
};
# @lc code=end