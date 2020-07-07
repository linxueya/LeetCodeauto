#
# @lc app=leetcode.cn id=1532 lang=cpp
#
# [1532] reformat-the-string
#
class Solution {
public:
	string reformat(string s) {
		string nums,alp,ret = s;
		int i = 0,p = 0, q = 1;
		for (auto n:s)
		{
			if (isdigit(n))
				nums += n;
			else
				alp += n;
		}
		if ((nums.size() - alp.size()) == 0) {
			while (i < nums.size()) {
				ret[q] = nums[i];
				ret[p] = alp[i];
				i++;
				p += 2;
				q += 2;
			}
		}
		else if ((nums.size() - alp.size()) == 1) {
			while (i < alp.size()) {
				ret[q] = alp[i];
				ret[p] = nums[i];
				i++;
				p += 2;
				q += 2;
			}
			ret[p] = nums[i];
		}
		else if ((alp.size() - nums.size()) == 1) {
			while (i < nums.size()) {
				ret[q] = nums[i];
				ret[p] = alp[i];
				i++;
				p += 2;
				q += 2;
			}
			ret[p] = alp[i];
		}
		else
			return "";

		return ret;
	}
};

# @lc code=end