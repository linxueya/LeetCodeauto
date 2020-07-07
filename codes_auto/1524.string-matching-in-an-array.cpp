#
# @lc app=leetcode.cn id=1524 lang=cpp
#
# [1524] string-matching-in-an-array
#
class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ret;
        map<string,int> m;
        for(int i = 0;i<words.size();i++){
 
            for(int j = 0;j<words.size();j++){
                if(words[j].find(words[i])!=-1)
                     m[words[i]]++;
            }
        }
        for(auto n:m)
            if(n.second >1)
                ret.push_back(n.first);
        return ret;
    }
};
# @lc code=end