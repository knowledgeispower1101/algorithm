#include <iostream>
using namespace std;
class Solution {
public:
    const vector<pair<int,int>> COORDINATE = {{0,1}, {0,-1}, {1,0}, {-1,0}};

    bool containsCycle(vector<vector<char>>& grid) {
        int rows = grid.size(), cols = grid[0].size();
        vector<vector<bool>> visited(rows, vector<bool>(cols, false));

        for (int row = 0; row < rows; row++) {
            for (int col = 0; col < cols; col++) {
                if (!visited[row][col]) {
                    if (dfs(grid, visited, row, col, -1, -1)) {
                        return true;
                    }
                }
            }
        }
        return false;
    }

    bool dfs(vector<vector<char>>& grid, vector<vector<bool>>& visited,
             int row, int col, int parent_row, int parent_col) {

        visited[row][col] = true;

        for (auto [dx, dy] : COORDINATE) {
            int new_row = row + dx;
            int new_col = col + dy;

            if (new_row < 0 || new_col < 0 || 
                new_row >= grid.size() || new_col >= grid[0].size()) continue;

            if (grid[new_row][new_col] != grid[row][col]) continue;

            if (!visited[new_row][new_col]) {
                if (dfs(grid, visited, new_row, new_col, row, col)) {
                    return true;
                }
            }
            else if (new_row != parent_row || new_col != parent_col) {
                return true;
            }
        }

        return false;
    }
};