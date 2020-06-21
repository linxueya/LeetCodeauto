#
# @lc app=leetcode.cn id=372 lang=cpp
#
# [372] super-pow
#
class Solution {
public:
    int superPow(int a, vector<int>& b) {
        long long result = 1;
        long long power = 0;
        for(auto n:b)
            power = (power * 10 + n) % 1140;
        a = a % 1337;
        while (power > 0) {
            if (power & 1) {//此处等价于if(power%2==1)
                result = result * a % 1337;
            }
            power >>= 1;//此处等价于power=power/2
            a = (a * a) % 1337;
        }
        return result;
    }
};
# @lc code=end