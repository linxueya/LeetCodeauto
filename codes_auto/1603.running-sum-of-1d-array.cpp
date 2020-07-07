#
# @lc app=leetcode.cn id=1603 lang=cpp
#
# [1603] running-sum-of-1d-array
#
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ret;
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            sum+=nums[i];
            ret.push_back(sum);
        }
        return ret;
    }
};
# @lc code=end