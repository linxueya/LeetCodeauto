#
# @lc app=leetcode.cn id=344 lang=cpp
#
# [344] reverse-string
#
class Solution {
public:
	void reverseString(vector<char>& s) {
		if (s.size() == 0)
			return ;
		char* p = &s[0];
		char* q = &s[s.size() - 1];
		char temp;
		while (p < q) {
			temp = *p;
			*p++ = *q;
			*q-- = temp;

		}

	}
};
# @lc code=end