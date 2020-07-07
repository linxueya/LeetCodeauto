#
# @lc app=leetcode.cn id=1560 lang=cpp
#
# [1560] number-of-students-doing-homework-at-a-given-time
#
class Solution {
public:
	int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
		int cnt = 0;
		for (int i = 0; i < startTime.size(); i++)
		{
			if (startTime[i]<=  queryTime && endTime[i] >= queryTime)
				cnt++;
		}
		return cnt;
	}
};
# @lc code=end