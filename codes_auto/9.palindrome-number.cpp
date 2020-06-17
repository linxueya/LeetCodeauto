#
# @lc app=leetcode.cn id=9 lang=cpp
#
# [9] palindrome-number
#
class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0)
            return false;
        int rem=0,y1;
        double y=0;
        int quo=x;
        while(quo!=0){
            rem=quo%10;
            y=y*10+rem;
            quo=quo/10;
            if(y>2147483647)return false;
        }
        y1 = (int)y;
        return y1==x;
    }
};
# @lc code=end