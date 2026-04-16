class Solution {
public:
    int m, n;
    vector<vector<int>> dp;
    int dirs[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

    int dfs(vector<vector<int>>& matrix, int x, int y) {
        if (dp[x][y]) return dp[x][y];

        int maxLen = 1;

        for (auto& d : dirs) {
            int nx = x + d[0], ny = y + d[1];

            if (nx >= 0 && ny >= 0 && nx < m && ny < n &&
                matrix[nx][ny] > matrix[x][y]) {

                maxLen = max(maxLen, 1 + dfs(matrix, nx, ny));
            }
        }

        return dp[x][y] = maxLen;
    }

    int longestIncreasingPath(vector<vector<int>>& matrix) {
        m = matrix.size();
        n = matrix[0].size();
        dp = vector<vector<int>>(m, vector<int>(n, 0));

        int result = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                result = max(result, dfs(matrix, i, j));
            }
        }

        return result;
    }
};