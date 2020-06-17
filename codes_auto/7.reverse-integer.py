#
# @lc app=leetcode.cn id=7 lang=python3
#
# [7] reverse-integer
#
class Solution:
    def reverse(self, x: int) -> int:
        new = 0
        x, flag= abs(x), 1 if x >=0 else -1
        while x:
            y = x % 10
            x = x // 10
            new = new*10 + y
        if (new * flag >= -2**31) and (new * flag <= 2**31-1):
            return new * flag
        else:
            return 0
# @lc code=end