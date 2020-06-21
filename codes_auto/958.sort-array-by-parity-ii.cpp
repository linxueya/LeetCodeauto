#
# @lc app=leetcode.cn id=958 lang=cpp
#
# [958] sort-array-by-parity-ii
#
class Solution {
public:
	vector<int> sortArrayByParityII(vector<int>& A) {
		vector<int> v(A.size(), 0);
		int p = 0;
		int q = 1;
		for (int i = 0; i < A.size(); i++)
		{
			if (A[i] & 1 == 1)
			{
				v[q] = A[i];
				q += 2;
			}
			else 
			{
				v[p] = A[i];
				p += 2;
			}
		}
		return v;
	}
};
# @lc code=end