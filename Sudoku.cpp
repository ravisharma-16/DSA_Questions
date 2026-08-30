#include<iostream>
#include<vector>
using namespace std;


class Solution {
    bool safeCheck(int i,int j,int val,vector<vector<char>>& board)
    {
        for(int k = 0; k < board.size(); k++)
        {
            //row
            if(board[i][k] == val)
            {
                return false;
            }
            //col
            if(board[k][j] == val)
            {
                return false;
            }
            //matrix check
            int boxRow = 3 * (i / 3) + k / 3;
            int boxCol = 3 * (j / 3) + k % 3;
            if(board[boxRow][boxCol] == val)
            {
                return false;
            }
        }
        return true;
    }
    bool solve(vector<vector<char>>& board)
    {
        for(int i = 0; i < board.size(); i++)
        {
            for(int j = 0; j < board.size(); j++)
            {
                if(board[i][j] == '.')
                {
                    for(char k = '1'; k <= '9'; k++)
                    {
                        if(safeCheck(i,j,k,board))
                        {
                            board[i][j] = k;
                            bool check = solve(board);
                            if(check)
                            {
                                return true;
                            }
                            else
                            {
                                board[i][j] = '.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};