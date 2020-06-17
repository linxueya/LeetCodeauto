#
# @lc app=leetcode.cn id=50 lang=cpp
#
# [50] powx-n
#
class Solution {
public:
    double myPow(double x, int n) {
    double result = 1;
    int flag = n>0?1:-1;
    n = abs(n);
    while (n > 0) {
        if (n & 1) {//此处等价于if(n%2==1)
            result = result * x ;
        }
        n >>= 1;//此处等价于n=n/2
        x = (x * x) ;
    }
    return flag>0?result:1/result;
    }
};
# @lc code=end