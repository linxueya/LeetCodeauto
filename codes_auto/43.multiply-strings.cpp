#
# @lc app=leetcode.cn id=43 lang=cpp
#
# [43] multiply-strings
#
class Solution {
public:
    string multiply(string num1, string num2) {
        string ret;
        if(num1 == "0" || num2 == "0")
            return "0";
        for (int i = num2.size() - 1; i >= 0; i--) {

            int num;
            int n2 = num2[i] - '0';
            int flag = 0;
            int j = num1.size() - 1;
            string temp;
            while (j >= 0) {
                int n1 = num1[j--] - '0';
                num = n1 * n2 + flag;
                flag = num / 10;
                num = num % 10;
                temp.push_back(num + '0');
            }
            if (flag)
                temp.push_back(flag+'0');
            reverse(temp.begin(), temp.end());
            for (int j = 0; j < num2.size() - 1 - i; j++)
                temp.push_back('0');
            ret = add(ret, temp);
        }
        return ret;
    }
    string add(string num1, string num2) {
        int i = num1.size() - 1;
        int j = num2.size() - 1;
        int num;
        int flag = 0;
        string ret;
        while (i >= 0 && j >= 0) {
            num = num1[i--] + num2[j--]- 2*'0' + flag;
            flag = num / 10;
            num = num % 10;
            ret.push_back(num + '0');
        }
        while (i >= 0) {
            num = num1[i--] - '0' + flag;
            flag = num / 10;
            num = num % 10;
            ret.push_back(num + '0');
        }
        while (j >= 0) {
            num = num2[j--] - '0' + flag;
            flag = num / 10;
            num = num % 10;
            ret.push_back(num + '0');
        }
        if (flag)
            ret.push_back('1');
        reverse(ret.begin(),ret.end());
        return ret;
    }
};

# @lc code=end