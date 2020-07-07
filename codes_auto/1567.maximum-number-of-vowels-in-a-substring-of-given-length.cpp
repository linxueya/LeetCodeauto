#
# @lc app=leetcode.cn id=1567 lang=cpp
#
# [1567] maximum-number-of-vowels-in-a-substring-of-given-length
#
class Solution {
public:
    int maxVowels(string s, int k) {
        deque<char> window;
        int res = 0,cnt = 0;
        for (int i = 0; i < s.size(); i++) {
            if (i < k ) { //先填满窗口的前 k - 1
                window.push_back(s[i]);
            }
            else { // 窗口向前滑动
                window.push_back(s[i]);

                if (window.front() == 'a' || window.front() == 'e' || window.front() == 'i' || window.front() == 'o' || window.front() == 'u')
                    cnt--;
                window.pop_front();
            }
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                cnt++;
            res = max(res, cnt);
        }
        return res;
    }
    int maxchar(deque<char> s, int k) {
        int cnt = 0;
        for (int i = 0; i < k; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                cnt++;
        }
        return cnt;
    }
};
# @lc code=end