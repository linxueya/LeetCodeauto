#
# @lc app=leetcode.cn id=1548 lang=cpp
#
# [1548] check-if-all-1s-are-at-least-length-k-places-away
#
class Solution {
public:
	bool kLengthApart(vector<int>& nums, int k) {
		int cnt_lod, cnt_new = 0,temp,flag = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] == 1 && flag == 0) {
				cnt_lod = cnt_new;
				cnt_new = i;
				flag++;
			}
			else if (nums[i] == 1 && flag == 1)
			{
				
				cnt_lod = cnt_new;
				cnt_new = i;
				temp = cnt_new - cnt_lod - 1;
				if (temp < k)
					return false;
			}
		}
		return true;
	}
};
# @lc code=end