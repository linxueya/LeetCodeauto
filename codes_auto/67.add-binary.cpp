#
# @lc app=leetcode.cn id=67 lang=cpp
#
# [67] add-binary
#
class Solution {
public:
	string addBinary(string a, string b) {
		stack<int> sa;
		stack<int> sb;
		string str;
		for (auto n : a)
			sa.push(n);
		for (auto n:b)
			sb.push(n);
		int temp = 0,ret = 0;
		while (!sa.empty() || !sb.empty()) {
			int an = 0, bn = 0;
			if (!sa.empty()) {
				an = sa.top()-'0';
				sa.pop();
			}
			if (!sb.empty()) {
				bn = sb.top()-'0';
				sb.pop();
			}
			ret = an + bn + temp;
			if (ret >= 2) {
				ret = ret%2;
				temp = 1;
			}
		     else
				temp = 0;
			str.push_back(ret+'0');
		}
		if (temp)
			str.push_back(temp + '0');
		reverse(str.begin(), str.end());
		return str;
	}
};
# @lc code=end