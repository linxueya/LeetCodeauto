#
# @lc app=leetcode.cn id=26 lang=cpp
#
# [26] remove-duplicates-from-sorted-array
#
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
            if (nums.size() == 0) {
            return 0;
        }
        int slow = 0;
        for (int fast=1;fast < nums.size();fast++) {
            if (nums[slow] != nums[fast]) {
                nums[slow+1] = nums[fast];
                slow++;
            }
        }
        return slow+1;
    }
};
# @lc code=end