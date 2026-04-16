class Solution {
public:
    int n;

    int dfs(vector<vector<int>>& grid, int i, int j, int id) {
        if (i < 0 || j < 0 || i >= n || j >= n || grid[i][j] != 1)
            return 0;

        grid[i][j] = id;
        return 1 + dfs(grid, i+1, j, id) + dfs(grid, i-1, j, id)
                 + dfs(grid, i, j+1, id) + dfs(grid, i, j-1, id);
    }

    int largestIsland(vector<vector<int>>& grid) {
        n = grid.size();
        unordered_map<int, int> area;
        int id = 2, maxArea = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    area[id] = dfs(grid, i, j, id);
                    maxArea = max(maxArea, area[id]);
                    id++;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 0) {
                    unordered_set<int> seen;
                    int newArea = 1;

                    for (auto& d : vector<pair<int,int>>{{1,0},{-1,0},{0,1},{0,-1}}) {
                        int x = i + d.first, y = j + d.second;
                        if (x>=0 && y>=0 && x<n && y<n && grid[x][y] > 1) {
                            seen.insert(grid[x][y]);
                        }
                    }

                    for (int s : seen) newArea += area[s];
                    maxArea = max(maxArea, newArea);
                }
            }
        }

        return maxArea;
    }
};