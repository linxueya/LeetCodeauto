#
# @lc app=leetcode.cn id=438 lang=cpp
#
# [438] find-all-anagrams-in-a-string
#
class Solution {
public:
	vector<int> findAnagrams(string s, string p) {
     vector<int> freq_s(26, 0), freq_p(26, 0), v;
		for (auto n : p)
			freq_p[n-'a'] += 1;
		for (int i = 0; i < s.size(); i++) {
			freq_s[s[i]-'a'] += 1;
			if (i >= p.size()-1) {
				if (freq_p == freq_s)
					v.push_back(i - p.size() + 1);
	
				freq_s[s[i - p.size() + 1]-'a'] -= 1;
			}
		}
		return v;
	}
};
# @lc code=end