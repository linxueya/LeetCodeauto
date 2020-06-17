#
# @lc app=leetcode.cn id=14 lang=cpp
#
# [14] longest-common-prefix
#
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
		if (strs.size() == 1)return strs[0];
        if(strs.size()==0) return "";
		string a = strs[0];

		for (int i = 1; i < strs.size(); i++) {

			if (strs[i][0] == '\0')return "";
			for (int j = 0; j < strs[0].size(); j++) {
				if (strs[i][j] == a[j])
					a[j] = a[j];
				else {
					a[j] = '\0';  
					break;
				}
				//if (strs[i].size() >= strs[i - 1].size())a[j + 1] = '\0';

			}

			//cout << strs[i] <<endl;
		}
		return a;
    }
};
# @lc code=end