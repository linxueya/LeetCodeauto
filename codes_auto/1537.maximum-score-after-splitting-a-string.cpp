#
# @lc app=leetcode.cn id=1537 lang=cpp
#
# [1537] maximum-score-after-splitting-a-string
#
class Solution {
public:
	int maxScore(string s) {
		int temp, max=0;
		int len = s.size();
		for (int i = 1; i < s.size(); i++)
		{
			string s0 = s.substr(0, i);
			string s1 = s.substr(i, len);
			int temp = convstr0(s0) + convstr1(s1);
			if (temp > max)
				max = temp;
		}
		return max;
	}
	int convstr0(string s) {
		int num = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if ('0' == s[i])
				num++;
		}
		return num;
	}
	int convstr1(string s) {
		int num = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if ('1' == s[i])
				num ++;
		}
		return num;
	}
};
# @lc code=end