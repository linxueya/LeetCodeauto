#
# @lc app=leetcode.cn id=1534 lang=cpp
#
# [1534] minimum-number-of-frogs-croaking
#
class Solution {
public:
    int minNumberOfFrogs(string croakOfFrogs) {
int c = 0,k = 0,r = 0,a = 0,o = 0;
        int res = 0;
        for(int i = 0;i<croakOfFrogs.size();i++){
            if(croakOfFrogs[i]=='c') c++;
            else if(croakOfFrogs[i]=='r') r++;
            else if(croakOfFrogs[i]=='o') o++;
            else if(croakOfFrogs[i]=='a') a++;
            else if(croakOfFrogs[i]=='k') k++;
            res = max(c-k,res);
            if(c>=r&&r>=o&&o>=a&&a>=k)
                continue;
            else return -1;
        }
        if(c==a&&a==o&&o==k&&r==c)
        return res;
        else return -1;
    }
};
# @lc code=end