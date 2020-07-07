#
# @lc app=leetcode.cn id=1610 lang=cpp
#
# [1610] xor-operation-in-an-array
#
class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> v;
        int ret = 0;
        for(int i = 0;i<n;i++){
            v.push_back(start+2*i);
        }
        for(int i=0;i<n;i++)
            ret = ret^v[i];
        return ret;
    }
};
# @lc code=end