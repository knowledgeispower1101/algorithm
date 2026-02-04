#include <iostream>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        unordered_set<char> rows[9];
        unordered_set<char> cols[9];
        unordered_set<char> boxs[9];
        for (int row = 0; row < 9; row++)
        {
            for (int col = 0; col < 9; col++)
            {
                int position = board[row][col];
                if (position == '.')
                    continue;
                int boxNumber = (row / 3) * 3 + (col / 3);
                if (rows[row].count(position) || cols[col].count(position) || boxs[boxNumber].count(position))
                    return false;
                rows[row].insert(position);
                cols[col].insert(position);
                boxs[boxNumber].insert(position);
            }
        }
        return true;
    }
};