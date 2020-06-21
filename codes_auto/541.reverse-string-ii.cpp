#
# @lc app=leetcode.cn id=541 lang=cpp
#
# [541] reverse-string-ii
#
class Solution {
public:
	string reverseStr(string s, int k) {
		int k2 = 0;
		string str = "";
		while (s.size()) {
			int len = s.size();
			if (len < 2 * k && len > k)
				k2 = len;
			else if (len <= k) {
				k = len;
				k2 = len;
			}
			else
				k2 = 2 * k;

			string s1 = s.substr(0,k2);
			if (k2 < len)
				s = s.substr(k2, len);
			else
				s = "";

			char* p = &s1[0];
			char* q = &s1[k- 1];
			char temp;
			while (p < q) {
				temp = *p;
				*p++ = *q;
				*q-- = temp;
			}
			str = str + s1;
		}
		return str;
	}
};
# @lc code=end