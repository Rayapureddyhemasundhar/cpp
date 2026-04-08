#include <queue>
using namespace std;

int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
    vector<vector<pair<int,int>>> adj(n);

    for (auto &f : flights)
        adj[f[0]].push_back({f[1], f[2]});

    queue<tuple<int,int,int>> q;
    q.push({src, 0, 0});

    vector<int> dist(n, INT_MAX);
    dist[src] = 0;

    while (!q.empty()) {
        auto [node, cost, stops] = q.front(); q.pop();

        if (stops > k) continue;

        for (auto &[nei, price] : adj[node]) {
            if (cost + price < dist[nei]) {
                dist[nei] = cost + price;
                q.push({nei, dist[nei], stops + 1});
            }
        }
    }

    return dist[dst] == INT_MAX ? -1 : dist[dst];
}