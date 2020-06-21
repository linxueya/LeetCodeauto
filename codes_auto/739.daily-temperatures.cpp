#
# @lc app=leetcode.cn id=739 lang=cpp
#
# [739] daily-temperatures
#
class Solution {
public:
	vector<int> dailyTemperatures(vector<int>& t) {
		int max = 0;
		stack<int> st;
		vector<int> ret(t.size(),0);
		for (int i = 0; i < t.size(); i++)	{
			while (!st.empty() && t[i] > t[st.top()]) {
				int j = st.top();
                ret[j] = i - j ;
                st.pop();
			}
			st.push(i);
		}
		return ret;
	}
};
# @lc code=end