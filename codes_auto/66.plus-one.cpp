#
# @lc app=leetcode.cn id=66 lang=cpp
#
# [66] plus-one
#
class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		vector<int> v = digits;
		v[v.size() - 1] += 1;
		int temp = 0;
		for (int i = v.size()-1; i >= 0; i--)
		{
			v[i] += temp;
			if (v[i] < 10) {
				temp = 0;
				break;
			}
			else {
				temp = 1;
				v[i] = 0;
			}
		}
		if (temp)
			v.insert(v.begin(),  temp);
		return v;
	}
};
# @lc code=end