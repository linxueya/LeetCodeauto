#
# @lc app=leetcode.cn id=1065 lang=cpp
#
# [1065] binary-string-with-substrings-representing-1-to-n
#
class Solution {
public:
	bool queryString(string S, int N) {

		string str;
		for (int i = 1; i <= N; i++){
			str = decToBin(i);
			if (-1 == S.find(str))
				return false;
		}
		return true;
	}
	string decToBin(int dec) {
		int result = 0, temp = dec, j = 1;
		while (temp) {
			result = result + j * (temp % 2);
			temp = temp / 2;
			j = j * 10;
		}
		return to_string(result);
	}
};

# @lc code=end