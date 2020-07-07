#
# @lc app=leetcode.cn id=1458 lang=cpp
#
# [1458] sort-integers-by-the-number-of-1-bits
#
class Solution {
public:
	vector<int> sortByBits(vector<int>& arr) {
		vector<vector<int>> v(0, vector<int>(2, 0));
		for (size_t i = 0; i < arr.size(); i++)
		{
			int temp = cnt1(arr[i]);
			vector<int> v1{ temp,arr[i] };
			v.push_back(v1);
		}
		sort(v.begin(), v.end());
		vector<int> ret;
		for (auto n: v)
		{
			ret.push_back( n[1]);
		}
		return ret;
	}
	int cnt1(int num)
	{
		int ret = 0;
		while (num)
		{
			if (num & 1 == 1)
				ret++;
			num = num >> 1;
		}
		return ret;
	}
};

# @lc code=end