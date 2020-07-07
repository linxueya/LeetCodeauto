#
# @lc app=leetcode.cn id=1604 lang=cpp
#
# [1604] least-number-of-unique-integers-after-k-removals
#
bool cmp(  pair<int, int> p1,   pair<int, int> p2) 
{
    return p1.second < p2.second;
}
class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int, int> m;
        vector<pair<int, int>> v;
        int ret = 0;
        for (int i = 0; i < arr.size(); i++) {
            m[arr[i]]++;
        }
        for (auto n : m)
            v.push_back(make_pair(n.first, n.second));
        sort(v.begin(), v.end(), cmp);
        ret = v.size();
        for (auto n : v) {
            if (n.second <= k) {
                k = k - n.second;
                ret--;
            }
            else if (n.second > k)
                break;
        }
        return ret;
    }
};
# @lc code=end