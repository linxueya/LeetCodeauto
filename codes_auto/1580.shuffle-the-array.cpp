#
# @lc app=leetcode.cn id=1580 lang=cpp
#
# [1580] shuffle-the-array
#
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
         vector<int> ret;
        for(int i = 0;i<n;i++){
            ret.push_back(nums[i]);
             ret.push_back(nums[i+n]);
        }
        return ret;
    }
};
# @lc code=end