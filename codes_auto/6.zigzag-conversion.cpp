#
# @lc app=leetcode.cn id=6 lang=cpp
#
# [6] zigzag-conversion
#
class Solution
{
public:
    string convert(string s, int numRows)
    {
        if (numRows == 1)
        {
            return s;
        }
        int sSize = int(s.size());
        int storeSize = min(sSize, numRows);
        string result;
        vector<string> store(storeSize);
        int loc = 0;
        //初始有一次更改change值，因此初始值为false
        bool change = false;
        for (int index = 0; index < sSize; index++)
        {
            store[loc].push_back(s[index]);
            if (loc == numRows - 1 || loc == 0)
            {
                change = !change;
            }
            loc += change ? 1 : -1;
        }

        for (int index = 0; index < storeSize; index++)
        {
            result = result + store[index];
        }
        return result;
    }
};
# @lc code=end