#
# @lc app=leetcode.cn id=51 lang=cpp
#
# [51] n-queens
#
class Solution {
public:
	vector<vector<string>> str;//存结果
	vector<string> chess;//存棋盘
	vector<vector<string>> solveNQueens(int n) {

		string s(n, '.');//既然一行一行试，那就一行一行存
		EightQueen(s, 0, n);
		return str;

	}
	void EightQueen(string& s, int row, int n) {
		if (n == row) {
			str.push_back(chess);
			return;
		}
		else
		{
			for (int j = 0; j < s.size(); j++)
			{
				if (notDanger(row, j, n))     //符合条件了
				{
					s[j] = 'Q';          //就把当前试的这一格放皇后
					chess.push_back(s);    //然后把这一行绘制进棋盘
					s[j] = '.';          //棋盘的下一行应该是没有皇后的
					EightQueen(s, row + 1, n);//去试下一行
					chess.pop_back();         //接下来要去试下一格，刚才绘制进去的那一行删掉
				}

			}
		}
	}

	int notDanger(int row, int col,int n)
	{
		int i, j;
		// 判断列方向
		for (i = 0; i < row; i++)
		{
			if (chess[i][col] != '.')
				return false;
		}

		// 判断左上方
		for (i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
		{
			if (chess[i][j] != '.')
				return false;
		}

		// 判断右上方
		for (i = row - 1 , j = col + 1; i >= 0 && j < n; i--, j++)
		{
			if (chess[i][j] != '.')
				return false;
		}
		return true;
	}
};
# @lc code=end