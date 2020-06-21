#
# @lc app=leetcode.cn id=36 lang=cpp
#
# [36] valid-sudoku
#
class Solution {
public:
	bool isValidSudoku(vector<vector<char>>& board) {
		for (int i = 0; i < board.size(); i++)
		{
			for (int j = 0; j < board.size(); j++)
			{
                int ret = true;
                if(board[i][j] != '.')
				    ret = check(board,i, j);
				if (ret == false){
                    cout<<i<<j<<endl;
                    return false;
                }
					
			}
		}
		return true;
	}
	bool check(vector<vector<char>>& board, int i, int j) {
		for (int  m = i+1; m < board.size(); m++)
		{
			if (board[i][j] == board[m][j])
				return false;
		}
		for (int n = j+1; n < board.size(); n++)
		{
			if (board[i][j] == board[i][n])
				return false;
		}
		int x = (i / 3) * 3;
		int y = (j / 3) * 3;
		for (int m = x; m < x + 3; m++)
		{
			for (int n = y; n < y + 3; n++)
			{
				if (board[i][j] == board[m][n] && i != m)
					return false;
			}
		}
		return true;
	}
};

# @lc code=end