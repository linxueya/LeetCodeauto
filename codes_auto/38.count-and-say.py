#
# @lc app=leetcode.cn id=38 lang=python3
#
# [38] count-and-say
#
class Solution:
    def countAndSay(self, n: int) -> str:
        if n == 0:
            return ''
        elif n == 1:
            return '1'
        elif n == 2:
            ss = '1'
            result = [(k, len(list(g))) for k, g in itertools.groupby(ss)]
            for key, value in result:
                strs = str(value) + key
        else:
            ss = self.countAndSay(n-1)
            result = [(k, len(list(g))) for k, g in itertools.groupby(ss)]
            strs = ''
            for key, value in result:
                strs = strs + str(value) + key
        return strs
# @lc code=end