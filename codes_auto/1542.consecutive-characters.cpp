#
# @lc app=leetcode.cn id=1542 lang=cpp
#
# [1542] consecutive-characters
#
class Solution {
public:
	int maxPower(string s) {
		int cnt = 1,max = 1;
		for (int i = 1; i < s.size(); i++)
		{
			if (s[i] - s[i - 1] == 0)
			{
				cnt++;
				if (cnt > max)
					max = cnt;
			}
			else
				cnt = 1;
		}
		return max;
	}
};
# @lc code=end