#
# @lc app=leetcode.cn id=125 lang=cpp
#
# [125] valid-palindrome
#
class Solution {
public:
	bool isPalindrome(string s) {
		string str;
		for (int i = 0; i < s.size(); i++){
			if (isalpha(s[i]) || isdigit(s[i])) {
				if (isupper(s[i]))
					s[i] += 32;
				str.push_back(s[i]);

			}
		}
		string str1 = str;
		reverse(str.begin(), str.end());
		return str1 == str;
	}
};
# @lc code=end