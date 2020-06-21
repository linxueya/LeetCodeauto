#
# @lc app=leetcode.cn id=680 lang=cpp
#
# [680] valid-palindrome-ii
#
class Solution {
public:
	bool validPalindrome(string s) {
		int i = 0, j = s.size() - 1;
		int cnt = 0;
        if(s.size() == 2)
            return true;
		while (i < j)
		{
			if (s[i] == s[j]);
			else if (s[i] == s[j - 1]&& s[i + 1] != s[j]) {
				cnt++;
				j--;
			}
			else if (s[i+1] == s[j] && s[i] != s[j - 1]) {
				cnt++;
				i++;
			}
			else if (s[i + 1] == s[j] && s[i] == s[j - 1]) {
				if (s[i + 2] == s[j])
					i++;
				else if (s[i] == s[j - 2])
					j--;
			}
			else
				return false;
			if (cnt > 1)
				return false;
			i++;
			j--;
		}
		return true;
	}
};
# @lc code=end