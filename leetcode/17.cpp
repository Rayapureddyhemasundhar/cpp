class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();

        vector<int> minDist(n, INT_MAX);
        vector<bool> visited(n, false);

        minDist[0] = 0;
        int result = 0;

        for (int i = 0; i < n; i++) {
            int u = -1;

            for (int j = 0; j < n; j++) {
                if (!visited[j] && (u == -1 || minDist[j] < minDist[u]))
                    u = j;
            }

            visited[u] = true;
            result += minDist[u];

            for (int v = 0; v < n; v++) {
                int dist = abs(points[u][0] - points[v][0]) +
                           abs(points[u][1] - points[v][1]);

                if (!visited[v] && dist < minDist[v])
                    minDist[v] = dist;
            }
        }

        return result;
    }
};