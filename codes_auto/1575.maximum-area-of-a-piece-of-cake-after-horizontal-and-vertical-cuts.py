#
# @lc app=leetcode.cn id=1575 lang=python3
#
# [1575] maximum-area-of-a-piece-of-cake-after-horizontal-and-vertical-cuts
#
class Solution:
    def maxArea(self, h: int, w: int, horizontalCuts: List[int], verticalCuts: List[int]) -> int:

        horizontalCuts.sort()
        verticalCuts.sort()
        last = 0
        max_x,max_y =0,0
        for i in horizontalCuts+[h]:
            max_x = max(max_x,i-last)
            last = i
        last = 0
        for i in verticalCuts+[w]:
            max_y = max(max_y,i-last)
            last = i
        
        return max_x*max_y%(10**9+7)
            
# @lc code=end