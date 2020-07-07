#
# @lc app=leetcode.cn id=1566 lang=cpp
#
# [1566] check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence
#
class Solution {
public:
	int isPrefixOfWord(string sentence, string searchWord) {
		sentence.push_back(' ');
		int pos, num, cnt = 0;
		string str;
		pos = sentence.find(' ');
		while ( pos != -1) {

			str = sentence.substr(0, pos);
			num = str.find(searchWord);
			if (str.size()>= searchWord.size() && mycmp(str, searchWord))
				return cnt+1;
			cnt++;
			if (pos == sentence.size() - 1)
				break;
			sentence = sentence.substr(pos+1, sentence.size());
			pos = sentence.find(' ');
		}
		return -1;
	}
	bool mycmp(string str1, string str2) {
		for (int i = 0; i < str2.size(); i++)
		{
			if (str2[i] != str1[i])
			{
				return false;
			}
		}
		return true;
	}
};
# @lc code=end