#
# @lc app=leetcode.cn id=557 lang=cpp
#
# [557] reverse-words-in-a-string-iii
#
class Solution {
public:
	string reverseWords(string s) {
		int cnt_old = 0, cnt_new = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == ' ')
			{
				cnt_old = cnt_new;
				cnt_new = i;
				reverse(s.begin()+cnt_old, s.begin()+cnt_new);
				cnt_new++;
			}
			if(i == s.size()-1)
				reverse(s.begin() + cnt_new, s.end());
		}

		return s;
	}
};

# @lc code=end