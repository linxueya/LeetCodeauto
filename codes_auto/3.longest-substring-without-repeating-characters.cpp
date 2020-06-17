#
# @lc app=leetcode.cn id=3 lang=cpp
#
# [3] longest-substring-without-repeating-characters
#
class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		string str;
		int max = 0;
		for (int i = 0; i < s.size(); i++){
			int pos = str.find(s[i]);
			if (pos == -1);
			else if (pos == str.size() - 1)
				str.clear();
			else
				str = str.substr(pos + 1, str.size()-1);
			str.push_back(s[i]);
			if (str.size() > max)
				max = str.size();
		}
		return max;
	}
};
# @lc code=end