#
# @lc app=leetcode.cn id=551 lang=cpp
#
# [551] student-attendance-record-i
#
class Solution {
public:
	bool checkRecord(string s) {
		int cnt_a = 0, cnt_l = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if ('P' == s[i]) {
				cnt_l = 0;
				continue;
			}
			else if ('L' == s[i]) {
				cnt_l++;
				if (cnt_l > 2)
					return false;
			}
			else {
				cnt_l = 0;
				cnt_a++;
				if (cnt_a > 1)
					return false;
			}

		}
		return true;
	}
};
# @lc code=end