#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>> &grid)
    {
        const int MOD = 12345;
        int rows = grid.size(), cols = grid[0].size();
        vector<vector<int>> result(rows, vector<int>(cols, 1));
        long long prefix = 1;
        for (int row = 0; row < rows; row++)
        {
            for (int col = 0; col < cols; col++)
            {
                result[row][col] = prefix % MOD;
                prefix = prefix * grid[row][col] % MOD;
            }
        }

        long long suffix = 1;
        for (int row = rows - 1; row >= 0; row--)
        {
            for (int col = cols - 1; col >= 0; col--)
            {
                result[row][col] = result[row][col] * suffix % MOD;
                suffix = suffix * grid[row][col] % MOD;
            }
        }
        return result;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> i = {{2, 3}, {4, 5}};
    s.constructProductMatrix(i);
    return 0;
}