#
# @lc app=leetcode.cn id=52 lang=cpp
#
# [52] n-queens-ii
#
class Solution {
public:
	int totalNQueens(int n) {

		int col = n;
		vector<vector<int>> chess(n, vector<int>(n, 0));
		return EightQueen(0, col, chess);
	}
	int EightQueen(int row, int col, vector<vector<int>> chess){
		int cnt = 0, n = chess.size();

		if (n == row)
			cnt++;
		else
		{
			for (int j = 0; j < col; j++)
			{
				if (notDanger(row, j, chess)) // 判断是否危险
				{
					for (int i = 0; i < n; i++)
					{
						chess[row][i] = 0;
					}

					chess[row][j] = 1;

					cnt += EightQueen(row + 1, col, chess);
				}
			}
		}
		return cnt;
	}

	int notDanger(int row, int col, vector<vector<int>> chess)
	{
		int i, j, n = chess.size();
		int flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0, flag5 = 0;
		
		// 判断列方向
		for (i = 0; i < n; i++)
		{
			if (chess[i][col] != 0)
			{
				flag1 = 1;
				break;
			}
		}

		// 判断左上方
		for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
		{
			if (chess[i][j] != 0)
			{
				flag2 = 1;
				break;
			}
		}

		// 判断右下方
		for (i = row, j = col; i < n && j < n; i++, j++)
		{
			if (chess[i][j] != 0)
			{
				flag3 = 1;
				break;
			}
		}

		// 判断右上方
		for (i = row, j = col; i >= 0 && j < n; i--, j++)
		{
			if (chess[i][j] != 0)
			{
				flag4 = 1;
				break;
			}
		}

		// 判断左下方
		for (i = row, j = col; i < n && j >= 0; i++, j--)
		{
			if (chess[i][j] != 0)
			{
				flag5 = 1;
				break;
			}
		}

		if (flag1 || flag2 || flag3 || flag4 || flag5)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
};
# @lc code=end