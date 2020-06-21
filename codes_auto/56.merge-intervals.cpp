#
# @lc app=leetcode.cn id=56 lang=cpp
#
# [56] merge-intervals
#
class MyCompare
{
public:
	bool operator()(vector<int> num1, vector<int> num2)
	{
		return num1[0] < num2[0];
	}
};
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        vector<vector<int>> ret;
        sort(v.begin(),v.end());
        for(int i = 0;i < v.size();i++)
        {
            int begin = v[i][0];
            int end = v[i][1];
            int next = i + 1;
            while(next < v.size() && end >= v[next][0]){
                i = next;
                if(end < v[next][1]){
                    end = v[next][1];
                }
                else
                    next++;
            }
            ret.push_back({begin,end});
        }
        return ret;
    }
};
# @lc code=end