#
# @lc app=leetcode.cn id=1520 lang=cpp
#
# [1520] number-of-steps-to-reduce-a-number-in-binary-representation-to-one
#
class Solution {
public:
    int numSteps(string s) {
        int cnt = 0;
        //cout<<num;
        while(s != "1"){
            if((s[s.size()-1]) == '1'){
                    stradd(s);
            }

            else
                s = s.substr(0,s.size()-1);
            cnt++;
        }
        return cnt;
    }
    void stradd(string& s){
        s[s.size()-1] = '0';
        int p = s.size() - 2;
        int flag = 1;
        while(p >=0 && flag == 1){
            if(s[p] == '1'){
                 flag = 1;
                 s[p--] = '0';
            }              
            else{
                flag = 0;
                s[p--] = '1';
            }    
        }
        if(flag == 1)
            s = "1"+s;
    }
};
# @lc code=end