#
# @lc app=leetcode.cn id=1552 lang=cpp
#
# [1552] build-an-array-with-stack-operations
#
class Solution {
public:
	vector<string> buildArray(vector<int>& target, int n) {
		vector<string> str;
		stack<int> num;
		int j = 0;
		for (int i = 0; i < n; i++)
		{
			num.push(i+1);
			str.push_back("Push");
			if (num.top() != target[j]) {
				num.pop();
				str.push_back("Pop");
			}
			else
				j++;
			if (j == target.size())
				break;
		}
		return str;
	}
};
# @lc code=end