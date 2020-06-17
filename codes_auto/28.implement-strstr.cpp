#
# @lc app=leetcode.cn id=28 lang=cpp
#
# [28] implement-strstr
#
class Solution {
public:
	int strStr(string haystack, string needle) {
		int len1 = haystack.size();
		int len2 = needle.size();
		vector<int> next;
		int i = 0;
		int j = 0;
		if (len1 == 0 && len2 != 0) return -1;
		if (len2 == 0) return 0;
		if (len2 > len1)return -1;
		get_next(needle, next);

		while (i < len1 && j < len2)
		{
			if (-1 == j || haystack[i] == needle[j])
			{
				i++;
				j++;
			}
			else
			{
				j = next[j];
			}
		}

		if (j == len2)
		{
			return i - len2;
		}
		else
		{
			return -1;
		}
	}
	void get_next(string T, vector<int>& next)
	{
		int j = -1;
		int i = 0;
		next.push_back(-1);

		while (i < T.size()-1)
		{
			if (-1 == j || T[i] == T[j])
			{
				i++;
				j++;

			   next.push_back(j);

			}
			else
			{
				j = next[j];
			}
		}
	}
};
# @lc code=end