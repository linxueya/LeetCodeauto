#
# @lc app=leetcode.cn id=1570 lang=cpp
#
# [1570] final-prices-with-a-special-discount-in-a-shop
#
class Solution {
public:
    vector<int> finalPrices(vector<int>& p) {
        vector<int> ret = p;
        for(int i = 0;i<p.size()-1;i++){
            int temp = 0;
            for(int j = i + 1;j < p.size();j++){
                if(p[j] <= p[i]){
                    temp = p[j];
                    break;
                }
            }
            ret[i] = p[i] - temp;   
        }
        return ret;
    }
};
# @lc code=end