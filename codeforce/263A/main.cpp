#include <iostream>
#include <queue>
using namespace std;
int dr[4] = {-1, 1, 0, 0};
int dc[4] = {0, 0, -1, 1};
int main() {
    int a[5][5];
    int sr, sc;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> a[i][j];
            if (a[i][j] == 1) {
                sr = i;
                sc = j;
            }
        }
    }

    queue<pair<int,int>> q;
    bool visited[5][5] = {false};
    int dist[5][5] = {0};

    q.push({sr, sc});
    visited[sr][sc] = true;



    while (!q.empty()) {
        auto cur = q.front();
        q.pop();

        int r = cur.first;
        int c = cur.second;

        if (r == 2 && c == 2) {  
            cout << dist[r][c] << endl;
            break;
        }

        for (int i = 0; i < 4; i++) {
            int nr = r + dr[i];
            int nc = c + dc[i];

            if (nr >= 0 && nr < 5 && nc >= 0 && nc < 5 && !visited[nr][nc]) {
                visited[nr][nc] = true;
                dist[nr][nc] = dist[r][c] + 1;
                q.push({nr, nc});
            }
        }
    }

    return 0;
}