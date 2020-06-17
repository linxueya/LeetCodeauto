#
# @lc app=leetcode.cn id=88 lang=cpp
#
# [88] merge-sorted-array
#
class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		if (0 == n)
			return;
		if (0 == m) {
			nums1 = nums2;
			return;
		}
		vector<int> v;
		int i = 0,  j = 0;
		while( i < m && j < n )
		{
			if (nums1[i] <= nums2[j]) 
				v.push_back(nums1[i++]);
			else 
				v.push_back(nums2[j++]);
		}
		while(i<m)
			v.push_back(nums1[i++]);
		while (j < n)
			v.push_back(nums2[j++]);
		nums1 = v;
	}
};
# @lc code=end