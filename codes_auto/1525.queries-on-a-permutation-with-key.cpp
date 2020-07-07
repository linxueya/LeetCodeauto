#
# @lc app=leetcode.cn id=1525 lang=cpp
#
# [1525] queries-on-a-permutation-with-key
#
class Solution {
public:
    vector<int> processQueries(vector<int>& q, int m) {
        deque<int> v;
        vector<int> ret;
        for (int i = 1; i <= m; i++)
            v.push_back(i);
        for (int i = 0; i < q.size(); i++) {
            int temp = q[i];
            //cout << temp;
            int j = 0;
            for (j = 0; j < v.size(); j++)
                if (v[j] == temp) {
                    ret.push_back(j);
                    break;
                }
                    
            v.erase(v.begin() + j);
            v.push_front(temp);

        }
        return ret;
    }
};
# @lc code=end