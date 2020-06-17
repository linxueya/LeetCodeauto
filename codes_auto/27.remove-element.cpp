#
# @lc app=leetcode.cn id=27 lang=cpp
#
# [27] remove-element
#
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=0;
        
        if(nums.size()==0)
            return 0;
        for(int idx=0;idx<nums.size();idx++){
         if(nums[idx]!=val){
             nums[n]=nums[idx];
             n++;
         }

        }
        return n;

        }

};
# @lc code=end