#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    int shortestPath(vector<vector<int>>& grid, int k) {
        int m = grid.size(), n = grid[0].size();

        queue<tuple<int,int,int>> q;
        vector<vector<int>> visited(m, vector<int>(n, -1));

        q.push({0, 0, k});
        visited[0][0] = k;

        int steps = 0;
        int dirs[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

        while (!q.empty()) {
            int sz = q.size();

            while (sz--) {
                auto [x, y, rem] = q.front(); q.pop();

                if (x == m-1 && y == n-1)
                    return steps;

                for (auto& d : dirs) {
                    int nx = x + d[0], ny = y + d[1];

                    if (nx >= 0 && ny >= 0 && nx < m && ny < n) {
                        int newRem = rem - grid[nx][ny];

                        if (newRem >= 0 && visited[nx][ny] < newRem) {
                            visited[nx][ny] = newRem;
                            q.push({nx, ny, newRem});
                        }
                    }
                }
            }

            steps++;
        }

        return -1;
    }
};