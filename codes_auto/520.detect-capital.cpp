#
# @lc app=leetcode.cn id=520 lang=cpp
#
# [520] detect-capital
#
class Solution {
public:
	bool detectCapitalUse(string word) {
		int len = word.size();
		if (len == 1)
			return true;
		if (len == 2) {
			if (islower(word[0]) && isupper(word[1]))
				return false;
			else
				return true;
		}
		for (int i = 2; i < len; i++)
		{
			if (isupper(word[0])) {//首字母大写
				if (isupper(word[1]))//第二个字母大写
					if (islower(word[i]))
						return false;
					else
						continue;
				else   //第二个字母大写
					if (isupper(word[i]))
						return false;
					else
						continue;
				
			}
			else {//首字母小写
				if (islower(word[1]))
				{
					if (isupper(word[i]))
						return false;
					else
						continue;
				}
				else
					return false;
			}
		}
		return true;
	}
};
# @lc code=end