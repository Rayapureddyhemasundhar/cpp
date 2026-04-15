#include <queue>
#include <vector>
#include <algorithm>

class Solution {
public:
    int trapRainWater(vector<vector<int>>& heightMap) {
        int m = heightMap.size();
        if (m == 0) return 0;
        int n = heightMap[0].size();

        priority_queue<vector<int>, vector<vector<int>>, greater<>> pq;
        vector<vector<bool>> visited(m, vector<bool>(n, false));

        for (int i = 0; i < m; i++) {
            pq.push({heightMap[i][0], i, 0});
            pq.push({heightMap[i][n-1], i, n-1});
            visited[i][0] = visited[i][n-1] = true;
        }

        for (int j = 0; j < n; j++) {
            pq.push({heightMap[0][j], 0, j});
            pq.push({heightMap[m-1][j], m-1, j});
            visited[0][j] = visited[m-1][j] = true;
        }

        int water = 0;
        int dirs[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

        while (!pq.empty()) {
            auto top = pq.top(); pq.pop();
            int h = top[0], x = top[1], y = top[2];

            for (auto& d : dirs) {
                int nx = x + d[0], ny = y + d[1];

                if (nx >= 0 && ny >= 0 && nx < m && ny < n && !visited[nx][ny]) {
                    visited[nx][ny] = true;
                    water += max(0, h - heightMap[nx][ny]);
                    pq.push({max(h, heightMap[nx][ny]), nx, ny});
                }
            }
        }

        return water;
    }
};