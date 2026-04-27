class Solution {
public:
    vector<vector<pair<int,int>>> dirs = {
        {},                         
        {{0,-1},{0,1}},             
        {{-1,0},{1,0}},             
        {{0,-1},{1,0}},            
        {{0,1},{1,0}},              
        {{0,-1},{-1,0}},          
        {{0,1},{-1,0}}              
    };

    bool hasValidPath(vector<vector<int>>& grid) {
        int rows = grid.size(), cols = grid[0].size();
        vector<vector<bool>> visited(rows, vector<bool>(cols, false));
        return dfs(grid, 0, 0, visited, rows, cols);
    }

    bool dfs(vector<vector<int>>& grid, int x, int y, vector<vector<bool>>& visited, int &rows, int &cols) {
        if (x == rows - 1 && y == cols - 1) return true;

        visited[x][y] = true;

        for (auto [dx, dy] : dirs[grid[x][y]]) {
            int nx = x + dx, ny = y + dy;

            if (nx < 0 || ny < 0 || nx >= rows || ny >= cols) continue;
            if (visited[nx][ny]) continue;

            for (auto [ndx, ndy] : dirs[grid[nx][ny]]) {
                if (nx + ndx == x && ny + ndy == y) {
                    if (dfs(grid, nx, ny, visited, rows, cols)) return true;
                }
            }
        }
        return false;
    }
};
// 1  -> x: +1, -1, y not change
// 2  -> y: +1, -1, x not change
// 3  -> x: -1, y: -1
// 4  -> x: +1, y: -1
// 5  -> x: -1, y: +1
// 6  -> x: +1, y: +1