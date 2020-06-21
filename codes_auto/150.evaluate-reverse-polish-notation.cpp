#
# @lc app=leetcode.cn id=150 lang=cpp
#
# [150] evaluate-reverse-polish-notation
#
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int d, e;
        for (int i = 0; i < tokens.size(); i++)
        {
            if (isdigit(tokens[i][0])|| ('-' == tokens[i][0] && "-" != tokens[i])) {
                int num = stoi(tokens[i]);
                st.push(num);
            }
            else if ("+" == tokens[i]) {
                stpop(&st, &d);
                stpop(&st, &e);
                st.push(d + e);
            }
            else if ("-" == tokens[i]) {
                stpop(&st, &d);
                stpop(&st, &e);
                st.push(e - d);
            }
            else if ("*" == tokens[i]) {
                stpop(&st, &d);
                stpop(&st, &e);
                st.push(d * e);
            }
            else if ("/" == tokens[i]) {
                stpop(&st, &d);
                stpop(&st, &e);
                st.push(e / d);
            }
        }

        return st.top();
    }

    void stpop(stack<int>* st,int * num) {
        *num = (*st).top();
        (*st).pop();
    }
};
# @lc code=end