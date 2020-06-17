#
# @lc app=leetcode.cn id=58 lang=cpp
#
# [58] length-of-last-word
#
class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s.length() == 0) return 0;
        int count = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == ' ') {
                if (count == 0) continue;
                break;
            }
            count++;
        }
        return count;
    }
};
# @lc code=end