class Solution
{
public:
    int maxProductPath(vector<vector<int>> &grid)
    {
        int rows = grid.size(), cols = grid[0].size();
        const long long MOD = 1e9 + 7;
        vector<vector<long long>> mMax(rows, vector<long long>(cols, 0));
        vector<vector<long long>> mMin(rows, vector<long long>(cols, 0));
        mMax[0][0] = mMin[0][0] = grid[0][0];
        for (int col = 1; col < cols; col++)
        {
            mMax[0][col] = mMin[0][col] = grid[0][col] * mMax[0][col - 1];
        }
        for (int row = 1; row < rows; row++)
        {
            mMax[row][0] = mMin[row][0] = grid[row][0] * mMax[row - 1][0];
        }
        for (int row = 1; row < rows; row++)
        {
            for (int col = 1; col < cols; col++)
            {
                long long current = grid[row][col];
                long long a = mMax[row - 1][col] * current;
                long long b = mMin[row - 1][col] * current;
                long long c = mMax[row][col - 1] * current;
                long long d = mMin[row][col - 1] * current;
                mMax[row][col] = max(max(a, b), max(c, d));
                mMin[row][col] = min(min(a, b), min(c, d));
            }
        }
        int ans = (mMax[rows - 1][cols - 1]) % MOD;
        if (ans < 0)
            return -1;
        return ans;
    }
};
