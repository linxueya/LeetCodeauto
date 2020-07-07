#
# @lc app=leetcode.cn id=1547 lang=cpp
#
# [1547] destination-city
#
class Solution {
public:
	string destCity(vector<vector<string>>& str) {
		int len = str.size();
		string temp,ret1,ret2;
		map<string, string> m;
		for (int i = 0; i < len; i++)
		{
			m.insert(make_pair(str[i][0], str[i][1]));
		}
		map<string, string>::iterator pos;
		map<string, string>::iterator it = m.begin();
		temp = (*it).second;
		while (1)
		{
			pos = m.find(temp);
			if (pos == m.end())
				break;
			temp = (*pos).second;
		}
		ret1 = temp;
		for (map<string,string>::iterator it = m.begin(); it != m.end(); it++)
		{
			map<string, string>::iterator pos;
			temp = (*it).second;
			while (1)
			{
				pos = m.find(temp);
				if (pos == m.end())
					break;
				temp = (*pos).second;
			} 
			ret2 = temp;
			if (ret1 != ret2)
			{
				return "";
			}

		}

		return ret2;
	}
};
# @lc code=end