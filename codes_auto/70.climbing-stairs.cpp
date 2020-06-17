#
# @lc app=leetcode.cn id=70 lang=cpp
#
# [70] climbing-stairs
#
class Solution {
public:
    int climbStairs(int n) {
        if(n == 0)
            return 1;
        else if(n < 4)
            return n;
        else if(n == 4)
            return 5;
        else if(n == 5)
            return 8;
        return 2*climbStairs(n-4)+3*climbStairs(n-3);
        
    }
};
# @lc code=end