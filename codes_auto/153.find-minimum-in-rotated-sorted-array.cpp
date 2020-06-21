#
# @lc app=leetcode.cn id=153 lang=cpp
#
# [153] find-minimum-in-rotated-sorted-array
#
class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        while(left<right){
            int mid = left +(right-left)/2;
            if(nums[mid]<nums[right])
                right = mid;
            else
                left = mid +1;
        }
        if (nums[left] > nums[right]){
            return nums[right];
        }
        return nums[left];
    }
};
# @lc code=end