#
# @lc app=leetcode.cn id=1539 lang=cpp
#
# [1539] diagonal-traverse-ii
#
class number {
public:
	number(int nu, int co,int li)
	{
		num = nu;
		col = co;
		line = li;
		sor = col + line;
	}
	int num;//shuzi
	int col;
	int sor;
	int line;
};
class MyCompare
{
public:
	bool operator()(number num1, number num2)
	{

		if (num1.sor < num2.sor)
			return true;
		else if (num1.sor == num2.sor )
			return num1.col > num2.col;
		else
			return false;
	}
};
class Solution {
public:
	vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
		vector<number> v;
		vector<int> ve;
		for (int i = 0; i < nums.size(); i++)
		{
			for (int j = 0; j < nums[i].size(); j++)
			{
				int sor0 = 0;
				if (nums[i][j] != 0) {
					sor0 = i + j;
					number nu(nums[i][j], i, j);
					v.push_back(nu);
				}		
			}
		}
		sort(v.begin(), v.end(), MyCompare());
		for (int i = 0; i < v.size(); i++)
		{
			ve.push_back(v[i].num);
		}
		return ve;
	}
};
# @lc code=end