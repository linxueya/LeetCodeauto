#
# @lc app=leetcode.cn id=76 lang=cpp
#
# [76] minimum-window-substring
#
class Solution {
public:
	string minWindow(string s, string t) {
		deque<char> win;
		int min = INT_MAX;
		vector<int> vt(58, 0), vs(58, 0);
		for (auto n : t)
			vt[n-'A']++;
		int left = 0,i = 0,min_size = INT_MAX;
		string str,ret;
		for (int right = 0; right < s.size(); right++)
		{
			vs[s[right]-'A']++;

			if (mycmp(vs,vt)) {
				while (mycmp(vs, vt)) {
					str = s.substr(left, right-left+1);
					if (str.size() < min_size) {
						ret = str;
						min_size = str.size();
					}
					vs[s[left] - 'A']--;
					left++;
				}
			}
		}
		return ret;
	}
	bool mycmp(vector<int> vs, vector<int> vt) {
		int i = 0;
		for ( i = 0; i < vt.size(); i++) {
			if (vt[i] <= vs[i])
				continue;
			else
				break;
		}
		return i == vt.size();
	}
};

# @lc code=end