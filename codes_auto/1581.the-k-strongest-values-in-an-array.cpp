#
# @lc app=leetcode.cn id=1581 lang=cpp
#
# [1581] the-k-strongest-values-in-an-array
#
class MyCompare
{
public:
	bool operator()(pair<int, int> p1, pair<int, int> p2)
	{
		if (p1.second > p2.second)
			return true;
		else if (p1.second == p2.second)
			return p1.first > p2.first;
		else
			return false;
	}
};

class Solution {
public:
	vector<int> getStrongest(vector<int>& arr, int k) {
		vector<int> v = arr,ret;
		vector<pair<int, int>> vp;
		int m;
		sort(v.begin(), v.end());
		if ((arr.size() & 1) == 1)
			m = v[v.size() / 2];
		else
			m = v[(v.size()-1) / 2];
		for (auto n : arr) {
			int dif = abs(n - m);
			pair<int,int> p = { n,dif };
			vp.push_back(p);
		}
		sort(vp.begin(), vp.end(), MyCompare());
		for (int i = 0; i < k; i++)
		{
			ret.push_back(vp[i].first);
		}
		return ret;
	}
};
# @lc code=end