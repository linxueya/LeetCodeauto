#
# @lc app=leetcode.cn id=521 lang=cpp
#
# [521] longest-uncommon-subsequence-i
#
class Solution {
public:
    int findLUSlength(string a, string b) {
    if(a == b)
        return -1;
    else
        return max(a.size(),b.size());
    }
};
# @lc code=end