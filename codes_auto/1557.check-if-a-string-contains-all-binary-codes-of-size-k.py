#
# @lc app=leetcode.cn id=1557 lang=python3
#
# [1557] check-if-a-string-contains-all-binary-codes-of-size-k
#
class Solution:
    def hasAllCodes(self, s: str, k: int) -> bool:
        for num in range(2**k):
            numb = bin(num)[2:]
            numb = "0"*(k-len(numb))+numb
            if numb not in s:
                return False;
        return True;
# @lc code=end