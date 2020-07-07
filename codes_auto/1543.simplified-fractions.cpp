#
# @lc app=leetcode.cn id=1543 lang=cpp
#
# [1543] simplified-fractions
#
class Solution {
public:
	vector<string> simplifiedFractions(int n) {
		double temp;
		set<double> se;
		vector<string> str;
		string s;
		for (int i = 1; i < n; i++)
		{
			for (int j = i+1; j <= n; j++)
			{
				
				temp = (double)i / (double)j;
				if (se.find(temp) == se.end())
				{
					se.insert(temp);
					s = to_string(i) + "/" + to_string(j);
					str.push_back(s);
				}	
			}
		}
		return str;
	}
};
# @lc code=end