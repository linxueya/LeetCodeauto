#
# @lc app=leetcode.cn id=1582 lang=cpp
#
# [1582] design-browser-history
#
class BrowserHistory {
public:
    vector<string> str;
    string cur;
    BrowserHistory(string homepage) {
        cur = homepage;
        str.push_back(homepage);
    }

    void visit(string url) {

        if (str.back() == cur)
            str.push_back(url);
        else {
            while (str.back() != cur)
                str.pop_back();
            str.push_back(url);
        }
        cur = url;
    }

    string back(int steps) {
        int idx;
        for (int i = 0; i < str.size(); i++)   {
            if (str[i] == cur)   {
                idx = i;
                break;
            }
        }
        int end = idx - steps;
        if (end < 0)end = 0;
        cur = str[end];
        return cur;
    }

    string forward(int steps) {
        int idx;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == cur) {
                idx = i;
                break;
            }
        }
        int end = idx + steps;
        if (end > (str.size()-1))end = str.size() - 1;
        cur = str[end];
        return cur;
    }
};
# @lc code=end