#include <bits/stdc++.h>
using namespace std;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main() {
    srand(time(0));

    int n = 10, m = 10;
    vector<vector<int>> maze(n, vector<int>(m));

    // Generate random maze (0 = free, 1 = wall)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            maze[i][j] = rand() % 3 == 0; // random walls
        }
    }

    maze[0][0] = 0;
    maze[n-1][m-1] = 0;

    vector<vector<int>> dist(n, vector<int>(m, -1));
    queue<pair<int,int>> q;

    q.push({0, 0});
    dist[0][0] = 0;

    // BFS for shortest path
    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for (int d = 0; d < 4; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];

            if (nx >= 0 && ny >= 0 && nx < n && ny < m &&
                maze[nx][ny] == 0 && dist[nx][ny] == -1) {
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }

    // Print maze
    cout << "Maze (0 = path, 1 = wall):\n";
    for (auto &row : maze) {
        for (int cell : row)
            cout << cell << " ";
        cout << "\n";
    }

    cout << "\nShortest distance from (0,0) to (n-1,m-1): ";
    cout << dist[n-1][m-1] << endl;

    return 0;
}
