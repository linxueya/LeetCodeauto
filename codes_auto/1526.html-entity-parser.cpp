#
# @lc app=leetcode.cn id=1526 lang=cpp
#
# [1526] html-entity-parser
#
class Solution {
public:
    string entityParser(string s) {

        string ret;
        for(int i = 0;i<s.size();i++){
            string str = "";
            if(s[i] == '&'){
                for(int j = i;j<s.size();j++) {
                    if(s[j] == ';'){ 
                        string temp = s.substr(i,j-i+1);
                        cout<<temp<<temp.size()<<endl;;
                        if(temp == "&frasl;")
                            str  = "/";
                        else if(temp == "&quot;")
                            str  = "\"";
                        else if(temp == "&apos;")
                            str  = "\'";
                        else if(temp == "&amp;")
                            str  = "&";
                        else if(temp == "&gt;")
                            str  = ">";
                        else if(temp == "&lt;")
                            str  = "<";
                        else
                            str = temp;
                        i =j;
                        cout<<str;
                        break;
                    }
                }
            }
            if(str.empty())
                ret.push_back(s[i]);
            else
            //ret.push_back(str);
            ret +=  str;
            
        }
       // ret.pop_back();
        return ret;
        

    }


};
# @lc code=end