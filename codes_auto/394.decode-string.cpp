#
# @lc app=leetcode.cn id=394 lang=cpp
#
# [394] decode-string
#
class Solution {
public:
	string decodeString(string s) {
		stack<pair<int, string>> st;
		pair<int, string > p = { 0,"" };
		for (auto n : s) {
			if (n == '[') {
				st.push(p);
				p.first = 0;
				p.second = "";
			}
			else if (n == ']') {
				pair<int, string > temp = st.top();
				st.pop();
				string s;
				for (int i = 0; i < temp.first; i++) {
					s += p.second;
				}
				p.second = temp.second + s;
			}
			else if (n >= '0' && n <= '9')
				p.first = p.first * 10 + n - '0';
			else
				p.second += n;
		}
		return p.second;
	}
};

# @lc code=end