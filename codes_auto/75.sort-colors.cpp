#
# @lc app=leetcode.cn id=75 lang=cpp
#
# [75] sort-colors
#
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int p = 0;    
        int q = nums.size()-1;      
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == 0 && i > p)
                swap(nums[i--],nums[p++]);    //i--是为了判断交换后当前值是否为2
            if(nums[i] == 2 && i < q)
                swap(nums[i--],nums[q--]);
        }
    }
};
# @lc code=end