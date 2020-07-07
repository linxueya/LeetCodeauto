#
# @lc app=leetcode.cn id=1561 lang=cpp
#
# [1561] rearrange-words-in-a-sentence
#
class Solution {
public:

    static bool cmp(pair<string, int>& a, pair<string, int>& b) {
        if (a.first.size() == b.first.size()) {
            return a.second < b.second;
        }
        return a.first.size() < b.first.size();
    }

    string arrangeWords(string t) {
        vector<pair<string, int>> p;
        vector<string> w;
        t[0] += 32;
        string cur;
        t += " ";
        for (auto& i : t) {
            if (i == ' ') {
                w.push_back(cur);
                cur = "";
            }
            else {
                cur += i;
            }
        }
        for (int i = 0; i < w.size(); i++) {
            p.push_back({ w[i], i });
        }
        sort(p.begin(), p.end(), cmp);
        string res;
        for (auto& i : p) {
            res += i.first + " ";
        }
        res.pop_back();
        res[0] -= 32;
        return res;
    }
};
# @lc code=end