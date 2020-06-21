#
# @lc app=leetcode.cn id=567 lang=cpp
#
# [567] permutation-in-string
#
class Solution {
public:
	bool checkInclusion(string s1, string s2) {
		vector<int> ms1(26,0), ms2(26,0);
		for (auto n : s1)
			ms1[n-'a']++;
		int left = 0;
		for (int right = 0; right < s2.size(); right++)	{
			ms2[s2[right]-'a']++;
			if (right >= s1.size()-1) {
				if (ms1 == ms2)
					return true;
				ms2[s2[right - s1.size() + 1] - 'a']--;
			}
		}
		return false;
	}
};
# @lc code=end