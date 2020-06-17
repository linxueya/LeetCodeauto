#
# @lc app=leetcode.cn id=20 lang=cpp
#
# [20] valid-parentheses
#
class Solution {
public:
	bool isValid(string s) {
		stack<int> st;
		int num;
		if (s.size() == 1)
			return false;
		if (s[0] == ')' || s[0] == ']' || s[0] == '}')
			return false;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '(')
				st.push(1);
			else if (s[i] == '[')
				st.push(2);
			else if (s[i] == '{')
				st.push(3);
			else if (!st.empty()) {
				if (s[i] == ')') {
					if (1 != st.top())
						return false;
					st.pop();
				}
				else if (s[i] == ']') {
					if (2 != st.top())
						return false;
					st.pop();
				}
				else if (s[i] == '}') {
					if (3 != st.top())
						return false;
					st.pop();
				}
			}else
				return false;

		}
		if (st.empty())
			return true;
		else
			return false;
	}
};
# @lc code=end