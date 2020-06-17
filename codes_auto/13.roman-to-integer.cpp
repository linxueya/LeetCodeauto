#
# @lc app=leetcode.cn id=13 lang=cpp
#
# [13] roman-to-integer
#
class Solution {
public:
    int romanToInt(string s) {
        		int i = 0, x = 0,y =0;
		while (s[i] != NULL) {
			switch (s[i])
			{
			case 'I':
				if (s[i + 1] == 'V') {
					x = 4;
					i = i + 2;
				}
				else if (s[i + 1] == 'X'){
					x = 9;
					i = i + 2;
				}
				else {
					x = 1;
					i++;
				}
				break;
			case 'X':
				if (s[i + 1] == 'L'){
					x = 40;
					i = i + 2;
				}
				else if (s[i + 1] == 'C'){
					x = 90;
					i = i + 2;
				}
				else {
					x = 10;
					i++;
				}
				break;
			case 'C':
				if (s[i + 1] == 'D') {
					x = 400;
					i = i + 2;
				}
				else if (s[i + 1] == 'M') {
					x = 900;
					i = i + 2;
				}
				else {
					x = 100;
					i++;
				}
				break;
			case 'V':
				x = 5;
				i++;
				break;
			case 'L':
				x = 50;
				i++;
				break;
			case 'D':
				x = 500;
				i++;
				break;
			case 'M':
				x = 1000;
				i++;
				break;
			default:
				break;
			}
			y = y + x;
		}

		return y;
    }
};
# @lc code=end