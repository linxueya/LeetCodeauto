#
# @lc app=leetcode.cn id=1519 lang=cpp
#
# [1519] minimum-subsequence-in-non-increasing-order
#
class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int> ret;
        int sum = 0;
        int n =nums.size();
        if(n == 1)
            return nums;
        for(auto n: nums)
            sum += n;
        sort(nums.begin(),nums.end());
        int temp = 0;
        for(int i = n-1;i>=0;i--){
            
            temp += nums[i];
            ret.push_back(nums[i]);
            if(temp > sum-temp)
                break;
        }
        return ret;
    }
};
# @lc code=end