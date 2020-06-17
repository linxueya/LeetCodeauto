#
# @lc app=leetcode.cn id=17 lang=cpp
#
# [17] letter-combinations-of-a-phone-number
#
class Solution {
public:
	vector<string> str;
	vector<string> letterCombinations(string digits) {
		vector<string> str;
		vector<string> ret = letterCombinations(str,digits);
		return ret;
	}
	vector<string> letterCombinations(vector<string> str, string digits) {
		vector<string> ss = { "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };
		vector<string> ret ;
		int idx = digits[0] - '0';
		if (digits.size() == 0)
			return str;
		if (str.size() == 0){
			for (int i= 0;i < ss[idx].size();i++)
				str.push_back(ss[idx].substr(i,1));
            digits = digits.substr(1, digits.size() - 1);
            idx = digits[0] - '0';
            if (digits.size() == 0)
			return str;
        }

		for (int i = 0; i < str.size(); i++)
		{
			string temp = str[i];
			for (int j = 0; j < ss[idx].size(); j++)
			{
				string temp1 = temp;
				temp1.push_back(ss[idx][j]);
				ret.push_back(temp1);
			}
		}
		ret = letterCombinations(ret, digits.substr(1, digits.size() - 1));
		return ret;
	}
};

# @lc code=end