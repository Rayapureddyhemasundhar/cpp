#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> result;
    vector<int> disc, low;
    vector<vector<int>> adj;
    int timeCounter = 0;

    void dfs(int node, int parent) {
        disc[node] = low[node] = timeCounter++;

        for (int nei : adj[node]) {
            if (nei == parent) continue;

            if (disc[nei] == -1) {
                dfs(nei, node);
                low[node] = min(low[node], low[nei]);

                if (low[nei] > disc[node]) {
                    result.push_back({node, nei});
                }
            } else {
                low[node] = min(low[node], disc[nei]);
            }
        }
    }

    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        adj.resize(n);
        disc.assign(n, -1);
        low.assign(n, -1);

        for (auto &e : connections) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        dfs(0, -1);
        return result;
    }
};